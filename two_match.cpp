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

int n,m,e;
vector<vector<int>> g; // 邻接矩阵
vector<bool> vis;      // 标记当前遍历中是否访问过
vector<int> linked;    // 每个右侧点匹配的左侧点
bool dfs(int x)
{
    for(int i = 1;i <= m;++i)
    {
        if(g[x][i] && !vis[i])
        {
            vis[i] = true;// 标记为已访问
            if(linked[i] == -1 || dfs(linked[i]))// 匹配点为空或递归找到增广路
            {
                linked[i] = x;// 更新匹配关系
                return true;
            }
        }

    }

    return false;
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);




    cin >> n >>m >> e;
    // 初始化邻接矩阵
    g.assign(n + 1, vector<int>(m + 1, 0));
    linked.assign(m + 1, -1);



    for(int i = 1;i <= e;++i)
    {
        int a,b;
        cin >> a >> b;
        g[a][b] = 1;
    }

    int cnt = 0;
    for(int i  = 1;i <= n;++i)
    {
        vis.assign(m + 1, false); // 重置访问标记数组
        if(dfs(i))
            cnt++;
    }
    cout << cnt;

























}














