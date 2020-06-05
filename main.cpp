#include <iostream>
#include <string>
#include <vector>
#include "Deck.h"
using namespace std;

int main(){
  Deck *d1 = new Deck();
  d1->addCardstoEntireDeck();
  d1->shuffleEntireDeck();
  d1->printEntireDeck();

}
