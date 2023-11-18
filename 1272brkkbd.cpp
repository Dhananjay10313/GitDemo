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
    int a, b; cin>>a>>b;
    string s; cin>>s;
    set<char> st; char c;
    for(int i=0;i<b;i++){
        cin>>c; 
        st.insert(c);
    }
    int len=0; int ans=0;
    for(auto i:s){
        if(st.find(i)==st.end()){
            ans+=len*(double(len+1)/2.0); len=0;
        }else len+=1;
    }
    ans+=len*(double(len+1)/2.0);
    cout<<ans<<endl;
}

signed main(){
    // test
    solve();
}