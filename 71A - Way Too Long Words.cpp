/*
    ==========================================
    Problem Number : 71A
    Problem Name   : Way Too Long Words
    Author         : Saeed Gooda
    ==========================================
*/

#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    for(int i = 0 ; i < n ; i++){
        string str;
        cin >> str;
        if(str.length() > 10){
            cout << str[0];
            cout << str.length()-2;
            cout << str[str.length()-1] << endl;
        }
        else{
            cout << str << endl;
        }
    }
    return 0;
}
