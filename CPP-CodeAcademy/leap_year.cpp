#include <iostream>

int main() {
    //Delcared variables and formulas
  int year = 1000;
  int a = year % 4;
  int b = year % 100;
  int c = year % 400;
    //Ask and input year
  std::cout << "Input year.\n";
  std::cin >> year;
    //Process if year is a leap year and output result
  if(year < 1000 || year > 9999){
    std::cout << "Invalid input.\n";
  }else if(a == 0 && b != 0 || c == 0){
    std::cout << year << " falls on a leap year!\n";
  }else{
    std::cout << year << " does not fall on a leap year!\n";
  }
}