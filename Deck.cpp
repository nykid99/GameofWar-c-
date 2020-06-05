#include <iostream>
#include <string>
#include "Deck.h"
using namespace std;

Deck::Deck(){
};
Deck::~Deck(){
};

void Deck::addCardstoEntireDeck(){
  for(int i = 0; i < 4 ;i++){
    for(int j = 1 ; j < 14 ; j++){
      string newString = suits[i];
      Card *newCard = new Card(newString, j, false);
      EntireDeck.push_back(*newCard);
    }
  }
}
void Deck::printEntireDeck(){
  for(int x = 0 ; x < EntireDeck.size() ; x++){
    EntireDeck[x].printCard();
  }
}
void Deck::shuffleEntireDeck(){
  random_shuffle(EntireDeck.begin(), EntireDeck.end() );
}
