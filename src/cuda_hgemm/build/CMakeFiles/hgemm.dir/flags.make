# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.20

# compile CUDA with /data/homezvol3/hsud8/.conda/envs/smat/bin/nvcc
CUDA_DEFINES = -DGFLAGS_IS_A_DLL=0

CUDA_INCLUDES = -I/pub/hsud8/smat/src/cuda_hgemm/src/common -I/usr/local/cuda/include -isystem=/data/homezvol3/hsud8/.conda/envs/smat/include

CUDA_FLAGS = -O3 -DNDEBUG --generate-code=arch=compute_80,code=[compute_80,sm_80] -Wall -Werror -Wextra -Wswitch-default -Wfloat-equal -Wshadow -Wcast-qual -std=c++17

