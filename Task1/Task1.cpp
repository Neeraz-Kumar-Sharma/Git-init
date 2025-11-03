#include <iostream>
using namespace std;
int main() {
	int table[4][4] = { {1,0,1,0},{0,1,0,0},{1,1,0,1},{0,1,0,1} };
	int i, j;
	for (i = 0; i < 4; i++) {
		for (j = 0; j < 4; j++) {
			cout << table[i][j] << " ";
		}
		cout << "\n";
	}


	// Swap all 0s to 1s and all 1s to 0s using if-else
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4; j++) {
			if (table[i][j] == 0)
				table[i][j] = 1;
			else
				table[i][j] = 0;
		}
	}
	/*for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4; j++) {
			table[i][j] = 1 - table[i][j];
		}
	}*/

	cout << "\nModified table:\n";
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4; j++) {
			cout << table[i][j] << " ";
		}
		cout << "\n";
	}
	system("pause");
	return 0;
}



