#include <iostream>
#include <sstream>

std::string i2s(int $) {
  std::stringstream _;
  _<<$;
  return _.str();
}

int promptInt(std::string n) {
  int _;
  std::cout << n << "> ";
  while(!(std::cin>>_)) {
    std::cout << n << "> ";
    std::cin.clear();
    std::cin.ignore();
  }
  return _;
}


int main() {
  int n = promptInt("n");
  int* a = new int[n];
  for(int i=0; i<n; i++) {
    a[i] = promptInt("a["+i2s(i)+"]");
  }
  int _min = a[0];
  for(int i=1; i<n; i++) {
    if(_min>a[i]) {
      _min = a[i];
    }
  }
  std::cout << _min;
  delete [] a;
}
