/*
    ==========================================
    Problem Number : 133A
    Problem Name   : HQ9+
    Author         : Saeed Gooda
    ==========================================
*/

#include <iostream>

using namespace std;

int main()
{
    string str;
    cin >> str;
    bool flag = false;
    for(char c : str){
        if(c == 'H' || c == 'Q' || c == '9'){
            cout << "YES" << endl;
            flag = true;
            break;
        }
    }
    if(!flag){
        cout << "NO" << endl;
    }
    return 0;
}
