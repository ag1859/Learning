#include <iostream>

void fizzbuzz(int num);

int main(){

    int i;

    for (i = 1; i <= 100; i++)
    {
        fizzbuzz(i);
    }
    

}

void fizzbuzz(int num){
    if(((num % 3) == 0) && ((num % 5) == 0)){
        std::cout << "FizzBuzz\n";
    }else if((num % 3) == 0){
        std::cout << "Fizz\n";
    }else if((num % 5) == 0){
        std::cout << "Buzz\n";
    }else{
        std::cout << num << "\n";
    }
}