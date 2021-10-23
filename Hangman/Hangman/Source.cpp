#include <iostream>
#include "hangman.h"
using namespace std; 

int main() {
	hangman game;
	//Stating the game 
	while (!game.getWin())
	{
		
		game.showWord();
		game.Ditals();
		game.showhangman();
		//game.guessAll();
		char guess;
		cout << "enter your guess char:\t";
		cin >> guess;
		game.setGuess(guess);
		clear;
	}
}