#include<bits/stdc++.h>

using namespace std;

#define ll long long int


bool find(vector<ll> &nums,ll k,ll h){
    ll sum=0; ll n=nums.size(), cnt=0;
    for(int i=0;i<n-1;i++){
        if(nums[i+1]-nums[i]<k)
            sum+=nums[i+1]-nums[i], cnt+=1;
    }
    sum+=(n-cnt)*k;
    return sum>=h;
}

 int main(){
    ll t; cin>>t;
    while(t--){
        ll n, h, kk, ans=INT_MAX; cin>>n>>h;
        vector<ll> nums(n);
        for(ll i=0;i<n;i++){
            cin>>nums[i];
        }
        sort(nums.begin(),nums.end());
        ll l=1, r=1e18,m;
        while(l<=r){
            m=l+(r-l)/2;
            bool flag=find(nums,m,h);
            if(flag){
                ans=min(ans,m);
                r=m-1;
            }else{
                l=m+1;
            }
        }
        cout<<ans<<endl;
    }
 }