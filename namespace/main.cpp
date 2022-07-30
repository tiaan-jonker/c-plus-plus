#include <iostream>
using namespace std;

double square(double x) {
  return x * x;
}

void print_square(double x) {
  cout << "The square of " << x << " is " << square(x) << endl;
}

int main() {
  print_square(2.0);
  print_square(3.0);
  print_square(4.0);
  return 0;
}