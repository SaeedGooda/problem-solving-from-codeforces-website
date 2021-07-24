/*
    ==========================================
    Problem Number : 282A
    Problem Name   : Bit++
    Author         : Saeed Gooda
    ==========================================
*/

#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int X = 0;
    string statement;
    for(int i = 0 ; i < n ; i++){
        cin >> statement;
        if(statement == "X++" || statement == "++X"){
            X++;
        }
        else if(statement == "X--" || statement == "--X"){
            X--;
        }
    }
    cout << X << endl;
    return 0;
}
