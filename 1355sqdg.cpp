#include <bits/stdc++.h>
using namespace std;

typedef long long int ll; 

ll retNum(ll n){
    ll nm=n;
    int mx=0, mn=9;
    while(n!=0){
        int k=n%10;
        mx=max(k,mx), mn=min(k,mn);
        n/=10;
    }
    return nm+mx*mn;
}

int main() {
	int t; cin>>t;
    while(t--){
        ll a,k; cin>>a>>k;
        ll ans=a; ll j=1;
        while(j!=k){
            ll prv=ans;
            ans=retNum(ans); j+=1;
            if(ans==prv) break;
        }
        cout<<ans<<endl;
    }
}