/*
    ==========================================
    Problem Number : 734A
    Problem Name   : Anton and Danik
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
    int A = 0 , D = 0;
    for(char c : str){
        (c == 'A')? A++ : D++;
    }
    (A > D)? cout << "Anton" : (A < D)? cout << "Danik" : cout << "Friendship";
    return 0;
}
