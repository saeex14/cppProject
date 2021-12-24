#include <iostream>

using namespace std;

string making(int n, char kind) {
	string temp; 
	for (int i = 0; i < n; i++){
		temp += kind;
	}
	return temp;
}

int main() {
	int n; 
	cin >> n;
	int space = n / 2;

	//increase star and decrease space 
	for (int i = 0; i < space + 1 ; i++){
		string line;
		line += making(space - i, ' ');
		line += making(1 + 2 * i, '*');
		line += making(space - i, ' ');
		line += making(space - i, ' ');
		line += making(1 + 2 * i, '*');
		cout << line << endl;
	}
	//decrease star and increase space 
	for (int i = space - 1; i >= 0; i--) {
		string line;
		line += making(space - i, ' ');
		line += making(1 + 2 * i, '*');
		line += making(space - i, ' ');
		line += making(space - i, ' ');
		line += making(1 + 2 * i, '*');
		cout << line << endl;
	}
}

