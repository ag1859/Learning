#include <iostream>
#include <cmath>

int main() {
    //Declared variables
  double a;
  double b;
  double c;
    //Input values for variables
  std::cout << "Enter a: \n";
  std::cin >> a;
  std::cout << "Enter b: \n";
  std::cin >> b;
  std::cout << "Enter c: \n";
  std::cin >> c;
    //Declared both quadratic formulas
  double root1 = (-b + std::sqrt((b*b)-(4*a*c))) / (2*a);
  double root2 = (-b - std::sqrt((b*b)-(4*a*c))) / (2*a);
    //Output answers to the quadratic formula
  std::cout << "Answers are \n" << root1 << " and \n" << root2 << " !\n";
}