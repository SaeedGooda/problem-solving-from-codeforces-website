/*
    ==========================================
    Problem Number : 520A
    Problem Name   : Pangram
    Author         : Saeed Gooda
    ==========================================
*/

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    string str;
    cin >> str;
    if(n < 26){
        cout << "NO" << endl;
        return 0;
    }
    else{
        char x = 'A';
        transform(str.begin(),str.end(),str.begin(), ::toupper);
        for(int i = 0 ; i < 26 ; i++){
            if(str.find(x) != -1){
                x++;
            }
            else{
                cout << "NO" << endl;
                return 0;
            }
        }
        cout << "YES" << endl;
    }
    return 0;
}
