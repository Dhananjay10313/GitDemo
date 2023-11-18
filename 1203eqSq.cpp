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
    int n;
    cin>>n;
    vector<int>v(4*n);
    for(auto &i:v)
    cin>>i;
    sort(v.begin(),v.end());
    bool flag = true;
	for(int i = 0;i<4*n;i+=2)
		if(v[i]!=v[i+1])
			flag = false;
	int a = v[0]*v.back();
	for(int i=0;i<n;i++)
		if(a!=v[i*2]*v[4*n-i*2-1])
			flag = false;
	if(!flag) cout<<"NO"<<endl;
	else cout<<"YES"<<endl;
}

signed main(){
    test
    solve();
}