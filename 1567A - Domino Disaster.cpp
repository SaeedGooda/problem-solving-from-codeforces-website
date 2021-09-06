/*
    ==========================================
    Problem Number : 1567A
    Problem Name   : Domino Disaster
    Author         : Saeed Gooda
    ==========================================
*/

#include <iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;
    for(int i = 0 ; i < t ; i++){
        int n;
        cin >> n;
        int grid[2][n];
        string str , newStr = "";
        cin >> str;
        for(int i = 0 ; i < str.size() ; i++){
            (str[i] == 'U')? newStr += 'D' :
                (str[i] == 'D')? newStr += 'U' :
                    newStr += str[i];
        }
        cout << newStr << endl;
        }
    return 0;
}
