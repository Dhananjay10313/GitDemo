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
    int n; cin>>n;
    string str1; cin>>str1;
    vector<string> keep;
    set<string> see;
    for(int i=0;i<n;i++){
        string s;
        for(int j=0;j<3 && j+i<n;j++){
            s.push_back(str1[i+j]);
            see.insert(s);
        }
    }
    for(int i=0;i<26;i++){
        string t="";
        t+=char('a'+i);
        if(see.find(t)==see.end()){
            cout<<t<<endl;
            return;
        }
    }

    for(int i=0;i<26;i++){
        for(int j=0;j<26;j++){
            string t="";
            t+=char('a'+i); t+=char('a'+j);
            if(see.find(t)==see.end()){
                cout<<t<<endl;
                return;
            }
        }
    }

    for(int i=0;i<26;i++){
        for(int j=0;j<26;j++){
            string t="a";
            t+=char('a'+i); t+=char('a'+j);
            if(see.find(t)==see.end()){
                cout<<t<<endl;
                return;
            }
        }
    }
}

signed main(){
    test
    solve();
}