/*
    ==========================================
    Problem Number : 268A
    Problem Name   : Games
    Author         : Saeed Gooda
    ==========================================
*/

#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int h[n] , a[n];
    int counter = 0;

    for(int i = 0 ; i < n ; i++){
        cin >> h[i] >> a[i];
    }

    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < n ; j++){
            if(h[i] == a[j]){
                counter++;
            }
        }
    }
    cout<< counter << endl;
    return 0;
}
