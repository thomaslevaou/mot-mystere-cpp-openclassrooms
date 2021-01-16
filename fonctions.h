#ifndef FONCTIONS_H_INCLUDED
#define FONCTIONS_H_INCLUDED

#include <iostream>
#include <ctime> // Pour générer des nombres aléatoires (1/2)
#include <cstdlib> // Pour générer des nombres aléatoires (2/2)

/* Fonction qui va mélanger les lettres du mot passé en paramètre */
std::string shuffleLetters (std::string wordToShuffle);

/* Fonction qui va mélanger le mot passé en paramètre et demander à l'utilisateur de le deviner */
void guessTheWord (std::string wordToGuess);

#endif
