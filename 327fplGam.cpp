#include<bits/stdc++.h>

using namespace std;

typedef long long int ll;

int main(){
    int n, cnt=0,ones=0,b,mx=0; cin>>n;
    for(int i=0;i<n;i++){
        cin>>b;
        if(b==1){
            ones+=1, cnt-=1;
        }else cnt+=1;
        if(cnt<0){
            cnt=0;
        }
        if(cnt>mx){
            mx=cnt;
        }
    }
    if(ones==n) cout<<0<<endl;
    else cout<<ones+mx<<endl;
}