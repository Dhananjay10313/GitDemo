#include<bits/stdc++.h>

using namespace std;

#define ll long long int

int main(){
    ll t; cin>>t;
    while(t--){
        ll n,x; cin>>n>>x;
        vector<int> nums(n);
        for(int i=0;i<n;i++)
            cin>>nums[i];
        int flag=0;
        vector<int> cpy=nums;
        sort(nums.begin(),nums.end());
        for(int i=0;i<n;i++){
            if(nums[i]!=cpy[i] && i+x>=n && i-x<0){
                flag=1; break;
            }
        }
        if(flag)
            cout<<"No";
        else cout<<"Yes";
        cout<<endl;
    }
}