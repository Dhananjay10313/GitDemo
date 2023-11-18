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

bool sortbysec(const pair<int,int> &a,
              const pair<int,int> &b)
{
    return (a.second < b.second);
}

void solve(){
    int n; cin>>n;
    int cnt=2; int prv, cur; int flag=1;
    cin>>prv; cin>>cur;
    if(prv>cur) flag=1;
    else flag=0;
    vector<int> nums;
    nums.push_back(prv); 
    prv=cur;
    for(int i=2;i<n;i++){
        cin>>cur;
        if(flag){
            if(prv>cur) flag=1;
            else nums.push_back(prv), flag=0, cnt+=1;
        }
        else {
            if(cur>prv) flag=0;
            else nums.push_back(prv), flag=1, cnt+=1;
        }
        prv=cur;
    }
    nums.push_back(cur);
    cout<<cnt<<endl;
    for(int i:nums)
        cout<<i<<" ";
    cout<<endl;
}

signed main(){
    test
    solve();
}