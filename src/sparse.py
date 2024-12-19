import os
import csv

# Define the download path
download_path = "./matrices/suitesparse"

# Create the download directory using mkdir -p to handle nested directories
os.system(f"mkdir -p {download_path}")

# CSV filename
filename = "./matrix_list.csv"

# Count total lines in the CSV (assuming no empty lines)
with open(filename, 'r') as f:
    total = sum(1 for line in f)
print(f"Total matrices to download: {total - 1}")  # Subtract 1 for the header

# Open and read the CSV file
with open(filename, 'r') as csvfile:
    csv_reader = csv.reader(csvfile)
    header = next(csv_reader)  # Skip the header
    for i, cur_row in enumerate(csv_reader, start=1):
        # Extract group and matrix name from the current row
        group = cur_row[1]
        matrix_name = cur_row[2]

        # Define the matrix group path
        matrix_group = os.path.join(download_path, group)

        # Define the path to the .mtx file
        mtx_path = os.path.join(matrix_group, matrix_name, f"{matrix_name}.mtx")

        # Check if the .mtx file exists
        if not os.path.exists(mtx_path):
            # Create the group directory if it doesn't exist
            if not os.path.exists(matrix_group):
                os.system(f"mkdir -p {matrix_group}")
                print(f"Created directory: {matrix_group}")

            # Define the URL to download the tar.gz file
            matrix_url = f"https://suitesparse-collection-website.herokuapp.com/MM/{group}/{matrix_name}.tar.gz"
            # Alternatively, use the commented URL if needed
            # matrix_url = f"http://sparse-files.engr.tamu.edu/MM/{group}/{matrix_name}.tar.gz"

            # Download the tar.gz file using wget
            print(f"Downloading {matrix_name} from {matrix_url}...")
            os.system(f"wget -O {matrix_name}.tar.gz {matrix_url}")

            # Define the path to the downloaded tar.gz file
            tar_path = f"{matrix_name}.tar.gz"

            # Move the tar.gz file to the download directory
            print(f"Moving {tar_path} to {download_path}...")
            os.system(f"mv {tar_path} {download_path}")

            # Extract the tar.gz file into the matrix group directory
            print(f"Extracting {tar_path} into {matrix_group}...")
            os.system(f"tar -zxvf {os.path.join(download_path, tar_path)} -C {matrix_group}/")

            # Remove the tar.gz file after extraction
            print(f"Removing {os.path.join(download_path, tar_path)}...")
            os.system(f"rm -f {os.path.join(download_path, tar_path)}")

            print(f"Successfully downloaded and extracted {matrix_name}.\n")
        else:
            print(f"Matrix {matrix_name} already exists. Skipping download.\n")
