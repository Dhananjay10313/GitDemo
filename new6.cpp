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
    int n, d;
	int c;
	cin >> n >> c >> d;
	vector<int> a(n);
	for(int i=0; i<n; ++i) {
		cin >> a[i];
	}
	sort(a.rbegin(), a.rend());
	int ans = -1;
	int l = 0;
	int r = d;
	while(l <= r) {
		int k = l + (r - l) / 2;
		int j = 0;
		long long temp = 0;
		for(int i=0; i<d; ++i) {
			if(j < n) temp += a[j];
			++j;
			if(j > k) j = 0;
		}
		if(temp >= c) {
			ans = k;
			l = k + 1;
		}
		else {
			r = k - 1;
		}
	}
	if(ans == -1) {
		cout << "Impossible" << '\n';
	}
	else if(ans == d) {
		cout << "Infinity" << '\n';
	}
	else {
		cout << ans << '\n';
	}
}

signed main(){
    test
    solve();
}