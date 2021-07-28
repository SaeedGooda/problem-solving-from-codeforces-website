/*
    ==========================================
    Problem Number : 59A
    Problem Name   : Word
    Author         : Saeed Gooda
    ==========================================
*/

#include<bits/stdc++.h>

using namespace std;

int main()
{
    string str;
    cin >> str;
    int upper = 0 , lower = 0;
    for(char c : str){
        if(isupper(c)){
            upper++;
        }
        else{
            lower++;
        }
    }
    if(upper > lower){
        transform(str.begin(), str.end(), str.begin(), ::toupper);
    }
    else{
        transform(str.begin(), str.end(), str.begin(), ::tolower);
    }
    cout << str << endl;
    return 0;
}
