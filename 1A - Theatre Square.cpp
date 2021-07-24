/*
    ==========================================
    Problem Number : 1A
    Problem Name   : Theatre Square
    Author         : Saeed Gooda
    ==========================================
*/

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    unsigned long long n , m , a;
    cin >> n >> m >> a;
    unsigned long long result = ceil((double)m/a)*ceil((double)n/a);
    cout << result;
    return 0;
}
