/*
    ==========================================
    Problem Number : 112A
    Problem Name   : Petya and Strings
    Author         : Saeed Gooda
    ==========================================
*/

#include <iostream>
#include <algorithm>
#include <cstring>

using namespace std;

int main()
{
    string str1 , str2;
    cin >> str1 >> str2;
    transform(str1.begin(), str1.end(), str1.begin(), ::tolower);
    transform(str2.begin(), str2.end(), str2.begin(), ::tolower);
    cout << strcmp(str1.c_str(), str2.c_str()) << endl;
    return 0;
}
