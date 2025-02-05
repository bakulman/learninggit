/*
外卖（动态规划-背包DP）
题目描述
Bob 是一个重度外卖依赖者。这天他挑中了一家店，这家店总共有 n 种菜品，每种菜品限点一份，需要满 m 元钱才可配送，因此 Bob 想知道他至少需要花多少钱才能满足最低配送要求。

输入
输入共两行，第一行为两个正整数，n 和 m，第二行为 n 个正整数 ai  

输出
输出一个数，满足最低配送要求所花的最少钱数。

样例输入 
【样例1】
3 10 
3 7 9
【样例2】
5 12 
10 11 7 8 9
【样例3】
3 8 
1 6 9 
样例输出
【样例1】
10
【样例2】
15
【样例3】
9
提示
对于第二个样例，最低配送要求为 12 元，最优解为点 7 块和 8 块的两个菜，最少花 15元。 

对于 30% 的数据，满足 n ≤ 15 。 
对于 100% 的数据，满足 n ≤ 200， m ≤所有ai的和 ≤ 50000 。*/


//想不清楚
//什么作为消费,什么作为价值,还有什么为空间
#include <bits/stdc++.h>
#define de(x) cout << #x << " = " << x << endl;
#define de2(x,y) cout << #x << " = " << x << " " << #y << " = " << y << endl;
#define de3(x,y,z) cout << #x << " = " << x << " " << #y << " = " << y << " " << #z << " = " << z << endl;
#define f(i,a,b) for(int i = a;i <= b;++i)
#define fd(i,a,b) for(int i = a;i >= b;--i)
#define fro for

typedef long long ll;
typedef unsigned long long ull;
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);



    int n,m;
    cin >> n >> m;
    vector<int> v(n + 1,0);
    ll ans = 0;
    for(int i = 1;i <= n;++i)
    {
        cin >> v[i];
        ans += v[i];
    }
    sort(v.begin() + 1,v.end());
    vector<int> dp(ans + 1,0);


    int temp = INT_MAX;
    for(int i = 1;i <= n;++i)
    {
        for(int j = ans;j >= v[i];--j)
        {//de2(i,v[i]);
            dp[j] = max(dp[j-1],dp[j-v[i]] + v[i]);
            if(dp[j] >= m)
                temp = min(temp,dp[j]);
        }
    }


    cout << temp << endl;











}



































