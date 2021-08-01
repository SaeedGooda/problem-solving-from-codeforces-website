/*
    ==========================================
    Problem Number : 200B
    Problem Name   : Drinks
    Author         : Saeed Gooda
    ==========================================
*/

#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int p;
    double sum = 0;
    for(int i = 0 ; i < n ; i++){
        cin >> p;
        sum += p;
    }
    cout << fixed << setprecision(12) << double(sum/n) << endl;
    return 0;
}
