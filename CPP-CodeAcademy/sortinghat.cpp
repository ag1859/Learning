#include <iostream>

//Declared functions and varibles
  void check(int answer, int a, int b, int c, int d);
  void comhos(int, std::string);

  int gryffindor = 0;
  int hufflepuff = 0;
  int ravenclaw = 0;
  int slytherin = 0;

  int a;
  int b;
  int c;
  int d;

  int max = 0;

  std::string house;

int main() {
//Declared answer variables
  int answer1;
  int answer2;
  int answer3;
  int answer4;

//Opening
  std::cout << "The Sorting Hat Quiz!!!\n";
//First Question
  std::cout << "Q1) When I'm dead, I want people to remember me as:\n";
  std::cout << "\n";
  std::cout << "  1) The Good\n";
  std::cout << "  2) The Great\n";
  std::cout << "  3) The Wise\n";
  std::cout << "  4) The Bold\n";
//First Answer and point toward House
  std::cin >> answer1;
  check(answer1, 1, 2, 3, 4);
//Second Question
  std::cout << "Q2) Dawn or Dusk?\n";
  std::cout << "\n";
  std::cout << "  1) Dawn\n";
  std::cout << "  2) Dusk\n";
//Second Answer and point toward House
  std::cin >> answer2;

  if (answer2 == 1){
    ravenclaw = ravenclaw + 1;
    gryffindor = gryffindor + 1;
  }else if(answer2 == 2){
    slytherin = slytherin + 1;
    hufflepuff = hufflepuff + 1;
  }else{
    std::cout << "ERROR!\n";
  }
//Third Question
  std::cout << "Q3) Which kind of instrument most pleases your ear?\n";
  std::cout << "\n";
  std::cout << "  1) The violin\n";
  std::cout << "  2) The trumpet\n";
  std::cout << "  3) The piano\n";
  std::cout << "  4) The drum\n";
//Third Answer and point toward House
  std::cin >> answer3;

  check(answer3, 2, 1, 3, 4);
//Fourth Question
  std::cout << "Q4) Which road tempts you most?\n";
  std::cout << "\n";
  std::cout << "  1) The wide, sunny grassy lane\n";
  std::cout << "  2) The narrow, dark, lantern-lit alley\n";
  std::cout << "  3) The twisting, leaf-strewn path through woods\n";
  std::cout << "  4) The cobbled street lined (ancient buildings)\n";
//Fourth Answer and point toward House
  std::cin >> answer4;

  check(answer4, 1, 2, 4, 3);
//Compare points scored across Houses
  comhos(gryffindor, "Gryffindor");
  comhos(slytherin, "Slytherin");
  comhos(ravenclaw, "Ravenclaw");
  comhos(hufflepuff, "Hufflepuff");
//Output House with highest points
  std::cout << house << "!\n";
  
}
//Evaluate answer and correlate answers to house
  void check(int answer, int a, int b, int c, int d) {
        if(answer == a){
            hufflepuff = hufflepuff + 1;
    }
        else if(answer == b){
            slytherin = slytherin + 1;
    }
        else if(answer == c){
            ravenclaw = ravenclaw + 1;
    }
        else if(answer == d){
            gryffindor = gryffindor + 1;
    }
        else{
            std::cout << "ERROR\n";
    }
    }
//Identify House with most points
  void comhos(int hos, std::string hose) {
    if (hos > max) {
        max = hos;
        house = hose;
    }else{
        return;
    }
  }
