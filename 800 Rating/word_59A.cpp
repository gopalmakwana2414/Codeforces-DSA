#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    string s;
    cin>>s;

    int lower = 0, upper = 0;
    for(char ch : s){
        if(islower(ch)) lower++;
        else if(isupper(ch)) upper++;
    }
    if(lower>=upper){transform(s.begin(), s.end(), s.begin(), ::tolower);
    }else {transform(s.begin(), s.end(), s.begin(), ::toupper);}

    cout<<s;
    return 0;
}