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
const int mod = 1e9 + 7;
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

int fact[N];

int Power(int a, int b) {
    int result = 1; a %= mod;
    while (b) {if (b % 2 == 1) result *= a; a *= a; a %= mod; result %= mod; b /= 2; }
    return result;
}

int factorial(int n) {
    fact[0] = 1;
    for (int i = 1; i < n; i++) { fact[i] = i * fact[i - 1]; fact[i] %= mod; }
    return fact[n];
}

int Mod_Inv(int a) {
    a %= mod; a = Power(a, mod - 2); return a;
}

int nCr(int n, int r)
{
    if (n < r) return 0;
    int ans = fact[n]; ans %= mod;
    ans *= Mod_Inv(fact[r]); ans %= mod;
    ans *= Mod_Inv(fact[n - r]); ans %= mod;
    return ans;
}
int n;
void solve(){
    int x, y; cin>>x>>y;
    if(x-y==1) {cout<<2<<endl; cout<<x<<" "<<y<<endl; return;}
    if(y!=0 && x!=0){int len = x-y+x-y;
    cout<<len<<endl;
    int st=x-1;
    cout<<st<<" ";
    for(int i=x;i>=y;i--) cout<<i<<" ";
    for(int i=y+1;i<=st-1;i++) cout<<i<<" "; 
    cout<<endl;}
    else {
        if(x==0){
            cout<<
        }
    }
}
signed main(){
    test
    solve();
}