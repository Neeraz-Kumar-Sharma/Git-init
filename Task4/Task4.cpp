//Write a program that fills the values of the two dimensional array A[N][M] with the random
//numbers from 0 to 9. N and M input by the user.
// Calculate the sum of the array elements.
// Calculate the sum of each row.
// Calculate the sum of each column.



#include <iostream>
#include <cstdlib>  // for rand(), srand()
#include <ctime>    // for time()
using namespace std;

int main() {
    int N, M;

    // Input the number of rows and columns
    cout << "Enter number of rows (N): ";
    cin >> N;
    cout << "Enter number of columns (M): ";
    cin >> M;

    int A[50][50]; // max allowed size for simplicity
    srand(time(0)); // seed for random number generation

    cout << "\nMatrix A[" << N << "][" << M << "]:\n";

    // Fill array with random numbers from 0 to 9 and display it
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            A[i][j] = rand() % 10;  // random number 0–9
            cout << A[i][j] << " ";
        }
        cout << endl;
    }

    // Calculate total sum of all elements
    int totalSum = 0;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            totalSum += A[i][j];
        }
    }

    cout << "\nTotal sum of all elements = " << totalSum << endl;

    // Calculate sum of each row
    cout << "\nSum of each row:\n";
    for (int i = 0; i < N; i++) {
        int rowSum = 0;
        for (int j = 0; j < M; j++) {
            rowSum += A[i][j];
        }
        cout << "Row " << i + 1 << " sum = " << rowSum << endl;
    }

    // Calculate sum of each column
    cout << "\nSum of each column:\n";
    for (int j = 0; j < M; j++) {
        int colSum = 0;
        for (int i = 0; i < N; i++) {
            colSum += A[i][j];
        }
        cout << "Column " << j + 1 << " sum = " << colSum << endl;
    }

    system("pause");
    return 0;
}
