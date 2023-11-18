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
    int n, k; cin>>n>>k;
    string s; cin>>s; 
    int i=0, j=n-1;
    int bf=0, sf=0;
    while(i<n && s[i]=='L') i+=1;
    while(j>=0 && s[j]=='L') j-=1;
    if(i==n){
        if(k==0) cout<<0<<endl;
        else cout<<2*min(k,n)-1<<endl; return;
    }
    int ans=0; int cnt=0;
    bf=i, sf=n-1-j;
    vector<int> L; int w=0;
    for(i;i<=j;i++){
        if(s[i]=='L') cnt+=1;
        else if(cnt!=0) L.push_back(cnt), cnt=0;
        if(s[i]=='W') w+=1;
        else if(w!=0) ans+=2*(w)-1, w=0;
    }
    if(w!=0) ans+=2*(w)-1;
    sort(L.begin(),L.end());
    for(int i=0;i<L.size();i++){
        if(L[i]<=k && L[i]!=0){
            ans+=2*L[i]+1;
            k-=L[i];
        }
        else {
            ans+=2*k; k=0; break;
        }
    }
    // cout<<ans;
    // return;
    if(k){
        ans+=min(k,bf)*2;
        k-=min(k,bf);
        if(k){
            ans+=2*min(k,sf) ; 
        }
    }
    cout<<ans<<endl;
}

signed main(){
    test
    solve();
}