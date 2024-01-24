#include <vector>
#include <complex>

// Imaginary unit; move later?
//const std::complex<double> i(0.0, 1.0);

class Tensor {
  protected:
    // Information of the tensor
    std::vector<int> dims; // Store the dimensions of the tensor
    std::vector<std::complex<double>> tensor; // The data as a 1D vector
    std::vector<int> permutations; // allow the dimensions to be permuted
    bool conjugated; // Is the tensor conjugated?
    std::vector<int> els_per_dim; // Number of hierarchical elements

    // Methods only for the tensor 
    int getIndex(std::vector<int> idxs);
    int getIndex(int idx);

  public:
    // Constructors
    Tensor(std::vector<int> dims); //  multiple dimensions
    Tensor(int dim); // vector

    // Output information 
    void print();
    int size();
    int size(int dim);
    std::vector<int> shape();


    // Assigning elements; to add: indexing
    void setElement(std::vector<int> idxs, std::complex<double> val);
    void setElement(int idx, std::complex<double> val);
    void setElement(std::vector<int> idxs, double val);
    void setElement(int idx, double val);

    // Fetching elements
    std::complex<double> getElement(std::vector<int> idxs);
    std::complex<double> getElement(int idx);

    // Manipulating the tensor 
    void permute(std::vector<int> idxs); // Permute all dimensions
    void permute(int idx1, int idx2); // Swap two dimensions
    void conj(); // Take the complex conjugate
};

