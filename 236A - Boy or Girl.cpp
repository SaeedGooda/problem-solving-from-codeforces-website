/*
    ==========================================
    Problem Number : 236A
    Problem Name   : Boy or Girl
    Author         : Saeed Gooda
    ==========================================
*/

#include <iostream>

using namespace std;

bool exist(char c, string str){
    for(int i = 0 ; i < str.size() ; i++){
        if(c == str[i]){
            return true;
        }
    }
    return false;
}

int main()
{
    string str, newStr = "";
    cin >> str;
    for(int i = 0 ; i < str.size() ; i++){
        if(!exist(str[i],newStr)){
            newStr += str[i];
        }
    }
    string result = (newStr.size() %2 == 0)? "CHAT WITH HER!" : "IGNORE HIM!";
    cout << result << endl;
    return 0;
}
