#pragma once
#include <iostream>
#include <vector>
#include <time.h>
#include <cstdlib>
#define clear system("CLS")
/*
*	hangman is game , you can save him for escaping from death 
*	system auto chose a word and you must guess this word 
*	you have 8 chance to save hangman ,everytime your guess is wrong he nears to death
*	,after 8 level he will death .
*/
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
	void randomWord();
	void showWord();
	void checkGame(string temp);
	void PlayAgain();
	void showhangman();
	void showGuess();
	void Ditals();
	//getter
	string getWord() { return Word;}
	char getGuess(int i) { return guess[i];}
	bool getWin() { return win; }
	//setter
	void setWord(string temp) { Word = temp; }
	void setGuess(char input) { guess +=input; }





};

