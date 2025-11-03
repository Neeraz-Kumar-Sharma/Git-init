#include <iostream>
using namespace std;
int main() {
	srand(time(0));
	int n=0 , N, m, i, j;
		cout << "Input the rows and column value: ";
		cin >> N;
	int a[20][20]; 
	

	//step by step fill and output array elements
	for (i = 1; i <= N; i++) {
		for (j = 1; j <=N; j++) { 
			a[i][j] = rand() % 10; 
			cout << a[i][j] << " ";
		}
		cout << "\n"; 
	}
	int sum = 0;
	for (int i = 1; i <= N; i++) {
		sum += a[i][i] ;
	}
	cout << "Sum = " << sum << "\n";
	system("pause");
	return 0;
}