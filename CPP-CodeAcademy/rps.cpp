#include <iostream>
#include <stdlib.h>
//Rock, Paper, Scissors game
int main(){
//Declared variables and keep random
    srand (time(NULL));

    int computer = rand() % 3 + 1;

    int user = 0;
//Opening
    std::cout << "============================================\n";
    std::cout << "Rock, Paper, Scissors!\n";
    std::cout << "============================================\n";

    std::cout << "1) Rock!\n";
    std::cout << "2) Paper!\n";
    std::cout << "3) Scissors!\n";

    std::cout << "Shoot!\n";
//User input
    std::cin >> user;
//State computer's choice
    switch (computer){
        case 1:
            std::cout << "Computer Chose Rock!\n";
            break;
        case 2:
            std::cout << "Computer Chose Paper!\n";
            break;
        case 3:
            std::cout << "Computer Chose Scissor!\n";
            break;
        default:
            break;
    }
//Evaluate winner
    if((computer == 1 && user == 2) || (computer == 2 && user == 3) || (computer == 3 && user == 1)){
        std::cout << "USER WINS!\n";
    }
    else if((computer == 1 && user == 3) || (computer == 2 && user == 1) || (computer == 3 && user == 2)){
        std::cout << "COMPUTER WINS!\n";
    }
    else if(computer == user){
        std::cout << "TIE!!\n";
    }else{
        std::cout << "ERROR\n";
    }
}