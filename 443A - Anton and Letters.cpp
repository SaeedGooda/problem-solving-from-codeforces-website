/*
    ==========================================
    Problem Number : 443A
    Problem Name   : Anton and Letters
    Author         : Saeed Gooda
    ==========================================
*/

#include <iostream>
#include <set>

using namespace std;

int main()
{
    set <char> s;
    string str;
    getline(cin, str);
    for(int i = 1 ; i < str.size()-1 ; i+= 3){
        s.insert(str[i]);
    }
    cout << s.size() << endl;
    return 0;
}
