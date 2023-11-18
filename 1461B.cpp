// (ASCII) a=97 A=65

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
bool isPerfectSquare(int x)
{
    if (x >= 0)
    {
        int sr = sqrt(x);
        return (sr * sr == x);
    }
    return false;
}
bool isPrime(int n)
{
    if (n <= 1)
        return false;
    for (int i = 2; i < n; i++)
        if (n % i == 0)
            return false;
    return true;
}
bool isPowerOfTwo(int n)
{
    if (n == 0)
        return false;
    return (ceil(log2(n)) == floor(log2(n)));
}
 
bool sortbysec(const pair<int,int> &a,
              const pair<int,int> &b)
{
    return (a.second < b.second);
}

void solve(){
    int n, m; cin >> n >> m;
	vector<vector<char>> mat(n,vector<char>(m)); 
    for (int i=0; i<n; i++) {
        for (int j=0; j<m; j++){
            cin >> mat[i][j];
        } 
    }
	int ans=0;
	vector<vector<int>> preS(n, vector<int>(m+1, 0));
	for (int i=0; i<n; i++) {
		for (int j=m-1; j>=0; j--) {
			if (mat[i][j]=='*') preS[i][j] = preS[i][j+1]+1;
		}
	}
	for (int i=0; i<n; i++) {
		for (int j=0; j<m; j++) {
			for (int k=0; k<=min({n-1-i, j, m-1-j}); k++) {
				if (preS[i+k][j-k]>=2*k+1) ans+=1;
				else break;
			}
		}
	}
    cout<<ans<<endl;
}

signed main(){
    test
    solve();
}