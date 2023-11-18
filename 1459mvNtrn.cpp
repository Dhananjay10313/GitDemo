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

int n;

set<pair<int,int>> st;

int helper(int pos,int x,int y,int dr,vector<vector<int>> &dp){
    if(pos==n){
        pair<int,int> pr;
        pr.first=x, pr.second=y;
        if(st.find(pr)==st.end()) {st.insert(pr); return 1;}
        return 0;
    }
    // if(dp[dr][n]!=-1) return dp[dr][n];
    if(dr){
        return dp[dr][n]=(helper(pos+1,x+1,y,!dr,dp)+helper(pos+1,x-1,y,!dr,dp));
    }
    else return dp[dr][n]=(helper(pos+1,x,y+1,!dr,dp)+helper(pos+1,x,y-1,!dr,dp));
}

void solve(){
    cin>>n;
    vector<vector<int>> dp(2,vector<int>(n+1,-1));
    int ans=0;
    ans=helper(0,0,0,0,dp)+helper(0,0,0,1,dp);
    cout<<ans<<endl;
}

signed main(){
    test
    solve();
}