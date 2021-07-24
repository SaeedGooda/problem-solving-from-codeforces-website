/*
    ==========================================
    Problem Number : 231A
    Problem Name   : Team
    Author         : Saeed Gooda
    ==========================================
*/

#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int x, y, z;       // Team members (Petya, Vasya and Tonya)
    int numberOfProblems = 0;
    for(int i = 0 ; i < n ; i++){
        cin >> x >> y >> z;
        if(x + y + z >= 2){
            numberOfProblems++;
        }
    }
    cout << numberOfProblems << endl;
    return 0;
}
