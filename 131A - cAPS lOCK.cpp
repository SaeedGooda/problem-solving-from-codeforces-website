/*
    ==========================================
    Problem Number : 131A
    Problem Name   : cAPS lOCK
    Author         : Saeed Gooda
    ==========================================
*/

#include <iostream>

using namespace std;

bool case1Check(string str){
    for(char c : str){
        if(islower(c)) return false;
    }
    return true;
}
bool case2Check(string str){
    if(isupper(str[0])){
        return false;
    }
    for(int i = 1 ; i < str.size() ; i++){
        if(islower(str[i]))
            return false;
    }
    return true;
}

string change(string str){
    for(int i = 0 ; i < str.size() ; i++)
        (isupper(str[i]))? str[i] = tolower(str[i]) : str[i] = toupper(str[i]);
    return str;
}
int main()
{
    string str , n = "";
    cin >> str;
    if(case1Check(str) || case2Check(str)){
        str = change(str);
    }
    cout << str << endl;
    return 0;
}
