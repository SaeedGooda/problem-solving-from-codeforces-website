/*
    ==========================================
    Problem Number : 69A
    Problem Name   : Young Physicist
    Author         : Saeed Gooda
    ==========================================
*/

#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int x, y, z;      // point coordinates (x, y, z)
    int sumX = 0 , sumY = 0 , sumZ = 0;
    for(int i = 0 ; i < n ; i++){
        cin >> x >> y >> z;
        sumX += x;
        sumY += y;
        sumZ += z;
    }
    if(sumX == 0 && sumY == 0 && sumZ == 0){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }
    return 0;
}
