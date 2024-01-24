#include "tensors/Tensor.cpp"

int main() {
  Tensor t({2, 4});

  t.setElement({0, 0}, 1);
  t.setElement({0, 1}, 2);
  t.setElement({0, 2}, 3);
  t.setElement({0, 3}, 4);
  t.setElement({1, 0}, 5);
  t.setElement({1, 1}, 6);
  t.setElement({1, 2}, 7);
  t.setElement({1, 3}, 8);

  t.print();

  std::cout << t.getElement({0, 1}) << std::endl;
  std::cout << t.getElement({1, 0}) << std::endl;
  t.permute({1, 0});
  std::cout << t.getElement({0, 1}) << std::endl;
  std::cout << t.getElement({1, 0}) << std::endl;
  
  return 0;
}