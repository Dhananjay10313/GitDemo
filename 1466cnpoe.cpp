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
#define mem1(x, arr)           memset((arr),x,sizeof((arr)))
#define pVec(v)           for(auto e:v)cout<<e<<" ";cout<<"\n"
const int MOD = 1e9 + 7;
const int N = 1e5 + 7;
 
void init_code() {
#ifndef ONLINE_JUDGE
	freopen("inputf.txt", "r", stdin);
	freopen("outputf.txt", "w", stdout);
#endif // ONLINE_JUDGE
}

int n;
char in[N];
bool used[N];

void solve(){
	scanf("%s", in + 1);
	n = strlen(in + 1);
	
	for(int i = 1; i <= n; ++i)
		used[i] = false;
	
	int ans = 0;
	for(int i = 2; i <= n; ++i){
		bool use_need = false;
		if(in[i] == in[i - 1] && !used[i - 1])
			use_need = true;

		if(i > 2 && in[i] == in[i - 2] && !used[i - 2])
			use_need = true;

		used[i] = use_need;
		ans += used[i];
	}
	
	printf("%d\n", ans);
}

signed main(){
    test
    solve();
}