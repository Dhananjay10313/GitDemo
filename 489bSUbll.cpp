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
    vector<int> boys(n);
    for(int i=0;i<n;i++) cin>>boys[i];
    sort(boys.begin(),boys.end());
    int m; cin>>m;
    int pairs=0;
    vector<int> girls(m);
    for(int i=0;i<m;i++) cin>>girls[i];
    sort(girls.begin(),girls.end());
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(abs(boys[i]-girls[j])<2) {pairs+=1, girls[j]=-1; break;}
        }
    }
    cout<<pairs<<endl;
}

signed main(){
    // test
    solve();
}