#include <iostream>
#include <cstdlib>

int main(){
    //State MAGIC 8-BALL
  std::cout << "MAGIC 8-BALL:\n";
    //State random variable and keep random
  srand(time(NULL));
  int answer = std::rand() % 10;
    //Output random reply
  switch (answer){
    case 0:
      std::cout << "It is certain.\n";
      break;
    case 1:
      std::cout << "You may rely on it.\n";
      break;
    case 2:
      std::cout << "Most likely.\n";
      break;
    case 3:
      std::cout << "Reply hazy, try again.\n";
      break;
    case 4:
      std::cout << "Very doubtful.\n";
      break;
    case 5:
      std::cout << "Don't count on it.\n";
      break;
    case 6:
      std::cout << "Ask again later.\n";
      break;
    case 7:
      std::cout << "Outlook not so good.\n";
      break;
    case 8:
      std::cout << "Yes.\n";
      break;
    case 9:
      std::cout << "My reply is no.\n";
      break;
  }
}