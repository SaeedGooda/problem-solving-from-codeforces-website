/*
    ==========================================
    Problem Number : 58A
    Problem Name   : Chat room
    Author         : Saeed Gooda
    ==========================================
*/

#include <iostream>

using namespace std;

int main()
{
    string s, str = "hello";
    cin >> s;
    int temp = 0 , count = 0;
    for(int i = 0 ; i < str.size() ; i++){
        for(int j = temp ; j < s.size() ; j++){
            if(str[i] == s[j]){
                temp = j+1;
                count++;
                break;
            }
        }
    }
    string result = (count == 5)? "YES" : "NO";
    cout << result << endl;
    return 0;
}
