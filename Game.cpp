#include<iostream>
using namespace std;
#define capacity 100
#define Nop 2    //number of players

void init(char B[capacity][capacity], int& dim, char Pname[Nop][30], char Psym[], int& turn, int& wincount) {
	cout << "Enter Diminesion...\n";
	cin >> dim;
	cout << "Enter Win count " << endl;
	cin >> wincount;
	//for user ..
	for (int pi = 0; pi < Nop; pi++) {
		cout << "Enter Player " << pi + 1 << ": ";
		cin >> Pname[pi];
		cout << "Enter Player " << pi + 1 << "symbol: ";
		cin >> Psym[pi];
	}
//for borard maiking
	for (int ri = 0; ri < dim; ri++) {
		for (int ci = 0; ci < dim; ci++) {
			B[ri][ci] = '-';
		}
	}

	turn = rand() % Nop;

}
void displayboard(char B[capacity][capacity], int dim) {
	system("cls");
	for (int ri = 0; ri < dim; ri++) {
		for (int ci = 0; ci < dim; ci++) {
			cout << B[ri][ci] << "\t";
		}
		cout << endl;
	}
}
void playermsg(char pname[], char psym) {
	cout << pname << "'s (" << psym << ") turn" << endl;
}
void playerturn(int &ri, int&ci) {
	ri--;
	ci--;
}
bool isvalid(char B[capacity][capacity], int dim, int ri, int ci) {
	if (ri >= 0 && ri < dim && ci >= 0 && ci < dim && B[ri][ci] == '-')
		return true;
	else { 
		return false; 
	}
}
void updateboard(char B[capacity][capacity], int dim, int ri, int ci, char Psym) {
	B[ri][ci] = Psym;
}
void turnchange(int& turn) {
	turn = (turn + 1) % Nop;
}
int main()
{
	char B[capacity][capacity];   //Board;
		int dim; //dimension
		char Pname[Nop][30];
		char Psym[Nop];
		int turn, ri, ci;
		int wincount;
		bool gameover = false;

		init(B, dim, Pname, Psym, turn, wincount);
	/*	do {
		
			displayboard(B, dim);

			do {
				playermsg(Pname[turn], Psym[turn]);
				playerturn(ri, ci);
				if (!isvalid(B, dim, ri, ci)) {
					cout << "Invalid choice choose again...\n";
				}
			} while (!isvalid(B, dim, ri, ci));
			updateboard(B, dim, ri, ci, Psym[turn]);
			turnchange(turn);
		} while (true);
		*/
		// Inside the game loop after displaying the board
		do {
			displayboard(B, dim);

			do {
				playermsg(Pname[turn], Psym[turn]);
				cout << "Enter row and column (separated by space): ";
				cin >> ri >> ci; // Take input for row and column indices here
				playerturn(ri, ci);
				if (!isvalid(B, dim, ri, ci)) {
					cout << "Invalid choice choose again...\n";
				}
			} while (!isvalid(B, dim, ri, ci));

			updateboard(B, dim, ri, ci, Psym[turn]);
			
			turnchange(turn);
		} while (true);

		
}