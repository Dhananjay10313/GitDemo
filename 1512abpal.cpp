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
    int a,b; cin>>a>>b; int n=a+b;
    char s[a+b]; for(int i=0;i<n;i++) cin>>s[i];
    int dol=0;
    for(int i=0;i<n;i++){
        if(s[i]==s[n-1-i] && s[i]=='?') dol+=1;
        else if(s[i]!=s[n-1-i] && s[i]=='0') a-=2;
        else if(s[i]!=s[n-1-i] && s[i]=='1') b-=2;
        else if(s[i]=='0') a-=1;
        else if(s[i]=='1') b-=1;
    }
    // cout<<a<<b<<endl;
    if(a>=0 && b>=0){
        if(dol>=a && ((n%2==0 && a%2==0 && b%2==0)||n%2==1)){
            dol-=a;
            if(dol==b){
                for(int i=0;i<n;i++){
                    if(s[i]=='1') s[i]='1';
                    else if(s[i]=='0') s[i]='0';
                    else if(s[i]!=s[n-1-i] && s[n-i-1]=='0') s[i]='0';
                    else if(s[i]!=s[n-1-i] && s[n-i-1]=='1') s[i]='1';
                    else if(s[i]==s[n-1-i] && a>1) {
                        a-=2; s[i]='0';
                    }
                    else if(s[i]==s[n-1-i] && b>1) {
                        b-=2; s[i]='1';
                    } 
                }
                if(n%2==1 && s[n/2]=='?'){
                    if(a) s[n/2]='0';
                    else s[n/2]='1';
                }
                for(int i=0;i<n;i++) cout<<s[i];
            }
            else cout<<-1;
        }
        else cout<<-1;
    }else cout<<-1;
    cout<<endl;
}

signed main(){
    test
    solve();
}