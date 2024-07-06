https://codeforces.com/problemset/problem/1896/A

#include <bits/stdc++.h>
using namespace std;

int main() {
       
       int t;
       cin>>t;
       while(t--){
       int n;
       cin>>n;
       std::vector<int>v(n,0) ;
       for(int i=0;i<n;i++)cin>>v[i];
       if(v[0]==1)cout<<"YES"<<endl;
       else cout<<"NO"<<endl;

       }
}



