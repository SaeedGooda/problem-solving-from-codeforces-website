/*
    ==========================================
    Problem Number : 208A
    Problem Name   : Dubstep
    Author         : Saeed Gooda
    ==========================================
*/

#include <iostream>

using namespace std;

int main()
{
    string str;
    cin >> str;
    bool flag = false;
    while(!flag){
        int a = str.find("WUB");
        if(a == -1){
            flag = true;
        }
        else{
            str.replace(a,3, " ");
        }
    }
    for(int i = 0 ; i < str.size() ; i++){
        if(str[0] == ' '){
            str.erase(0,1);
        }
        else if(str[str.size()-1] == ' '){
            str.erase(str.size()-1,1);
        }
        else if(str[i] == ' ' && str[i+1] == ' '){
            str.erase(i,1);
        }
    }
    cout << str << endl;
    return 0;
}
