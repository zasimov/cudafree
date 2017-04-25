/**
  * cudafree prints total and free memory in bytes
  *
  * Example output:
  * 2147483648 177237196
  */

#include <cuda.h>
#include <cuda_runtime_api.h>
#include <stdio.h>

int main() {
    size_t free;
    size_t total;

    cudaError_t err = cudaMemGetInfo(&free, &total);
    if (err != cudaSuccess)
        return 1;

    printf("%zd %zd\n", total, free);

    return 0;
}