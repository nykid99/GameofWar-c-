#include "Card.h"
#include <iostream>
#include <string>

using namespace std;
Card::Card(){

};

Card::~Card(){

};
Card::Card(string s, int r, bool f){
  suit = s;
  rank = r;
  face = f;
}

void Card::printCard(){
  cout << "card suit: "  << suit <<  endl;
  cout << "card rank: " << rank << endl;
  cout << "face status" << face << endl;
}
