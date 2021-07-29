/*
    ==========================================
    Problem Number : 1030A
    Problem Name   : In Search of an Easy Problem
    Author         : Saeed Gooda
    ==========================================
*/

#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int a;
    for(int i = 0 ; i < n ; i++){
        cin >> a;
        if(a == 1){
            cout << "HARD" << endl;
            return 0;
        }
    }
    cout << "EASY" << endl;
    return 0;
}
