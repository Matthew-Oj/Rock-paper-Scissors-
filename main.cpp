#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

int main() {
	cout << "Welcome to my rock, paper, scissors game!" << "\n"; 
	int rock = 1;
	int paper = 2;
	int scissor = 3;

	cout << "Rock is 1" << endl;
	cout << "Paper is 2" << endl;
	cout << "Scissors is 3" << endl << "\n";

	int x = 0;
	cout << "Enter the desired value: " << "\n";
	std::cin >> x;

	srand(time(NULL));

	int opp = (rand() % 4) + 1;

	if (opp == 0) {
		srand(time(NULL));
		int opp = (rand() % 4) + 1;
	}

	if (opp == 1) {
		cout << "The computer picked rock" << endl;
	}
	else if (opp == 2) {
		cout << "The computer picked paper" << endl;
	}
	else if (opp == 3) {
		cout << "The computer picked scissors" << endl;
		cout << "Result:"<<"\n";
	}

	if (opp == x) {
		cout << "Draw! Please play again" << "\n";
		cout << "------------" << endl;
	}

	else if (x == 1 && opp == 3 || x == 2 && opp == 1 || x == 3 && opp == 2) {
		cout << "You win! Please play again" << "\n";
		cout << "------------" << endl;
	}

	else if (x == 1 && opp == 2 || x == 2 && opp == 3 || x == 3 && opp == 1) {
		cout << "You lose! Please play again" << "\n";
		cout << "------------" << endl;
	}


	return main();
}
