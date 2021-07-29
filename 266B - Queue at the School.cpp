/*
    ==========================================
    Problem Number : 266B
    Problem Name   : Queue at the School
    Author         : Saeed Gooda
    ==========================================
*/

#include <iostream>

using namespace std;

int main()
{
    int n, t;
    cin >> n >> t;
    string str;
    cin >> str;
    for(int i = 0 ;i < t ; i++){
        for(int i = 0 ; i < n ; i++){
            if(str[i] == 'B' && str[i+1] == 'G'){
                str[i] = 'G';
                str[i+1] = 'B';
                i++;
            }
        }
    }
    cout << str << endl;
    return 0;
}
