#include "hangman.h"
#include <time.h>
vector<string>  Words {"subway", "lucky", "syndrome", "apple", "orange", "wood", "computer", "god" , "clothes", "winter", "spring"};
hangman::hangman() {
	
	//choose randome words 
	srand((unsigned)time(0));

	int chose = rand() % 10;
	
	setWord(Words[chose]);
	for (int i = 0; i < Word.size(); i++)
		setGuess(' ');
	
	//Stating the game 
	while (!win)
	{
		char guess;
		showWord();
		Ditals();
		showhangman();
		cout << "enter your guess char:\t";
		cin >> guess;
		setGuess(guess);
	}
}
//options of game
void hangman::showWord() {
	string temp;

	for (int i = 0; i < Word.size(); i++) {
		for (int j = 0; j < guess.size(); j++) {
			
			Word[i] == guess[i] ? temp += Word[i]: "";

		}
		temp += "*";
	}
	checkGame(temp);
	cout << "Words:\t " << temp << endl;
}
void hangman::checkGame( string temp) {
	if (wrongAns == 8) {
		cout << "You Lost" << endl;
	}else {

		for (int i = 0; i < temp.size(); i++) {
			temp[i] == '*' ? win = false : win = true;
		}
		
		if (win) {
			cout << "you Win" << endl;
			PlayAgain();
		}

	}
}
void hangman::PlayAgain() {
	char select;
	cout << "Do you Want Play again Game? y/n" << endl;
	cin >> select;
	if (select == 'y' || select == 'Y') {
		hangman temp;
	}
	else {
		exit;
	}
}
void hangman::showhangman() {
	if (wrongAns == 1) {
		cout << "/\\" << endl;
	}
	if (wrongAns == 2) {
		cout << "|" << endl;
		cout << "|" << endl;
		cout << "|" << endl;
		cout << "|" << endl;
		cout << "|" << endl;
		cout << "/\\" << endl;
	}
	if (wrongAns == 3) {
		cout << "---------------" << endl;
		cout << "|" << endl;
		cout << "|" << endl;
		cout << "|" << endl;
		cout << "|" << endl;
		cout << "|" << endl;
		cout << "/\\" << endl;
	}
	if (wrongAns == 4) {
		cout << "---------------" << endl;
		cout << "|              |" << endl;
		cout << "|" << endl;
		cout << "|" << endl;
		cout << "|" << endl;
		cout << "|" << endl;
		cout << "/\\" << endl;
	}
	if (wrongAns == 5) {
		cout << "---------------" << endl;
		cout << "|              |" << endl;
		cout << "|             ( )" << endl;
		cout << "|" << endl;
		cout << "|" << endl;
		cout << "|" << endl;
		cout << "/\\" << endl;
	}
	if (wrongAns == 6) {
		cout << "---------------" << endl;
		cout << "|              |" << endl;
		cout << "|             ( )" << endl;
		cout << "|              | " << endl;
		cout << "|" << endl;
		cout << "|" << endl;
		cout << "/\\" << endl;
	}
	if (wrongAns == 7) {
		cout << "---------------" << endl;
		cout << "|              |" << endl;
		cout << "|             ( )" << endl;
		cout << "|              | " << endl;
		cout << "|             /|\\" << endl;
		cout << "|" << endl;
		cout << "/\\" << endl;
	}
	if (wrongAns == 8) {
		cout << "---------------" << endl;
		cout << "|              |" << endl;
		cout << "|             ( )" << endl;
		cout << "|              | " << endl;
		cout << "|             /|\\" << endl;
		cout << "|             /|\\" << endl;
		cout << "/\\" << endl;
	}
	if (wrongAns == 9) {

		cout << "---------------" << endl;
		cout << "|              |" << endl;
		cout << "|             ( )" << endl;
		cout << "|              | " << endl;
		cout << "|             /|\\" << endl;
		cout << "|             /|\\" << endl;
		cout << "/\\                         Hang man is DEAD" << endl;
	}
}
void hangman::showGuess() {
	cout << "you guessed this chars:\t";
	
	for (int i = 0; i < guess.size(); i++) {
		
		cout << guess.at(i);
		if (i = guess.size() - 1) {
	
			cout << endl;
		
		}else{
		
			cout << ",";
		
		}
	}
}
void hangman::Ditals() {
	cout << "----------------------------------" << endl;
	cout << "guessed already:\t" << guess.size() << endl;
	cout << "wrong Answer:\t" << wrongAns << endl;
	cout << "rest Guess:\t" << 9 - wrongAns << endl;
	cout << "----------------------------------" << endl;
}

