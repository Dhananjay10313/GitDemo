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
    vector<int> a(n);vector<int> b(n);
    for(int i=1;i<=n;i++){
		cin>>a[i];
		a[i]+=a[i-1];
	}
	for(int i=1;i<=n;i++){
		cin>>b[i];
		b[i]+=b[i-1];
	}
	int ans=INT_MAX;
	for(int i=1;i<=n;i++){
		ans=min(ans,max(a[n]-a[i],b[i-1]));
	}
	cout<<ans<<endl;
}

signed main(){
    test
    solve();
}