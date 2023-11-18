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

int isvalid(int x, int y, int n, int m)
{
    if(x<0||y<0||x>=n||y>=m)
    return 0;
    return 1;
}

void solve(){
    int n, m;
    cin>>n>>m;
    int a[n][m];
    int ans=1;
    int mx[n][m];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>a[i][j];
            int temp=0;
            if(isvalid(i+1, j, n, m)==1)
            temp++;
            if(isvalid(i-1, j, n, m)==1)
            temp++;
            if(isvalid(i, j+1, n, m)==1)
            temp++;
            if(isvalid(i, j-1, n, m)==1)
            temp++;
            mx[i][j]=temp;
            if(a[i][j]>temp)
            ans=0;
        }
    }
    if(ans==0)
    {
        cout<<"NO"<<endl;
    } 
    else
    {
        cout<<"YES"<<endl;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                cout<<mx[i][j]<<" ";
            }
            cout<<endl;
        }
    }
}

signed main(){
    test
    solve();
}
