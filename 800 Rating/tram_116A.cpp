#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr [n][2];

    for(int i = 0; i<n; i++){
        for(int j = 0; j<2; j++){
            cin>>arr[i][j];
        }
    }
    int current = 0, max_capacity = 0;
    for(int i = 0; i<n; i++){
        
        for(int j = 0; j<n; j++){
            current = current - arr[i] + arr[j];
           
        }
         
    }
    max_capacity = max(max_capacity, current);
    cout<<max_capacity;
    return 0;
}