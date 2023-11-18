#include<bits/stdc++.h>

using namespace std;

typedef long long int ll;

int main(){
    int  t; cin>>t;
    while(t--){
        int n; cin>>n;
        ll prv=INT_MIN, cur, op=0;
        for(int i=0;i<n;i++){
            cin>>cur;
            if(cur<prv)
                op+=prv-cur;
            prv=cur;
        }
        cout<<op<<endl;
    }
}