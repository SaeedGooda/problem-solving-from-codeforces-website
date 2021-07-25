/*
    ==========================================
    Problem Number : 281A
    Problem Name   : Word Capitalization
    Author         : Saeed Gooda
    ==========================================
*/

#include <iostream>

using namespace std;

int main()
{
    string str;
    cin >> str;
    if(islower(str[0])){
        str[0] = toupper(str[0]);
    }
    cout << str << endl;
    return 0;
}
