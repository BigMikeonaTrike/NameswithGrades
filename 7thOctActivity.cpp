#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;


void studentInput();
void studentOutput();

string students[6];
int grades[6][2];
int main()
{
	students[5] = "Averages";
	studentInput();
	studentOutput();

}

void studentOutput() {
	for (int i = 0; i < 6; i++) {
		cout << "\n" << students[i];
		for (int j = 0; j < 2; j++) {
			cout << "\t" << grades[i][j];
		}
	}
}

void studentInput() {
	for (int i = 0; i < 5; i++) {
		cout << "\nEnter Student Name: ";
		cin >> students[i];
		for (int j = 0; j < 2; j++) {
			cout << "\nEnter Grade " << j+1 << ": ";
			cin >> grades[i][j];
		}
	}
	for (int k = 0; k < 2; k++) {
		for (int l = 0; l < 5; l++) {
			grades[5][k] += grades[l][k];
		}
		grades[5][k] /= 5;
	}
}
