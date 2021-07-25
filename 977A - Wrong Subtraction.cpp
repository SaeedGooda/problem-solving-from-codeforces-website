/*
    ==========================================
    Problem Number : 977A
    Problem Name   : wrong Subtraction
    Author         : Saeed Gooda
    ==========================================
*/

#include <iostream>

using namespace std;

int main()
{
    long long n;
    int k;
    cin >> n >> k;
    while(n - k > 0 && k != 0){
        if(n % 10 == 0){
            n /= 10;
        }
        else{
            n--;
        }
        k--;
    }
    cout << n << endl;
    return 0;
}
