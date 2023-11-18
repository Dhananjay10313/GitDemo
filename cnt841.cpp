// (ASCII) a=97 A=65
#include <bits/stdc++.h>
using namespace std;
#define test              int T;cin>>T;while(T--)
#define int               unsigned long long int
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

// void init_code() {
// #ifndef ONLINE_JUDGE
//     freopen("inputf.txt", "r", stdin);
//     freopen("outputf.txt", "w", stdout);
// #endif // ONLINE_JUDGE
// }
// bool isPerfectSquare(int x)
// {
//     if (x >= 0)
//     {
//         int sr = sqrt(x);
//         return (sr * sr == x);
//     }
//     return false;
// }
// bool isPrime(int n)
// {
//     if (n <= 1)
//         return false;
//     for (int i = 2; i < n; i++)
//         if (n % i == 0)
//             return false;
//     return true;
// }
// bool isPowerOfTwo(int n)
// {
//     if (n == 0)
//         return false;
//     return (ceil(log2(n)) == floor(log2(n)));
// }

// bool sortbysec(const pair<int,int> &a,
//             const pair<int,int> &b)
// {
//     return (a.second < b.second);
// }

// vector<int> primes;

// void SieveOfEratosthenes(int n)
// {
//     bool prime[n + 1];
//     memset(prime, true, sizeof(prime));
 
//     for (int p = 2; p * p <= n; p++) {
//         if (prime[p] == true) {
//             primes.push_back(p);
//             for (int i = p * p; i <= n; i += p)
//                 prime[i] = false;
//         }
//     }
//  }


void solve(){
    int n; cin>>n;
    // int ans=(2022*(((((n*((n*n-1)%MOD)%MOD))/3)%MOD + (((n*((n+1)*(2*n+1))%MOD)%MOD)/6)%MOD))%MOD)%MOD;
    int ans=(2022*(((((n*(((n*n)%MOD-1)%MOD))%MOD)/3) + (((((n*(n+1))%MOD)*(2*n+1))%MOD))/6)))%MOD;
    cout<<ans<<endl;
}
signed main(){
    test
    solve();
}