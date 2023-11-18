#include<bits/stdc++.h>

using namespace std;

typedef long long int ll;

// ll negPro(int n,vector<int> &nums){
//     if(n==3)
//         n=2;
//     if(n>5)
//         n==4;
//     ll pro=1; int i=0;
//     while(n!=0){
//         pro*=nums[i];
//         i+=1; n-=1;
//     }
//     return pro;
// }

int main(){
    int t; cin>>t;
    while(t--){
        int pos=0, neg=0, zero=0;
        int n; cin>>n;
        vector<int> nums(n);
        for(int i=0;i<n;i++){
            cin>>nums[i];
            if(nums[i]>0) pos+=1;
            else if(nums[i]) neg+=1;
            else zero+=1;
        }
        sort(nums.begin(),nums.end());
        ll pro=1, pro1=1, pro2=1; 
        pro=nums[n-1]*nums[n-2]*nums[n-3]*nums[n-4]*nums[n-5];
        pro1=nums[0]*nums[1]*nums[n-1]*nums[n-2]*nums[n-3];
        pro2=nums[0]*nums[1]*nums[2]*nums[3]*nums[n-1];
        cout<<max(pro1,max(pro,pro2))<<endl;
    }
}