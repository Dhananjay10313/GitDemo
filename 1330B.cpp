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
    int i,j,k,n,m,ans=0,cnt=0,len;
    cin>>n;
    int a[n];
    map<int,int> mp;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
        mp[a[i]]++;
    }
    set <int> st;
    vector <int> res;
    for(i=0;i<n;i++)
    {
      st.insert(a[i]);
      mp[a[i]]--;
      if(mp[a[i]]==0)
      {
           mp.erase(a[i]);
      }
      int len=n-i-1;
      if(*st.rbegin()==(i+1) && st.size()==(i+1) && mp.rbegin()->first==len && mp.size() == len)
       {
           res.push_back(i+1);
       }
    }
    cout<<res.size()<<'\n';
    for (auto x : res)
    {
    	cout << x << " " << n - x << '\n';
    }
}

signed main(){
    test
    solve();
}