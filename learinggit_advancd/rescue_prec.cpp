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

/*
公主被恶人抓走，被关押在牢房的某个地方。牢房用N*M (N, M <= 20)的矩阵来表示。矩阵中的每项可以代表道路（@）、墙壁（#）、和守卫（x）。
英勇的骑士（r）决定孤身一人去拯救公主（a）。我们假设拯救成功的表示是“骑士到达了公主所在的位置”。由于在通往公主所在位置的道路中可能遇到守卫，骑士一旦遇到守卫，必须杀死守卫才能继续前进。
现假设骑士可以向上、下、左、右四个方向移动，每移动一个位置需要1个单位时间，杀死一个守卫需要花费额外的1个单位时间。同时假设骑士足够强壮，有能力杀死所有的守卫。
给定牢房矩阵，公主、骑士和守卫在矩阵中的位置，请你计算拯救行动成功需要花费最短时间。
输入
第1行有两个整数代表N和M, (N, M <= 20).
随后N行，每行有M个字符。"@"代表道路，"a"代表公主，"r"代表骑士，"x"代表守卫, "#"代表墙壁。
输出
如果拯救行动成功，输出一个整数，表示行动的最短时间。
如果不可能成功，输出"Impossible"
*/


int n,m,tarx,tary;
ll minSum = INT_MAX;
ll cnt = 0;
vector<ll> ans;
ll sum = 0;
vector<vector<bool>> flag(51,vector<bool>(51,false));
vector<vector<ll>> dp(51, vector<ll>(51, INT_MAX));

void dfs(int x, int y, vector<vector<char>> &v)
{

    if(cnt > dp[x][y])
        return;

    dp[x][y] = cnt;

    if(x == tarx && tary == y)
    {//de(cnt);
        minSum = min(minSum,cnt + 1);
        ans.push_back(cnt+1);
        return;
    }

    if(x >= 0 && y >= 0 && x < n && y < m &&v[x][y] != '#' )
    {//de3(x,y,v[x][y]);

        bool xi = false;
        bool si = false;
        if(v[x][y] == 'x')
        {
            cnt+=2;
            xi = true;
        }
        else if(v[x][y] == '@')
        {
            cnt++;
            si = true;
        }
        v[x][y] = '#';
        if(y < m-1)
            dfs(x,y+1,v);
        if(x < n-1)
            dfs(x+1,y,v);
        if(y>0)
            dfs(x,y-1,v);
        if(x>0)
            dfs(x-1,y,v);//防止越界,越界就会故障
        if(xi)
        {
            cnt -= 2;
            v[x][y] = 'x';
        }
        else if(si)
        {
            cnt--;
            v[x][y] = '@';
        }
    }
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);




    cin >>n >> m;

    int ta,tb;
    vector<vector<char>> v(n,vector<char>(m));
        for(int i = 0;i < n;++i)
        {
            for(int j = 0;j < m;++j)
            {
                cin >> v[i][j];
                if(v[i][j] == 'r')
                {
                    ta = i;
                    tb = j;
                }
                if(v[i][j] == 'a')
                {
                    tarx = i;
                    tary = j;
                    v[i][j] = '@';
                }

            }
        }

    dfs(ta,tb,v);
    if(!ans.empty())
    cout << *min_element(ans.begin(),ans.end()) << endl;
    else
        cout << "Impossible " << endl;

















}














