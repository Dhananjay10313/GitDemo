#include<bits/stdc++.h>

using namespace std;

typedef long long int ll;

int main(){
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        ll prv,cur; ll ans=0;
        for(int i=0;i<n;i++){
            cin>>cur;
            if(i!=0){
                if(double(cur)/prv<0){
                    ans+=prv; prv=cur;
                }
                prv=max(prv,cur);
            }
            else prv=cur;
        }
        cout<<ans+prv<<endl;
    }
}