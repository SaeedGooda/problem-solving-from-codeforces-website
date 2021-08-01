/*
    ==========================================
    Problem Number : 61A
    Problem Name   : Ultra-Fast Mathematician
    Author         : Saeed Gooda
    ==========================================
*/

#include <iostream>

using namespace std;

int main()
{
    string str1, str2;
    cin >> str1 >> str2;
    for(int i = 0 ; i < str1.size() ; i++){
        (str1[i] == str2[i])? cout << 0 : cout << 1;
    }
    return 0;
}
