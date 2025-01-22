
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


inline ll mod(ll a,ll b)
{
    while (a >= b)
        a -= b;
    return a;
}

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
// int n;
// int cnt = 0;
// vector<int> ans(100,0);
// vector<int> vis(100,0);
// vector<bool> ispri(50,true);
// bool flag = false;
// void dfs(int k)
// {
//
//     for(int i = 1;i <= n;++i)
//     {
//
//
//         if(vis[i] == 0 && (k == 1 || ispri[ans[k-1] +i]))
//         {
//             vis[i] = 1;
//             ans[k] = i;
//             if(k == 1 && i!= 1)
//                 exit(0);
//             if(k == n && ispri[ans[k] + ans[1]])
//             {
//                 cnt++;
//                 if(cnt >10)
//                     exit(0);
//                 flag = true;
//                 for(int j = 1;j <= n;++j)
//                     cout << ans[j] << ' ';
//                 cout << endl;
//             }
//             if(k+1<= n)
//                 dfs(k+1);
//             vis[i] = 0;
//         }
//     }
// }

int n,m;
vector<ll> v;
bool check(int mid)
{
    ll cnt = 0,sum = 0;
    for(int i = 0;i < n;++i)
    {//de2(i,v[i]);
        sum+=v[i];
        if(sum > mid)
        {
            cnt++;
            sum = v[i];
        }
    }
    if(sum != 0)
    {
        cnt++;

    }
    return cnt <= m;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    //
    //
    // ispri[0] = ispri[1] = false;
    // for(int i = 2;i *i <= 50;++i)
    // {
    //     if(ispri[i])
    //     {
    //         for(int j = i*i;j <= 50;j+=i)
    //         {
    //             ispri[j] =  false;
    //         }
    //     }
    // }
    //
    //
    //
    // cin >> n;
    // dfs(1);



    ll n;
    cin >> n;
    string s;
    cin >> s;
    ll ans = 0;
    ll base = 1;
    for(int i = s.size()-1;i >= 0;--i)//从低位向高位遍历
    {
        if(isdigit(s[i]))
        {
            ans += (s[i] - '0')*base;
        }
        else
        {
            ans += (s[i] - 'A' + 10)*base;
        }
        base *= n;
    }

    ll m;
    cin >> m;
    string a = "";
    while (ans)
    {
        ll t  = ans%m;
        ans /= m;//de(ans);
        char ch;
        if(t >= 10)
            ch = t - 10 + 'A';
        else
            ch = t + '0';

        a = ch + a;
    }
    if(!a.empty())//检查是不是0
        cout << a;
    else
        cout << 0;







}














