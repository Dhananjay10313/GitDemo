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
#define inf              LONG_LONG_MAX
#define pii               pair<int,int>
#define rep(i,a,b)        for(int i=a;i<b;i++)
#define mem1(x, arr)           memset((arr),x,sizeof((arr))
#define pVec(v)           for(auto e:v)cout<<e<<" ";cout<<"\n"
const int MOD = 1e9 + 7;
const int N = 1e5 + 7;
 
void init_code() {
#ifndef ONLINE_JUDGE
	freopen("inputf.txt", "r", stdin);
	freopen("outputf.txt", "w", stdout);
#endif // ONLINE_JUDGE
}

void solve(){
    int n; string s;
    cin>>n>>s;
    vector<int> ones(n), zeroes(n); int o=0, z=0;
    for(int i=0, j=n-1;i<n;i++,j--){
        ones[i]=o, zeroes[j]=z; 
        if(s[j]=='0') z+=1;
        if(s[i]=='1') o+=1;
    }
    // if(n==1) {cout<<s<<endl; return;}
    string s1="";
    for(int i=0;i<n;i++){
        if(s[i]=='1' && zeroes[i]==0) s1+='1';
        if((s[i]=='0' && ones[i]==0)||(s[i]=='0' && zeroes[i]==0)) s1+='0';
    }
    cout<<s1<<endl;
}

signed main(){
    test
    solve();
}