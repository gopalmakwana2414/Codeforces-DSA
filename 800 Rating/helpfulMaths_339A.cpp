#include<iostream>
#include<vector>
#include <algorithm>

using namespace std; 
int main(){

    string s;
    cin>>s;

    vector<int>arr;

    for(int i = 0; i<s.length(); i++){
        // if(i%2 == 0){
            if(s[i] != '+'){
            arr.push_back(s[i]-'0');
        }
    }
    sort(arr.begin(), arr.end());

    for(int j = 0; j<arr.size();j++){
        cout<<arr[j];

        if(j != arr.size()-1) cout<<'+';
    }
    return 0;

}