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
    int n,k; cin>>n>>k;
    int l=1, r=1e15, m;
    while(l<=r){
        m=l+(r-l)/2;
        int pos=(m/n)*(n-1)+m%n;
        if(m%n==0 && pos==k){
            cout<<m-1<<endl; return;
        }
        if(pos>k)
            r=m-1;
        else if(pos<k)
            l=m+1;
        else{
            cout<<m<<endl;
            return;
        }
    }
}

signed main(){
    test
    solve();
}