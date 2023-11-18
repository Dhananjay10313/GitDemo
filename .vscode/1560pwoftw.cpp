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

int func(int i,int x){
	string s=to_string(i),s2=to_string(x);
	int l=0,xd=0;
	for(int i=0;i<s2.size();i++){
		if(s2[i]==s[l])l++;
		if(l==s.size())break;
	}
	return (s2.size()-l)+(s.size()-l);
}
void solve(){
	int x,ans=1e9; cin>>x;
	for(int i=1;i<=1e16;i*=2){
		ans=min(ans,func(i,x));
	}
	cout<<ans<<"\n";
}

signed main(){
    test
    solve();
}