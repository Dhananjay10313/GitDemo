// (ASCII) a=97 A=65

#include <bits/stdc++.h>
using namespace std;
#define test              int T;cin>>T;while(T--)
#define int               long long
#define pb                push_back
#define all(x)            (x).begin(),(x).end()
#define sz(x)             (int)((x).size())
#define fr                firs\t
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
    vector<int> ans(n,0);
    set<int> ls, grt;
    map<int,vector<int>> pos;
    int b;
    for(int i=0;i<n;i++){
        cin>>b;
        pos[b].push_back(i);
        if(pos[b].size()>=k) ls.erase(b), grt.insert(b);
        else ls.insert(b);
    }
    int cnt=0;
    for(int i:ls){
        cnt+=pos[i].size();
    }
    for(int a:grt){
        int st=1;
        vector<int> l=pos[a];
        for(int i=0;i<l.size();i++){
            if(st<=k){
                ans[l[i]]=st;
                st+=1;
            }else ans[l[i]]=0;
        }
    }
    int st=1; int flag=0;
    for(int a:ls){
        if(cnt>=k-st+1){
            vector<int> l=pos[a];
            for(int i=0;i<l.size();i++){
                if(cnt<k-st+1){flag=1; break;}
                ans[l[i]]=st;
                st+=1;
                if(st>k) st=1;
                cnt-=1;
            }
        }else break;
        if(flag) break;
    }
    for(int i: ans){
        cout<<i<<" ";
    }
    cout<<endl;
}

signed main(){
    test
    solve();
}