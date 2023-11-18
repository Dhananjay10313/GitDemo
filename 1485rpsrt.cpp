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
// #define ll                long long int

const int MOD = 1e9 + 7;
const int N = 1e5 + 7;

signed main(){
    int n,q; cin>>n>>q;
    int k; cin>>k;
    vector<int> nums(n);
    for(int i=0;i<n;i++)
        cin>>nums[i];
    while(q--){
        int ans=0; int q1,q2;
        cin>>q1>>q2;
        if(q1-q2==0) {
            cout<<k-1<<endl; continue;
        }
        ans=k+(nums[q2-1]-nums[q1-1]+1)-2*(q2-q1+1);
        cout<<ans<<endl;
    }
}