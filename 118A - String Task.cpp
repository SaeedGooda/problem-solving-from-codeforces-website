/*
    ==========================================
    Problem Number : 118A
    Problem Name   : String Task
    Author         : Saeed Gooda
    ==========================================
*/

#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    string str;
    cin >> str;
    for(int i = 0 ; i < str.size() ; i++){
        if(isupper(str[i])){
            str[i] = tolower(str[i]);
        }
        if(str[i] == 'a' || str[i] == 'o'|| str[i] == 'y' || str[i] == 'e' || str[i] == 'u' || str[i] == 'i'){
            continue;
        }
        cout << "." << str[i];
    }
    return 0;
}
