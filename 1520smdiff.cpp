#include<bits/stdc++.h>

using namespace std;

#define ll long long int

int main(){
    ll t; cin>>t;
    while(t--){
        ll n; cin>>n;
        vector<ll> nums(n);
        for(int i=0;i<n;i++){
            cin>>nums[i];
            nums[i]-=i;
        }
        map<int,int> cnt; ll ans=0;
        for(auto i:nums){
            ans+=cnt[i];
            cnt[i]+=1;
        }
        cout<<ans<<endl;
    }
}