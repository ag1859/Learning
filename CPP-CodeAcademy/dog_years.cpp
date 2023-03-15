#include <iostream>

int main() 
{
  int dog_age = 0;
  std::cout << "How old is Spot?";
  std::cin >> dog_age;
  int early_years = 21;
  int later_years = (dog_age - 2) * 4;
  int human_years = early_years + later_years;
  std::cout << "My name is Spot! Ruff ruff, I am \n" << human_years << " years old in human years.\n";
}
