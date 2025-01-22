#include <bits/stdc++.h>
#define de(x) cout << #x << " = " << x << endl;
#define de2(x,y) cout << #x << " = " << x << " " << #y << " = " << y << endl;
#define de3(x,y,z) cout << #x << " = " << x << " " << #y << " = " << y << " " << #z << " = " << z << endl;
#define f(i,a,b) for(int i = a;i <= b;++i)
#define fd(i,a,b) for(int i = a;i >= b;--i)
#define fro for

typedef long long ll;
using namespace std;
//
// string l_plus(string a, string b)
// {
//     vector<int> n(10000,0);
//     vector<int> m(10000,0);
//     vector<int> sum(10000,0);
//
//     int la = a.size();
//     int lb = b.size();
//
//     for(int i = la - 1;i >= 0;--i)
//     {
//         n[la-i-1] = a[i] - '0';
//         //de(i);
//     }
//     for(int i = lb - 1;i >= 0;--i)
//     {
//         m[lb-i-1] = b[i] - '0';
//         //de(i);
//     }
//
//     //add
//     ll add = 0;
//     int len = max(la, lb);
//     for(int i = 0;i < len;++i)
//     {
//         sum[i] = n[i] + m[i] + add;
//         add = sum[i]/10;
//         sum[i] %= 10;
//         //cout << sum[i] << " ";
//
//     }
//     if(add!= 0)
//     {
//         sum[len] = add;
//         len++;
//         //de(len);
//     }
//
//     string res = "";
//     for(int i = len -1;i >= 0;--i)
//     {
//         char ch = sum[i] + '0';
//         res += ch;
//         //de(ch);
//     }
//     //cout << res;
//
//     return res;
// }

//
//  string mul_2(string s)
// {
//     vector<int> a(1000,0);
//     for(int i = 0;i <= s.size()-1;++i)
//     {
//         a[i] = s[s.size()-1-i] - '0';
//     }
//
//     ll jin = 0;
//     for(int i = 0;i < s.size();++i)
//     {
//         a[i]  = a[i]*2 + jin;
//         jin = a[i]/10;
//         a[i] %= 10;
//     }
//     ll len = s.size();
//     if(jin != 0)
//     {
//         a[s.size()] = jin;
//         len++;
//     }
//
//
//
//      string res = "";
//      for(int i = len-1;i >= 0;--i)
//      {
//          char ch = a[i] + '0';
//          res += ch;
//      }
//      return res;
//
// }
//
//
// struct cow
// {
//     ll w;
//     ll s;
//     ll sum;
//     cow() = default;
//     cow(ll a,ll b):w(a),s(b),sum(a+b){}
// };








// ll fast(ll base, ll n)
// {
//     ll res = 1;
//     while (n)
//     {
//         if(n%2 == 1)
//         {
//             res *= base;
//         }
//         base *= base;
//         n /= 2;
//     }
//     return res;
// }


// inline ll mod(ll a,ll b)
// {
//     while (a >= b)
//         a -= b;
//     return a;
// }

// int n,m,ta,tb,a,b,k = 1;;
// int step[400][500];
// char dp[30][30];
// void dfs(int x,int y,int st)
// {
//     if(x >= 1 && y >= 1 && x <= n && y <= m && step[x][y] == 0 )
//     {
//         step[x][y] = 90;
//         if(x == n && y == m)
//         {
//             cout << k++ << ':';
//             for(int i = 1;i <= st;++i)
//             {
//
//                 cout  << step[i][1] << "," << step[i][2] ;
//                 if(i!= st)
//                 cout <<"->";
//
//
//             }
//             cout << endl;
//             return;
//         }
//        dfs(x,y+1,st+1);dfs(x+1,y,st+1);dfs(x,y-1,st+1);dfs(x-1,y,st+1);
//
//     }
// }


// void tswap(int& a,int& b,int &c)
// {
//     if(a < b)
//         swap(a,b);
//     if(a < c)
//         swap(a,c);
//     if(b < c)
//         swap(b,c);
//
// }
// bool isP(int a)
// {
//     for(int i = 2;i * i <= a;++i)
//     {
//         if(a%i == 0)
//             return false;
//     }
//     return true;
// }
int n,m;
ll minSum = INT_MAX;
int cnt = 0;
vector<ll> ans;
ll sum = 0;
vector<vector<bool>> flag(31,vector<bool>(31,false));
vector<vector<ll>> dp(31, vector<ll>(31, INT_MAX));

void dfs(int x, int y, vector<vector<ll>> &v)
{
    if(sum >= minSum)
        return;
    if(sum >= dp[x][y])
        return;
    dp[x][y] = sum;

    if(x == n-1 && y == m-1)
    {
        minSum = min(minSum, sum + v[x][y]);//de3(x,y,sum);
        ans.emplace_back(sum + v[x][y]);
        return;
    }
    if(!flag[x][y])
    {
        sum += v[x][y];
        flag[x][y] = true;
        // 改动2：使用正确边界条件
        if(y + 1 < m) dfs(x, y + 1, v);
        if(x + 1 < n) dfs(x + 1, y, v);
        if(y - 1 >= 0) dfs(x, y - 1, v);
        if(x - 1 >= 0) dfs(x - 1, y, v);

        flag[x][y] = false;
        sum -= v[x][y];
    }
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);




    cin >>n >> m;

    vector<vector<ll>> v(n,vector<ll>(m));
        for(int i = 0;i < n;++i)
        {
            for(int j = 0;j < m;++j)
            {
                cin >> v[i][j];

            }
        }

    dfs(0,0,v);
    cout << *min_element(ans.begin(),ans.end()) << endl;

















}














