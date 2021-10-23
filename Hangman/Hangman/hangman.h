#pragma once
#include <iostream>
#include <vector>
#include <time.h>
#include <cstdlib>
#define clear system("CLS")

using namespace std;

class hangman
{
private:
	string Word;
	string guess = "";
	bool win = false;
	int wrongAns = 0;
public:
	hangman();
	//options of game
	void showWord();
	void checkGame(string temp);
	void PlayAgain();
	void showhangman();
	void showGuess();
	void Ditals();
	void guessAll();
	//getter
	string getWord() { return Word;}
	char getGuess(int i) { return guess[i];}
	bool getWin() { return win; }
	//setter
	void setWord(string temp) { Word = temp; }
	void setGuess(char input) { guess +=input; }





};

