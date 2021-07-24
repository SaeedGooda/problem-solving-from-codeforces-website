/*
    ==========================================
    Problem Number : 4A
    Problem Name   : Watermelon
    Author         : Saeed Gooda
    ==========================================
*/

#include <iostream>

using namespace std;

int main()
{
    int w;
    cin >> w;
    if(w %2 == 0 && w > 2){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }
    return 0;
}
