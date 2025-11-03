// Task3_Mul_dimensional.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
    int A[20][20] = { {1,2,4},{5,2,3},{6,1,7} };

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << A[i][j]<< " ";
        }
        cout << "\n";

    }

    cout << "\n";
    int B[20][20];
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {

           
            B[j][i] = A[i][j];
        }
            

    }

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << B[i][j] << " ";
        }
        cout << "\n";

    }

    
        system("pause");
        return 0;
}


