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
    cin>>n;

    vector<int> b(n+1);

    for(int i=1;i<=n;i++) cin>>b[i];

    if(n==4){
        int a=max(b[3],b[1])+1-b[1];
        int c=max(b[4],b[2])+1-b[2];
        cout<<min(a,c)<<endl;
        return;
    }

    int ans=INT_MAX;
    if(n%2==1){
        ans=0;
        for(int i=2;i<n;i+=2) {
            if(b[i]<b[i-1] || b[i]<b[i+1]) ans+=max(b[i-1],b[i+1])+1-b[i];
        }
    }
    else{
        vector<int> a(n+1), c(n+1), d(n+1);
        for(int i=2;i<n;i++){
            d[i]=max(b[i-1],b[i+1])+1-b[i];
        }

        
        if(b[n-1]<b[n] || b[n-1]<b[n-2]) c[n-1]=max(b[n-2],b[n])+1-b[n-1];
        else c[n-1]=0;

        if(b[n-2]<b[n-1] || b[n-2]<b[n-3]) a[n-2]=max(b[n-3],b[n-1])+1-b[n-2];
        else a[n-1]=0;
        

        for(int i=n-3;i>=2;i--){
            if(b[i]<b[i-1] || b[i]<b[i+1]) a[i]=max(b[i-1],b[i+1])+1-b[i]+a[i+2];
            else a[i]=a[i+2];
        }

        for(int i=2;i<n;i+=2) {
            cout<<a[i]<<" ";
        }
        cout<<endl;

        for(int i=3;i<n;i+=2) {
            cout<<c[i]<<" ";
        }
        cout<<endl;
        int s1=0, s2=0;

        for(int i=2;i<n-2;i++){
            int l=0;
            if(b[i]<b[i-1] || b[i]<b[i+1]) l=max(b[i-1],b[i+1])+1-b[i];
            if(i==n-3){
                s2+=l; 
                ans=min(ans,c[i+2]+s2);
                // break;?
            }
            else{
                int h;
                if(i%2==0){
                    s1+=l; 
                    h=min(s1+a[i+2],s1+c[i+3]);
                    ans=min(ans,h);
                }
                else{
                    s2+=l; 
                    h=min(s2+c[i+2],s2+a[i+3]);
                    ans=min(ans,h);
                }
            }
        }
    }
    cout<<ans<<endl;
}
signed main(){
    test
    solve();
}