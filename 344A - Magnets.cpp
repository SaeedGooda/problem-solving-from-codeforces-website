/*
    ==========================================
    Problem Number : 344A
    Problem Name   : Magnets
    Author         : Saeed Gooda
    ==========================================
*/

#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int count = 1;
    string magnets[n];
    for(int i = 0 ; i < n ; i++){
        cin >> magnets[i];
    }
    for(int i = 0 ; i < n-1 ; i++){
        if(magnets[i] != magnets[i+1]){
            count++;
        }
    }
    cout << count << endl;
    return 0;
}
