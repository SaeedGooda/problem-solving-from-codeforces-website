/*
    ==========================================
    Problem Number : 96A
    Problem Name   : Football
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
    string str;
    cin >> str;
    int count = 1;
    if(exist('0' , str) && exist('1' , str)){
        for(int i = 0 ; i < str.size() ; i++){
            if(str[i] == str[i+1]){
                count++;
            }
            else{
                count = 1;
            }
            if(count == 7){
                cout << "YES" << endl;
                break;
            }
        }
        if(count < 7){
            cout << "NO" << endl;
        }
    }
    return 0;
}
