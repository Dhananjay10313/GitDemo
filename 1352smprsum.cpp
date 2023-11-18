#include <bits/stdc++.h>
using namespace std;
#define test              int T;cin>>T;while(T--)
#define int               long long
#define pb                push_back
#define all(x)            (x).begin(),(x).end()
#define sz(x)             (int)((x).size())
#define fr                first
#define sc                second
#define minf              LONG_LONG_MIN
#define inf              LONG_LONG_MAX
#define pii               pair<int,int>
#define rep(i,a,b)        for(int i=a;i<b;i++)
#define mem1(x, arr)           memset((arr),x,sizeof((arr))
#define pVec(v)           for(auto e:v)cout<<e<<" ";cout<<"\n"
const int MOD = 1e9 + 7;
const int N = 1e5 + 7;
 
void init_code() {
#ifndef ONLINE_JUDGE
	freopen("inputf.txt", "r", stdin);
	freopen("outputf.txt", "w", stdout);
#endif // ONLINE_JUDGE
}

void solve(){
    int n, k; cin>>n>>k;
    if(n%2==0){
        if(k<=n/2){
            cout<<"YES\n";
            for(int i=0;i<k-1;i++)
                cout<<2<<" ";
            cout<<n-(k-1)*2;
        }
        else if(k<=n && k%2==0){
            cout<<"YES\n";
            for(int i=0;i<k-1;i++)
                cout<<1<<" ";
            cout<<n-(k-1);
        }else cout<<"NO";
    }
    else {
        if(k%2==0 || k>n){
            cout<<"NO";
        }
        else{
            cout<<"YES\n";
            for(int i=0;i<k-1;i++)
                cout<<1<<" ";
            cout<<n-(k-1);
        }
    }
    cout<<endl;
}

signed main(){
    test
    solve();
}