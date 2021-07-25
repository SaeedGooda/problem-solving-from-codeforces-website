/*
    ==========================================
    Problem Number : 617A
    Problem Name   : Elephant
    Author         : Saeed Gooda
    ==========================================
*/

#include <iostream>

using namespace std;

int main()
{
    int x;
    cin >> x;
    if(x <= 5){
        cout << 1 << endl;
    }
    else if(x % 5 == 0){
        cout << x/5 << endl;
    }
    else{
        cout << x/5 + 1 << endl;
    }
    return 0;
}
