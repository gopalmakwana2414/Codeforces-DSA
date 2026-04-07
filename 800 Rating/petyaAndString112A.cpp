#include<iostream>
using namespace std;
int main(){

    string a,b;
    cin>>a;
    cin>>b;

    for(int i = 0; i<a.size(); i++){
        a[i] = tolower(a[i]);
    }
    for(int j = 0; j<b.size(); j++){
        b[j] = tolower(b[j]);
    }

        if(a<b){
            cout<<-1;
        }else if(a>b){
            cout<<1;
        }else{
            cout<<0;
        }
        
       

    return 0;
}