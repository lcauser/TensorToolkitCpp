#include <vector>
#include <complex>
#include "Tensor.h"
#include "Tensor.cpp"

// Creating a tensor with zero entries
Tensor zeros(std::vector<int> dims);
Tensor zeros(int dim);

// Creating a tensor with one entries 
Tensor ones(std::vector<int> dims);
Tensor ones(int dim);

// Creating diagonal tensors 
Tensor diag(int dims, int size);
Tensor diag(int size);