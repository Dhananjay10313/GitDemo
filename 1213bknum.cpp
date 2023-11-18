#include <bits/stdc++.h>
using namespace std;
#define test              int T;cin>>T;while(T--)
#define int               long long int
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
    int n,m;
    cin>>n>>m;
	int sum=0,sum10=0;
	for(int j=1;j<=10;j++){
		sum10+=(m*j)%10;
	}
	int n1=n/(10*m);
	sum+=n1*sum10;
	n%=(10*m);
	for(int j=m;j<=n;j+=m){
		sum+=j%10;
	}
    cout<<sum<<endl;
}


signed main(){
    test
    solve();
}