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
    int n;cin>>n;
	string s;cin>>s;
	bool left=false;
	bool right=false;
	for(int i=0;i<n;i++){
	    if(s[i]=='>')right=true;
	    if(s[i]=='<')left=true;
	}
	s+=s[0];int ans=0;
	if(left and right){
	    for(int i=0;i<n;i++){
	        if(s[i]=='-' or s[i+1]=='-')ans++;
	    }
      	cout<<ans<<endl;
	}else{
	    cout<<n<<endl;
	}
}

signed main(){
    test
    solve();
}