#include<iostream>
using namespace std; 
int main(){
    string A, B;
    cin>>A>>B;

    int start = 0;
    int end = A.length()-1;
    while(start<end){
        swap(A[start],A[end]);
        start++;
        end--;
    }
    if(A == B)cout<<"YES";
    else cout<<"NO";
    return 0;
}