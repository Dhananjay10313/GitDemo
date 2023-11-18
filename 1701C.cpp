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
    int n, m, b; cin>>n>>m;
    map<int,int> freq;
    int eve=0, odd=0, pre=0;
    for(int i=0;i<m;i++){
        cin>>b;
        if(freq[b]==0) pre+=1;
        freq[b]+=1;
    }
    for(int i=1;i<=n;i++){
        if(pre.find(i)==pre.end()){
            eve+=1;
        }
    }
    int ans=0; int i=0;
    while(m>0){
        ans+=1;
        if(i%2==0){
            m-=pre+eve;
        }
        else{
            m-=pre+odd;
        }
        for(auto j:pre){
            freq[j]-=1;
            if(freq[j]==0){
                if(i%2==0) odd+=1;
                else eve+=1;
                pre-=1;
            }
        }
        i+=1;
    }
    cout<<ans<<endl;
}

signed main(){
    test
    solve();
}