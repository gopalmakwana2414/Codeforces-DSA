#include<iostream>
using namespace std;
int main(){
    long long n;
    cin>>n;
    int count = 0;

    string s = to_string(n);
    

    for(int i = 0; i<s.length(); i++){
        if (s[i]-'0' == 4 || s[i]-'0' == 7)count++;
    }
    if(count == 4 || count == 7) cout<<"YES";
    else cout<<"NO";
    return 0;
}