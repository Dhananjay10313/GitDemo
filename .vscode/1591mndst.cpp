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
    int n, k; cin>>n>>k;
    vector<int> pos,neg;
    int prv=0;
    for(int i=0;i<n;i++){
        cin>>prv; 
        if(prv<0) neg.push_back((-1*prv));
        else pos.push_back(prv);
    }
    sort(pos.begin(),pos.end()); sort(neg.begin(),neg.end());
    int i=-1; int ans=0;
    // cout<<pos.size()<<endl;
    if(neg.size()!=0 && pos.size()!=0){
        prv=0;
        do{
            if(i==pos.size()-1) break;
            i+=k; ans+=prv;
            if(i<pos.size()){
                ans+=pos[i]; prv=pos[i];
            }else ans+=pos[pos.size()-1];
        }while(i<pos.size());
        i=-1; prv=0;
        do{
            if(i==neg.size()-1) break;
            i+=k;
            if(i<neg.size()){
                ans+=neg[i]; prv=neg[i];
            }else ans+=neg[neg.size()-1];
            // cout<<ans<<endl;
        }while(i<neg.size());
        ans+=min(pos[pos.size()-1],neg[neg.size()-1]);
    }
    else if(pos.size()!=0){
        prv=0; 
        do{ 
            if(i==pos.size()-1) break;
            i+=k; ans+=prv;
            if(i<pos.size()){
                ans+=pos[i]; prv=pos[i];
            }else ans+=pos[pos.size()-1];
            // cout<<ans<<endl;
        }while(i<pos.size());
    }
    else{
        prv=0;
        do{
            if(i==neg.size()-1) break;
            i+=k;
            if(i<neg.size()){
                ans+=neg[i]; prv=neg[i];
            }else ans+=neg[neg.size()-1];
        }while(i<neg.size());
    }
    cout<<ans<<endl;
}

signed main(){
    test
    solve();
}