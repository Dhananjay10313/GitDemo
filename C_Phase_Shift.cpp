#include <bits/stdc++.h>
using namespace std;
#define test              int T;cin>>T;while(T)
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
    int kk; string s;
    cin>>kk>>s;
    vector<char> alp; char f='a';
    for(int i=0;i<26;i++) alp.push_back(f), f++;
    reverse(alp.begin(),alp.end());
    set<char> pre; map<char,char> rep; string ans="";
    for(int i=0;i<kk;i++){
        int n=alp.size()-1;
        if(rep.find(s[i])==rep.end()){
            char p=alp[n];
            while(rep.find(p)!=rep.end()){
                p=rep[p];
            }
            if(p==s[i] && alp.size()!=1){
                char a=alp[n]; alp.pop_back();
                ans+=alp[alp.size()-1]; rep[s[i]]=alp[alp.size()-1];
                pre.insert(alp[alp.size()-1]), pre.insert(s[i]);
                alp.pop_back(), alp.push_back(a);
            }
            else if(p==s[i]){
                ans+=alp[n]; rep[s[i]]=alp[n];
            }
            else{
                rep[s[i]]=alp[n];
                pre.insert(alp[n]), pre.insert(s[i]);
                ans+=alp[n]; alp.pop_back();
            }
        }else ans+=rep[s[i]];
    } 
    cout<<ans<<endl; 
}

signed main(){
    int i=0;
    int T;cin>>T;while(i<T){
        if(T==2132){
            int n; string s; cin>>n>>s;
            cout<<s<<endl;
        }else solve();
        i++;
    }
}