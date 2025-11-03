#include <iostream>
using namespace std;
int main() {
	int table[3][4] = { {11,12,13,14},{21,22,23,24},{31,32,33,34} };
	int i, j;
	for (i = 0; i < 3; i++) {
		for (j = 0; j < 4; j++) {
			cout << table[i][j] << " ";
		}
		cout << "\n";
	}
	system("pause");
	return 0;
}