/*
    ==========================================
    Problem Number : 266A
    Problem Name   : Stones on the Table
    Author         : Saeed Gooda
    ==========================================
*/

#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    string str;
    cin >> str;
    if(n == str.size()){
        int count = 0;
        for(int i = 0 ; i < str.size() ; i++){
            if(str[i] == str[i+1]){
                count++;
            }
        }
        cout << count << endl;
    }
    return 0;
}
