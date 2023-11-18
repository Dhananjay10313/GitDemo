#include<bits/stdc++.h>

using namespace std;

typedef long long int ll;

int main(){
    ll t; cin>>t;
    while(t--){
        ll n; cin>>n;
        vector<ll> aPresum(n+1,0), bPresum(n+1,0);
        for(int i=1;i<=n;i++){
            cin>>aPresum[i];
        }
        sort(aPresum.begin(),aPresum.end());
        for(int i=1;i<=n;i++)
            aPresum[i]+=aPresum[i-1];
        for(int i=1;i<=n;i++){
            cin>>bPresum[i];
        }
        sort(bPresum.begin(),bPresum.end());
        for(int i=1;i<=n;i++)
            bPresum[i]+=bPresum[i-1];
        ll zr=0;
        for(ll i=0;;i++){
            ll a=i*100+(aPresum[n]-aPresum[(n+i)/4]);
            ll b=bPresum[n]-bPresum[max((n+i)/4 - i,zr)];
            if(a>=b){
                cout<<i<<endl;
                break;
            } 
        }
    }
}