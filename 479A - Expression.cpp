/*
    ==========================================
    Problem Number : 479A
    Problem Name   : Expression
    Author         : Saeed Gooda
    ==========================================
*/

#include <iostream>

using namespace std;

int main()
{
    int a, b, c;
    cin >> a;
    cin >> b;
    cin >> c;
    int Max = 1;
    Max = max(Max, a + b + c);
    Max = max(Max, a * b * c);
    Max = max(Max, a + (b * c));
    Max = max(Max, a * (b + c));
    Max = max(Max, (a * b) + c);
    Max = max(Max, (a + b) * c);
    cout << Max << endl;
    return 0;
}
