/*
    ==========================================
    Problem Number : 1328A
    Problem Name   : Divisibility Problem
    Author         : Saeed Gooda
    ==========================================
*/

#include <iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;
    int a, b;
    for(int i = 0 ; i < t ; i++){
        cin >> a >> b;
        (a%b == 0)? cout << 0 << endl : cout << b - (a%b) << endl;
    }
    return 0;
}
