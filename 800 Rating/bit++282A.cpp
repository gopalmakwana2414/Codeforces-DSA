#include<iostream>
using namespace std;
int main(){
    int x;
    cin>>x;

    int count = 0;

    while(x--){
        string s;
        cin>>s;

        if(s[1]=='+')count+=1;
        else count-=1;
    }
    cout<<count;
    return 0;
}