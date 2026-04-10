// #include<iostream>
// #include<set>

// using namespace std;
// int main(){
//     string s;
//     cin>>s;
//     set<char>st(s.begin(),s.end());
//     string gp = "";
    
//     for(char c : st) gp += c;

//     if(gp.size()%2 == 0) cout<<"CHAT WITH HER!";
//     else cout<<"IGNORE HIM!" ;
//         return 0;
//     }
    



// Alternative solution

#include<iostream>
#include<set>
using namespace std;

int main() {
    string s;
    cin >> s;

    set<char> st(s.begin(), s.end());

    if(st.size() % 2 == 0)
        cout << "CHAT WITH HER!";
    else
        cout << "IGNORE HIM!";

    return 0;
}