/*
    ==========================================
    Problem Number : 158A
    Problem Name   : Next Round
    Author         : Saeed Gooda
    ==========================================
*/

#include <iostream>

using namespace std;

int main()
{
    int n, k;
    int numsOfParticipants = 0;
    cin >> n >> k;
    if(n >= k){
        int a[n];
        for(int i = 1 ; i <= n ; i++){
            cin >> a[i];
        }
        for(int i = 1 ; i <= n ; i++){
            if(a[i] >= a[k] && a[i] > 0){
                numsOfParticipants++;
            }
        }
        cout << numsOfParticipants << endl;
    }
    return 0;
}
