#include "hangman.h"

//source of my words that chose random 
vector<string>  Words{ "subway", "lucky", "syndrome", "apple", "orange", "wood", "computer", "god" , "clothes", "winter", "spring" };


hangman::hangman() {
	
	randomWord();

}
void hangman::randomWord() {
	//choose randome words 
	srand((unsigned)time(0));

	int chose = rand() % 10;

	setWord(Words[chose]);

}
//options of game
void hangman::showWord() {
	
	string temp;
	wrongAns = guess.size();

	for (int i = 0; i < Word.size(); i++)
		temp += "*";

	for (int i = 0; i < Word.size(); i++) {
		for (int j = 0; j < guess.size(); j++) {
			
			if (Word[i] == guess[j])
			{
				temp[i] = Word[i] ;
				wrongAns--;
				break;
			}
		}
	}
	cout << "Words:\t " << temp << endl;
	checkGame(temp);
}
void hangman::checkGame( string temp) {
	if (wrongAns == 9) {

		cout << "You Lost" << endl;
		PlayAgain();

	}else {

		for (int i = 0; i < temp.size(); i++) {
			temp[i] == '*' ? win = false : win = true;
		}
		
		if (win) {

			cout << "you Win" << endl;
			win = true;
			PlayAgain();

		}

	}
}
void hangman::PlayAgain() {
	char select;
	cout << "Do you Want Play again Game? y/n" << endl;
	cin >> select;
	if (select == 'y' || select == 'Y') {
		randomWord();
		guess = "";
	    win = false;
	    wrongAns = 0;
		clear;
		return;  
	}
		exit(0);

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
		cout << "|             / \\" << endl;
		cout << "/\\" << endl;
	}
	if (wrongAns == 9) {

		cout << "---------------" << endl;
		cout << "|              |" << endl;
		cout << "|             ( )" << endl;
		cout << "|              | " << endl;
		cout << "|             /|\\" << endl;
		cout << "|             / \\" << endl;
		cout << "/\\                         Hang man is DEAD" << endl;
	}
}
void hangman::showGuess() {
	cout << "you guessed this chars:\t";
	
	for (int i = 0; i < guess.size(); i++) {
		
		cout << guess[i];
			cout << ",";
		
	}
	cout << endl;
}
void hangman::Ditals() {
	cout << "----------------------------------" << endl;
	showGuess();
	cout << "wrong Answer:\t" << wrongAns << endl;
	cout << "rest Guess:\t" << 9 - wrongAns << endl;
	cout << "----------------------------------" << endl;
}

