/*
    ==========================================
    Problem Number : 228A
    Problem Name   : Is your horseshoe on the other hoof?
    Author         : Saeed Gooda
    ==========================================
*/

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int s[4] , counter = 0;
    for(int i = 0 ; i < 4 ; i++){
        cin >> s[i];
    }
    sort(s,s+4);
    for(int i = 0 ; i < 4 ; i++){
        if(s[i] == s[i+1]){
            counter++;
        }
    }
    cout << counter << endl;
    return 0;
}
