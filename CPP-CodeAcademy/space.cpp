#include <iostream>

int main() {
    //Declared variables
  double gravity;
  int number;
  double weight;
    //Ask and input weight
  std::cout << "What is your weight on Earth?\n";
  std::cin >> weight;
    //Ask and input planet number
  std::cout << "Enter number for the planet you want to be on. 1-Mercury 2-Venus 3-Mars 4-Jupiter 5-Saturn 6-Uranus 7-Neptune\n";
  std::cin >> number;
    //Calculate weight on planet and output
  switch (number){
    case 1:
      gravity = 0.38;
      weight = weight*gravity;
      std::cout << "Your weight would be \n" << weight;
      break;
    case 2:
      gravity = 0.91;
      weight = weight*gravity;
      std::cout << "Your weight would be \n" << weight;
      break;
    case 3:
      gravity = 0.38;
      weight = weight*gravity;
      std::cout << "Your weight would be \n" << weight;
      break;
    case 4:
      gravity = 2.34;
      weight = weight*gravity;
      std::cout << "Your weight would be \n" << weight;
      break;
    case 5:
      gravity = 1.06;
      weight = weight*gravity;
      std::cout << "Your weight would be \n" << weight;
      break;
    case 6:
      gravity = 0.92;
      weight = weight*gravity;
      std::cout << "Your weight would be \n" << weight;
      break;
    case 7:
      gravity = 1.19;
      weight = weight*gravity;
      std::cout << "Your weight would be \n" << weight;
      break;
    default:
      std::cout << "Error\n";
      break;
      
  }

}