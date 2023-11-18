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
#define ln                endl
const int MOD = 1e9 + 7;
const int N = 1e5 + 7;
 
void init_code() {
#ifndef ONLINE_JUDGE
	freopen("inputf.txt", "r", stdin);
	freopen("outputf.txt", "w", stdout);
#endif // ONLINE_JUDGE
}

void solve(){
    int n; cin>>n; char c; cin>>c;
    string s; cin>>s; int flag=0,pos=0;
    for(int i=0;i<n-1;i++){
        if(s[i]!=c){
            flag=1;
        }
        else{
            pos=i+1;
        }
    }
    if(s[n-1]!=c && flag){
        if(n%pos==0){
            cout<<2<<ln; cout<<n-1<<" "<<n<<ln;
        }
        else{
            cout<<1<<ln; cout<<pos<<ln;
        }
    }
    else if(s[n-1]!=c){
        cout<<1<<ln;
        cout<<n<<ln;
    }
    else if(flag){
        cout<<1<<ln;
        cout<<n<<ln;
    }
    else cout<<0<<endl;
}

signed main(){
    test
    solve();
}