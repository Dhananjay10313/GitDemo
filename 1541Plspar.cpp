#include<bits/stdc++.h>

using namespace std;

typedef long long int ll;

int main(){
    ll t; cin>>t;
    while(t--){
        ll n; cin>>n;
        vector<ll> nums(n+1);
        for(int i=1;i<=n;i++)
            cin>>nums[i];
        ll cnt=0;
        for(int i=1;i<=n;i++){
            for(int j=nums[i]-i;j<=n;j+=nums[i]){
                if(j>0){
                    if(nums[i]*nums[j]==i+j && i<j)
                        cnt+=1;
                }
            }
        }
        cout<<cnt<<endl;
    }
}



