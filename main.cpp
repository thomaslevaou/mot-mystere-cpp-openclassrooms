#include "fonctions.h"
using namespace std;

int main()
{
   string wordToGuess;
   cout << "Saisissez un mot" << endl;
   cin >> wordToGuess;

   guessTheWord(wordToGuess);
   return 0;
}
