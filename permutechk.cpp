#include<bits/stdc++.h>

using namespace std;

int main(){
    vector<int> nums={3,1,2,4};
    set<int> val;
    int mx=-1; int bg=-1;
    int n=nums.size();
    for(int i=0;i<n;i++){
        val.insert(nums[i]);
        mx=max(mx,nums[i]);
        if(val.size()==mx) bg=mx;
        if(val.size()<i+1) break;
    }
    cout<<mx<<endl;
}