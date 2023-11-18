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


int n,m;
string s;

void solve(){
    cin>>n>>m;
	for(int i=0; i<n; i++){
		cin>>s;
		for(int j=0; j<m; j++)
			
			if (s[j]=='.'){
			    
				if((i+j)%2==0)
				    s[j]='W';
				    
				else	
				    s[j]='B';
				    
			}
			
	    cout<<s<<endl;
	}
}

signed main(){
    // test
    solve();
}