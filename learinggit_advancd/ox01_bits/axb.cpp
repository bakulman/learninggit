#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
using namespace std;
// 就是以二进制的方式拆解蜜实现快速幂
ll power(ll a, ll b, ll p)
{
    ll ans = 1 % p;
    while (b)
    {cout << 1;
        if (b & 1) // 如果二进制位为1
        {
            ans = (ans * a) % p;
        }
        a = (a * a) % p; // 自己乘自己,次幂
        b << 1;//忘了
    }
    return ans; // ll防止爆炸
}
int main()
{
    ll a, b, p;
    cin >> a >> b >> p;
    cout << power(a, b, p) << endl;
}