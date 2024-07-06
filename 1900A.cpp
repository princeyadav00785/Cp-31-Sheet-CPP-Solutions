https://codeforces.com/problemset/problem/1900/A


#include <bits/stdc++.h>
using namespace std;

int main() {
       
       int t;
       cin>>t;
       while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        int cnt=0,ans=0,f=0;
        for(int i=0;i<s.length();i++){
            if(s[i]=='.')
            {
            cnt++;
            if(cnt>2)
            f=1;
            }
            else{
                ans+=cnt;
                cnt=0;
            }
        }
        ans+=cnt;
        if(f==1)cout<<"2"<<endl;
        else{
            cout<<ans<<endl;
        }

       }
}



