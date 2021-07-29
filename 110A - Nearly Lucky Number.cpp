/*
    ==========================================
    Problem Number : 110A
    Problem Name   : Nearly Lucky Number
    Author         : Saeed Gooda
    ==========================================
*/

#include <iostream>

using namespace std;

int main()
{
    long long n;
    cin >> n;
    int count = 0;
    while(n != 0){
        if (n % 10 == 4 || n % 10 == 7)
        {
            count += 1;
        }
        n /= 10;
    }
    (count == 4 || count == 7)? cout << "YES" : cout << "NO";
    return 0;
}
