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
    int a;  int nums[n]; int mx=-1;
    for(int i=0;i<n;i++){
        cin>>a; nums[i]=a;
        mx=max(mx,a);
    }
    string s1=""; int mb=mx;
    while(mx--) s1+='a';
    if(mb!=0)cout<<s1<<endl;
    for(int i=0;i<n&& mb!=0;i++){
        int j=0; string s2="";
        while(nums[i]--){
            s2+=s1[j]; j+=1;
        }
        if(s1[j]=='a'){
            for(int i=j;i<mb;i++) s2+='b';
        }
        else for(int i=j;i<mb;i++) s2+='a';
        s1=s2; cout<<s1<<endl;
    }
    if(mb==0){
        for(int i=0;i<=n;i++){
            if(i%2==0) cout<<'a'<<endl;
            else cout<<'b'<<endl;
        }
    }
}

signed main(){
    test
    solve();
}