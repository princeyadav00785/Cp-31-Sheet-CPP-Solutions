https://codeforces.com/problemset/problem/1901/A

#include <bits/stdc++.h>
using namespace std;

int main() {
       
       int t;
       cin>>t;
       while(t--){
        int n,x;
        cin>>n>>x;
        std::vector<int>v(n,0) ;
        for(int i=0;i<n;i++)cin>>v[i];
        vector<int>gasStnReached;
        gasStnReached.push_back(0);
        for(int i=0;i<n;i++){
            if(v[i]<x){
                gasStnReached.push_back(v[i]);
            }
        }
        int mxm=INT_MIN,diff=0,k=gasStnReached.size();
        for(int i=0;i<gasStnReached.size()-1;i++){
            diff= gasStnReached[i+1]-gasStnReached[i];
            mxm=max(mxm,diff);
        }
        diff=2*(x-gasStnReached[k-1]);
        mxm=max(mxm,diff);
        cout<<mxm<<endl;
       }

}



