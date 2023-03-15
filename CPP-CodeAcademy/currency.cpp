#include <iostream>

int main(){
//Delcared variables
    double pesos;
    double reais;
    double soles;
    double dollars;
//Ask and Input Pesos amount for conversion to USD
    std::cout << "Enter the number of Colombian Pesos: \n";
    std::cin >> pesos;
//Ask and Input Reais amount for conversion to USD
    std::cout << "Enter the number of Brazilian Reais: \n";
    std::cin >> reais;
//Ask and Input Soles amount for conversion to USD
    std::cout << "Enter the number of Peruvian Soles: \n";
    std::cin >> soles;
//Conversion rate to USD
    double pusd = (pesos/4697.41);
    double rusd = (reais/5.25);
    double susd = (soles/3.76);
//Total USD and output
    dollars = pusd + rusd + susd;
    std::cout << "US Dollars = $\n" << dollars;
}