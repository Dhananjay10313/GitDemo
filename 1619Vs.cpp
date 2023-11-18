#include<bits/stdc++.h>

using namespace std;

#define ll long long int

int main(){
    ll t; cin>>t;
    while(t--){
        ll a,s; cin>>a>>s;
        ll b=0; int j=0;
        while(a!=0){
            if(s==0){
                break;
            }
            if(s%10>=a%10){
                cout<<(s%10-a%10)*pow(10,j)<<endl;
                b=(s%10-a%10)*pow(10,j)+b;
                cout<<b<<endl;
                a/=10, s/=10;
            }
            else{
                int x=s%10;
                s/=10;
                if(s==0) break;
                x+=(s%10)*10; //cout<<x<<endl;
                b+=pow(10,j)*(x-a%10);
                cout<<b<<endl;
                a/=10, s/=10;
            }
            j+=1;
        }
        if(a>0){
            cout<<-1;
        }
        else {
            if(s==0){
                cout<<b;
            }
            else{
                while(s!=0){
                    b+=pow(10,j)*(s%10);
                    s/=10;
                }
                cout<<b;
            }
        }
        cout<<endl;
    }
}