/*
    ==========================================
    Problem Number : 263A
    Problem Name   : Beautiful Matrix
    Author         : Saeed Gooda
    ==========================================
*/

#include <iostream>

using namespace std;

int main()
{
    int matrix[5][5];
    for(int i = 0 ; i < 5 ; i++){
        for(int j = 0 ; j < 5 ; j++){
            cin >> matrix[i][j];
            if(matrix[i][j] == 1){
                cout << abs(i-2) + abs(j-2) << endl;
            }
        }
    }

    return 0;
}
