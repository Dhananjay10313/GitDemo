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
    int n; cin>>n;
    map<int,int> freq, mp; set<pair<int,int>> st, par; 
    int a, b; int flag=0;
    for(int i=0;i<n;i++){
        cin>>a>>b;
        freq[a]+=1, freq[b]+=1;
        if(freq[a]==2){
            int m=max(b,mp[a]), k=min(b,mp[a]);
            st.insert({m,k});
        }
        else if(freq[b]==2){
            int m=max(a,mp[b]), k=min(a,mp[b]);
            st.insert({m,k});
        }
        int m=max(b,a), k=min(b,a);
        pair<int,int> fn={m,k};
        if(b==a || freq[a]>2 || freq[b]>2 ||st.find(fn)!=st.end()) flag=1;
        mp[a]=b, mp[b]=a;
    }
    if(flag) cout<<"NO"<<endl;
    else cout<<"YES"<<endl;
}

signed main(){
    test
    solve();
}