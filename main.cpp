#include "tensors/Tensor.cpp"

int main() {
  Tensor t({2, 4});
  t.print();
  std::vector<int> shape = t.shape();
  std::cout << "(";
  for (auto dim : shape) {
    std::cout << dim << ",";
  }
  std::cout << ")" << std::endl;
  std::cout << t.size() << std::endl;
  std::cout << t.size(1) << std::endl;

  //std::complex<double> num(1.0, 2.0);
  //std::cout << num << std::endl;

  return 0;
}