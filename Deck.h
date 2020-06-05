#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <random>
#include "Card.h"

using namespace std;
class Deck{
public:
  int ranks[13] = {1,2,3,4,5,6,7,8,9,10,11,12,13};
  string suits[4] = {"Spades","Hearts","Diamonds","Clubs"};
  vector<Card> EntireDeck;
  vector<Card> p1Deck;
  vector<Card> p2Deck;

  Deck();
  ~Deck();
  void addCardstoEntireDeck();
  void shuffleEntireDeck();
  void shuffleP1Deck();
  void shuffleP2Deck();
  void distributeCards();
  Card p1Top();
  Card p2Top();
  void isDeckEmpty();

  //print functions
  void printEntireDeck();
  void printP1Deck();
  void printP2Deck();




};
