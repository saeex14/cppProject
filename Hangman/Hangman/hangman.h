#pragma once
#include <iostream>
#include <vector>
using namespace std;

class hangman
{
private:
	string Word;
	vector<char> guess;
	bool win;
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
	//getter
	string getWord() { return Word;}
	char getGuess(int i) { return guess[i];}
	//setter
	void setWord(string temp) { Word = temp; }
	void setGuess(char input) { guess.push_back(input); }





};

