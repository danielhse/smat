import numpy as np
import scipy.sparse as sp
import scipy.io as spio
import os
import sys

def generate_band_mtx_matrix(N: int, b: int, foldername: str = None, filename: str = None):
    """
    Generate a sparse banded matrix of size N x N with bandwidth b.
    Store it to the disk in .mtx format.
    The values of the matrix are all 1.
    """
    
    if foldername is None:
        foldername = 'matrices/band_matrices_4_times'

    if filename is None:
        filename = f'band_mtx_{N}_{b}.mtx'

    # Ensure the folder exists
    os.makedirs(foldername, exist_ok=True)

    # Check if bandwidth is valid
    if b >= N:
        print(f"Skipping generation for b={b} >= N={N} to avoid creating dense matrices.")
        return

    # Define the diagonal offsets
    band_offsets = range(-b, b + 1)

    # Create the sparse matrix using scipy.sparse.diags
    diagonals = [np.ones(N - abs(k)) for k in band_offsets]
    band_matrix = sp.diags(diagonals, offsets=band_offsets, shape=(N, N), format='coo')

    # Diagnostic prints
    print(f"DEBUG: N={N}, b={b}, num_diagonals={len(band_offsets)}, total_nonzeros={band_matrix.nnz}")

    # Save the matrix in Matrix Market format
    spio.mmwrite(os.path.join(foldername, filename), band_matrix)
    print(f"Saved matrix {filename} in {foldername}")

def main():
    # Parse command-line arguments
    n = len(sys.argv)
    if n < 5:
        N_min = 16384
        N_max = 16384
        b_min = 64
        b_max = 16384  # Changed from 16385 to 16384 to ensure b < N
    else:
        try:
            N_min = int(sys.argv[1])
            N_max = int(sys.argv[2])
            b_min = int(sys.argv[3])
            b_max = int(sys.argv[4])
        except ValueError:
            print("Please provide integer values for N_min, N_max, b_min, and b_max.")
            sys.exit(1)

    N = N_min
    while N <= N_max:
        b = b_min
        current_b_max = min(b_max, N - 1)  # Ensure b < N
        while b <= current_b_max:
            generate_band_mtx_matrix(N, b)
            b *= 4
        N *= 2

if __name__ == '__main__':
    main()
