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
#define inf               LONG_LONG_MAX
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

vector<int> nums(300002); vector<vector<int>> dp(2,vector<int>(300002,-1)); 
int n;

int helper(int pos,bool flag){
    if(pos>=n) return 0;
    if(dp[flag][pos]!=-1) return dp[flag][pos];
    int ml=(flag)?-1:1;
    int pick=(nums[pos]*ml)+helper(pos+1,!flag);
    int npick=helper(pos+1,flag); 
    return dp[flag][pos]=max(pick,npick);
}

void solve(){
    int q; cin>>n; cin>>q;
    for(int i=0;i<n;i++) cin>>nums[i], dp[0][i]=-1, dp[1][i]=-1;
    cout<<helper(0,false)<<endl;
}

signed main(){
    test
    solve();
}