// cardarray.cpp
// class play card
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <locale>

using namespace std;

enum Suit {clubs, diamonds, hearts, spades };
const int jack = 11;
const int queen = 12;
const int king = 13;
const int ace = 14;

class card
{
private:
  int number;
  Suit suit;
public:
  card() {}
  void set(int n, Suit s) {suit = s; number = n;}
  void display();
};

void card::display()
{
  if (number >= 2 && number <= 10)
    cout << number;
  else {  
    switch(number)
      {
      case jack: cout << 'J'; break;
      case queen: cout << 'Q'; break;
      case king: cout << 'K'; break;
      case ace: cout << 'A'; break;
      default: break;
      }
  }
  switch(suit)
    {
    case clubs: wcout << L"\u2663"; break;
    case diamonds: wcout << L"\u2666"; break;
    case hearts: wcout << L"\u2665"; break;
    case spades: wcout << L"\u2660"; break;
    }
}

int main()
{
  locale::global(locale("ru_RU.UTF-8"));
  card deck [52];
  int j;

  cout << endl;
  for (j = 0; j < 52; j++)
    {
      int num = (j %13) + 2;
      Suit su = Suit (j/13);
      deck[j].set(num, su);
    }

  cout << "Исходная колода:\n";
  for (j = 0; j < 52; j++)
    {
      deck [j].display();
      cout << " ";
      if (!((j+1) % 13))
	cout << endl;
    }

  srand(time(NULL));
  for(j = 0; j < 52; j++)
    {
      int k = rand() % 52;
      card temp = deck[j];
      deck[j] = deck[k];
      deck[k] = temp;
    }

  cout << "Перемешанная колода:\n";
  for (j = 0; j <52; j++)
    {
      deck[j].display();
      cout << " ";
      if (!((j+1) % 13))
	cout << endl;
    }
  return 0;
}
