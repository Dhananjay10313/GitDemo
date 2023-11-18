#include<bits/stdc++.h>

using namespace std;

#define ll long long int

int main(){
    ll t=1;
    while(t--){
        ll n,k,x; cin>>n>>k>>x;
        vector<ll> nums(n);
        for(int i=0;i<n;i++)
            cin>>nums[i];
        sort(nums.begin(),nums.end());
        vector<ll> diff;
        int cnt=1;
        for(int i=0;i<n-1;i++){
            if(nums[i+1]-nums[i]>x){
                diff.push_back(nums[i+1]-nums[i]);
                cnt+=1;
            }
        }
        // cout<<cnt<<endl;
        sort(diff.begin(),diff.end());
        int j=0;
        while(k>0 && j<diff.size()){
            if(diff[j]%x==0){
                if((diff[j]/x)-1<=k){
                    cnt-=1;
                    k-=(diff[j]/x)-1;
                }else break;
            }
            else{
                if((diff[j]/x)<=k){
                    cnt-=1;
                    k-=(diff[j]/x);
                }else break;
            }
            j+=1;
        }
        cout<<cnt<<endl;
    }
}