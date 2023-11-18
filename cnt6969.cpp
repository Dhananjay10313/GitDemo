#include<bits/stdc++.h>

using namespace std;

bool sortbysec(const pair<int,int> &a,
              const pair<int,int> &b)
{
    return (a.second < b.second);
}

void findNum(){
    int n, k; cin>>n>>k;
    vector<pair<int,int>> nums(n);
    for(int i=0;i<n;i++){
        int sum=0, b;
        for(int j=0;j<6;j++){
            cin>>b; sum+=b;
        }
        nums[i].second=sum;
    }
    sort(nums.begin(),nums.end(),sortbysec);
    map<int,int> mp; int prv=-1; int rnk=0;
    for(int i=n-1;i>=0;i++){
        if(nums[i].second!=prv){
            rnk+=1; 
            mp[nums[i].first]=rnk;
        }
        else{
            mp[nums[i].first]=rnk;
        }
        prv=nums[i].second;
    }
    string ans;
    for(int i=0;i<n;i++){
        if(mp[i]<=k){
            ans+="+";
            ans+=to_string(mp[i]);
        }
        else{
            ans+="-";
            ans+=to_string(mp[i]);
        }
    }
}