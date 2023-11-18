#include<bits/stdc++.h>

using namespace std;

typedef long long int ll;

int main(){
    int t; cin>>t;
    while(t--){
        int n,m; cin>>n>>m;
        vector<ll> nums(n); map<int,int> freq;
        for(int i=0;i<n;i++){
            cin>>nums[i];
            freq[nums[i]%m]+=1;
        }
        ll ans=0;
        for(int i=0;i<=m/2;i++){
            if((freq[m-i]>0 && freq[i]>0)){
                ans+=1;
                if(freq[m-i]>=freq[i]){
                    freq[m-i]-=freq[i]; freq[i]=0;
                }
                else{
                    freq[i]-=freq[m-i]; freq[m-i]=0;
                }
                if(freq[m-i]!=0)
                    freq[m-i]-=1;
                else if(freq[i]!=0){
                    freq[i]-=1;
                }
            }
            else if(i==0 && freq[0]>0){
                ans+=1; freq[0]=0;
            }
            ans+=freq[m-i]+freq[i];
        }
        cout<<ans<<endl;
    }
}