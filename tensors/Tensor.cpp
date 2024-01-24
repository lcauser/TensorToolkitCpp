#include <vector>
#include <complex>
#include <iostream>
#include "Tensor.h"

/*
    Constructors
*/
Tensor::Tensor(std::vector<int> dims) : dims(dims) {
  // Calculate the number of elements
  dims = dims;
  int prod = 1;
  els_per_dim = std::vector<int>(dims.size());
  for (int i = 0; i < dims.size(); i++) {
    // Store the number of elements in subsequent dimensions
    els_per_dim[dims.size() + 1 - i] = prod;

    // Calculate the product
    prod = prod * dims[i];
  }
  tensor = std::vector<std::complex<double>>(prod);
  
  // Set default parameters for the tensor 
  conjugated = 0;
  permutations = std::vector<int>(dims.size());
  for (int i = 0; i < dims.size(); i++) {
    permutations[i] = i;
  }
}

Tensor::Tensor(int dim) {
  Tensor({dim});
}


/*
    Printing information
*/
void Tensor::print() {
  for (int i = 0; i < tensor.size(); i++) {
    std::cout << tensor[i] << " ";
  }
  std::cout << std::endl;
}


/*
    Dimensions 
*/
int Tensor::size() {
  int prod = 1;
  for (int dim : dims) {
    prod *= dim;
  }
  return prod;
}

int Tensor::size(int dim) {
  return dims[dim];
}

std::vector<int> Tensor::shape() {
  return dims;
}


/*
    Permuting dimensions
*/
void Tensor::permute(int idx1, int idx2) {
  int temp = permutations[idx1]
  permutations[idx1] = permutations[idx2]
  permutations[idx2] = temp
}

void Tensor::permute(std::vector<int> idxs) {
  std::vector<int> perms = permutations 
  for (i = 0; i < dims.size(); i++) {
    perms[i] = permutations[idxs[i]]
  }
  
}


/*
    Indexing the tensor
*/
int Tensor::getIndex(std::vector<int> idxs) {
  int idx = 0;
  for (int i = 0; i < idxs.size(); i++) {
    idx += dims[permutations[i]] * els_per_dim[i];
  }
  return idx;
}

int Tensor::getIndex(int idx) {
  return idx;
}


/*
    Setters
*/
void Tensor::setElement(std::vector<int> idxs, std::complex<double> val) {
  
}