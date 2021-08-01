/*
    ==========================================
    Problem Number : 705A
    Problem Name   : Hulk
    Author         : Saeed Gooda
    ==========================================
*/

#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    for(int i = 1 ; i <= n ; i++){
        (i%2 != 0)?
            (i == n)? cout << "I hate it" : cout << "I hate that ":
            (i == n)? cout << "I love it" : cout << "I love that ";
    }
    return 0;
}
