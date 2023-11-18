#include<bits/stdc++.h>

using namespace std;

int main(){
    int t; cin>>t;
    while(t--){
        int n,x; cin>>n>>x;
        int odd=0,even=0,b;
        for(int i=0;i<n;i++){
            cin>>b;
            if(b%2==0)
                even+=1;
            else   
                odd+=1;
        }
        if(x%2==1){
            if(odd>=x)
                cout<<"Yes"<<endl;
            else if(even>=x && odd>=1)
                cout<<"Yes"<<endl;
            else if(odd%2==0 && n-1>=x && odd!=0 && even!=0)
                cout<<"Yes"<<endl;
            else if(odd%2==1 && n>=x && even!=0 && odd!=0)
                cout<<"Yes"<<endl;
            else
                cout<<"No"<<endl;
        }
        else{
            if(odd>=x && even>=1)
                cout<<"Yes"<<endl;
            else if(even>=x && odd>=1)
                cout<<"Yes"<<endl;
            else if(odd%2==0 && n-1>=x && even!=0 && odd!=0)
                cout<<"Yes"<<endl;
            else if(odd%2==1 && n>=x && even!=0 && odd!=0)
                cout<<"Yes"<<endl;
            else
                cout<<"No"<<endl;
        }
    }
}