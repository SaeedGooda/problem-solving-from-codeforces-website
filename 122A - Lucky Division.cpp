/*
    ==========================================
    Problem Number : 122A
    Problem Name   : Lucky Division
    Author         : Saeed Gooda
    ==========================================
*/

#include <iostream>

using namespace std;

int main()
{
    int values[12] = {4,7,47,74,44,444,447,474,477,777,774,744};
    bool flag = false;
    int n;
    cin >> n;

    for(int i = 0 ; i < 12; i++){
        if(n == values[i] || n % values[i] == 0){
            flag = true;
            break;
        }
    }
    string result = (flag == true)? "YES" : "NO";
    cout << result << endl;
    return 0;
}
