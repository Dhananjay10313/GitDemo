#include<bits/stdc++.h>

using namespace std;

int main(){
    int n,m,a,b; cin>>n>>m>>a>>b;
    if((double(b)/m)<=double(a)){
        cout<<(n/m)*b+min(b,(n%m)*a)<<endl;
    }
    else cout<<n*a<<endl;
}