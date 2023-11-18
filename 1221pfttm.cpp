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
    int n; cin>>n;
    while(n--){
        int c,m,x; cin>>c>>m>>x;
        if(min(c,m)<x) cout<<min(c,m)<<endl;
        else{
            int a=max(c,m)-x; int b=min(c,m)-x;
            int jj=(((b-(a-b))%3==2)?1:0);
            if((a-b)>=b) cout<<x+b<<endl;
            else cout<<(x+(a-b)+(2*((b-(a-b))/3)+jj))<<endl;
        }
    }
}

signed main(){
    // test
    solve();
}