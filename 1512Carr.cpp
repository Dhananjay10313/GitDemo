#include<bits/stdc++.h>

using namespace std;

#define ll long long int

int main(){
    ll t; cin>>t;
    while(t--){
        ll n,sum=0,mx=INT_MIN,pmx=INT_MIN; cin>>n;
        vector<int> nums(n+2);
        for(int i=0;i<n+2;i++){
            cin>>nums[i];
            sum+=nums[i];
            if(mx<=nums[i]){
                pmx=mx; mx=nums[i];
            }
            if(nums[i]!=mx && pmx<nums[i])
                pmx=nums[i];
        }
        // cout<<pmx<<endl;
        if(sum-pmx-mx>max(mx,pmx)){
            // cout<<pmx;
            cout<<-1;
        }
        else if(sum-mx-pmx==pmx){
            for(int i=0;i<n+2;i++){
                if(nums[i]==pmx){
                    pmx=-1;
                }
                else if(nums[i]==mx){
                    mx=-1;
                }
                else{
                    cout<<nums[i]<<" ";
                }
            }
        }
        else {
            int flag=1;
            for(int i=0;i<n+2;i++){
                // cout<<sum<<endl;
                if(mx==sum-mx-nums[i]){
                    pmx=nums[i]; flag=0;
                    for(int i=0;i<n+2;i++){
                        if(nums[i]==pmx){
                            pmx=-1;
                        }
                        else if(nums[i]==mx){
                            mx=-1;
                        }
                        else{
                            cout<<nums[i]<<" ";
                        }
                    }
                    break;
                }
            }
            if(flag)
                cout<<-1<<endl;
        }
        cout<<endl;
    }
}