// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){

//     int n, k;
//     cin>>n>>k;

//     vector<int> arr(n);
    

//     for(int i = 0; i<n; i++){
//         cin>>arr[i];
//     }

//     int count = 0;
//     int check = arr[k-1];
//     for(int i = 0; i<n; i++){
//         if(arr[i]>=check && arr[i]>0)
//         count += 1;
//         else break;




//         }
//         cout<<count;
    
//     return 0;
// }
































#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n, k;
    cin>>n>>k;

    vector<int>arr(n);

    for(int i = 0; i<n; i++){
        cin>>arr[i];
    }
    int count = 0;
    int kth = arr[k-1];

    for(int i = 0; i<n; i++){
        if(arr[i]>=kth && arr[i]>0)
            count += 1;
            else break;
    }
        cout<<count;
    
        return 0;
    

}