#include "fonctions.h"
using namespace std;

string shuffleLetters (string wordToShuffle) {
  srand(time(0));

  int wordToShuffleSize = wordToShuffle.size();
  int positionAleatoire(0);
  /* Une string doit être initialisée avec le mot initial pour que le tableau aie
  conscience de sa taille */
  string shuffledWord;

  while (wordToShuffleSize > 0) {
    positionAleatoire = rand() % wordToShuffleSize;
    shuffledWord += wordToShuffle[positionAleatoire];
    wordToShuffle.erase(positionAleatoire, 1);
    wordToShuffleSize = wordToShuffle.size();
  }

  return shuffledWord;
}

void guessTheWord (string wordToGuess) {

  string shuffledWord, wordFromPlayer;

  do {
   shuffledWord = shuffleLetters(wordToGuess);
   cout << endl << "Quel est ce mot ? " << shuffledWord << endl;
   cin >> wordFromPlayer;
   if (wordToGuess == wordFromPlayer) {
     cout << "Bien joué! Il s'agit bien du mot attendu." << endl;
   } else {
     cout << "Ce n'est pas le mot attendu. Essayez de nouveau: " << endl;
   }
  } while (wordToGuess != wordFromPlayer);
}
