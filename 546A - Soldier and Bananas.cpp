/*
    ==========================================
    Problem Number : 546A
    Problem Name   : Soldier and Bananas
    Author         : Saeed Gooda
    ==========================================
*/

#include <iostream>

using namespace std;

int main()
{
    int k, w;
    long long n;
    cin >> k >> n >> w;
    int cost = 0;
    for(int i = 0 ; i < w ; i++){
        cost += k*(i+1);
    }
    if(cost-n <= 0){
        cout << 0 << endl;
    }else{
        cout << cost-n << endl;
    }
    return 0;
}
