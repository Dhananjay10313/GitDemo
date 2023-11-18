#include<bits/stdc++.h>

using namespace std;



int main(){
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        vector<vector<int>> mark1(101,vector<int>(51,0));
        vector<vector<int>> mark2(101,vector<int>(51,0));
        int nums[n];
        for(int i=0;i<n;i++)
            cin>>nums[i];
        map<int,int> sums; int ans=0;
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                if(mark1[nums[i]+nums[j]][j]!=1 && mark2[nums[j]+nums[i]][i]!=1){
                    sums[nums[i]+nums[j]]+=1;
                    ans=max(sums[nums[i]+nums[j]],ans);
                    mark1[nums[i]+nums[j]][j]=1; mark2[nums[i]+nums[j]][j]=1;
                    mark2[nums[j]+nums[i]][i]=1; mark1[nums[j]+nums[i]][i]=1;
                    // cout<<j<<" ";
                }
            }
        }
        // mark1.clear(), mark2.clear();
        cout<<ans<<endl;
    }
}