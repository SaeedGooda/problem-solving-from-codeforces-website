/*
    ==========================================
    Problem Number : 486A
    Problem Name   : Calculating Function
    Author         : Saeed Gooda
    ==========================================
*/

#include <iostream>

using namespace std;

int main()
{
    long long n;
    cin >> n;
    (n % 2 == 0)? cout << n / 2 : cout << ((n + 1) / 2) * (-1);
    return 0;
}
