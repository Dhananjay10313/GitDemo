#include <bits/stdc++.h>
using namespace std;
#define test              int T;cin>>T;while(T--)
#define int               long long

void solve(){
    int n; cin>>n;
    string s; cin>>s;
    int ans=1e9;
    for(int i=0;i<26;i++){
        int l=0, r=n-1, c=0;
        while(l<r){
            if(s[l]==s[r]) l+=1, r-=1;
            else if(s[l]-'a'==i) l+=1, c+=1;
            else if(s[r]-'a'==i) r-=1, c+=1;
            else break;
        }
        if(l>=r)
            ans=min(ans,c);
    }
    if(ans!=1e9) cout<<ans<<endl;
    else cout<<-1<<endl;
}

signed main(){
    test
    solve();
}