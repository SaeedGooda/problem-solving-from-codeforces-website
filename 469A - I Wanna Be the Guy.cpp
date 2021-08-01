/*
    ==========================================
    Problem Number : 469A
    Problem Name   : I Wanna Be the Guy
    Author         : Saeed Gooda
    ==========================================
*/

#include <iostream>

using namespace std;
int main()
{
    int n;
    cin >> n;
    bool flag[n+1] = {false};
    int p, q;
    cin >> p;
    int a, b;
    for(int i = 0 ; i < p ; i++){
        cin >> a;
        flag[a] = 1;
    }
    cin >> q;
    for(int i = 0 ; i < q ; i++){
        cin >> b;
        flag[b] = true;
    }
    for(int i = 1 ; i <= n ; i++){
        if(!flag[i]){
            cout << "Oh, my keyboard!" << endl;
            return 0;
        }
    }
    cout << "I become the guy." << endl;
    return 0;
}
