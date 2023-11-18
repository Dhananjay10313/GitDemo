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
    int n,x,y; cin>>n>>x>>y;
    int mn=0; int df; int nn=n;
    for(int i=1;i<=y-x;i++){
        if((y-x)%i==0){
            if(((y-x)/i)-1<=n-2){
                n-=((y-x)/i)+1;
                if(x%i==0 && (x/i-(1))!=0)
                    mn=x-min(n,((x/i-(1))))*i;
                else if(i==x) mn=x;
                else if((x/i)!=0){
                    mn=x-min(n,(x/i))*i;
                }else mn=x;
                df=i; break;
            }
        }
    }
    for(int i=mn;i<=mn+(nn-1)*df;i+=df)
        cout<<i<<" ";
    cout<<endl;
}

signed main(){
    test
    solve();
}