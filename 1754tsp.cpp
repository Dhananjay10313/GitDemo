#include<bits/stdc++.h>

using namespace std;

typedef long long int ll;

int main(){
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        string dia;
        cin>>dia;
        int ret=0;
        for(int i=n-1;i>=0;i--){
            if(dia[i]=='A') ret+=1;
            else ret-=1;
            if(ret<0) break;
        }
        if(ret<0) cout<<"No"<<endl;
        else cout<<"Yes"<<endl;
    }
}