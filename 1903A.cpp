// https://codeforces.com/problemset/problem/1903/A


#include <bits/stdc++.h>
using namespace std;

int main() {
       
       int t;
       cin>>t;
       while(t--){
        int n,k;
        cin>>n>>k;
        vector<int>v(n,0);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        
        if(is_sorted(v.begin(),v.end())){
            cout<<"YES"<<endl;
        }else{
            if(k==1)cout<<"NO"<<endl;
            else cout<<"YES"<<endl;
        }
       }

}



