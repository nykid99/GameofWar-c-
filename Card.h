#include <iostream>
#include <string>

using namespace std;


class Card{
public:
  Card();
  Card(string s, int r, bool f);
  ~Card();
  string suit = "";
  int rank = 0;
  bool face = false; //True is up False is down
  void printCard();
};
