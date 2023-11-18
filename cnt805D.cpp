// (ASCII) a=97 A=65

#include <bits/stdc++.h>
using namespace std;
#define test              int T;cin>>T;while(T--)
// #define int               long long
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
    string s; cin>>s;
    int p; cin>>p;
    vector<char> st;
    map<char,int> freq; int sum=0;
    for(auto i:s){
        sum+=int(i)-96;
        if(freq[i]==0){
            st.push_back(i);
            freq[i]=1; continue;
        }
        freq[i]+=1;
    }
    if(sum<=p){
        cout<<s<<endl; return;
    }
    sort(st.begin(),st.end());
    reverse(st.begin(),st.end());
    int flag=0;
    for(auto i:st){
        while(freq[i]!=0){
            freq[i]-=1;
            sum-=int(i)-96;
            if(sum<=p) {flag=1; break;}
        }
        if(flag) break;
    }
    string ans="";
    for(auto i:s){
        if(freq[i]!=0) {ans+=i; freq[i]-=1;}
    }
    cout<<ans<<endl;
}

signed main(){
    test
    solve();
}