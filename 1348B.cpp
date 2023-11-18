// (ASCII) a=97 A=65

#include <bits/stdc++.h>
using namespace std;
#define test              int T;cin>>T;while(T--)
#define int              long long
#define pb                push_back
#define all(x)            (x).begin(),(x).end()
#define sz(x)             (int)((x).size())
#define fr                firs\t
#define sc                second
#define minf              LOnG_LOnG_MIn
#define inf               LOnG_LOnG_MAX
#define pii               pair<int,int>
#define rep(i,a,b)        for(int i=a;i<b;i++)
#define mem1(x, arr)           memset((arr),x,sizeof((arr)))
#define pVec(v)           for(auto e:v)cout<<e<<" ";cout<<"\n"
const int MOD = 1e9 + 7;
const int n = 1e5 + 7;
 
void init_code() {
#ifndef OnLInE_JUDGE
	freopen("inputf.txt", "r", stdin);
	freopen("outputf.txt", "w", stdout);
#endif // OnLInE_JUDGE
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
    int n,k;
    cin>>n>>k;
    set<int>s;
    for (int i=0;i<n;i++){
      int a;
      cin>>a;
      s.insert(a);
    }
    if (s.size()>k){
      cout<<-1<<endl;
      return;
    }
    cout<<n*k<<endl;
    for (int i=0;i<n;i++){
      for (int b:s)
        cout<<b<<' ';
      for (int j=0;j<k-(int)s.size();j++)
        cout<<1<<' ';
    }
    cout<<endl;
}

signed main(){
    test
    solve();
}