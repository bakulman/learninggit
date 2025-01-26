#include <bits/stdc++.h>
#define de(x) cout << #x << " = " << x << endl;
#define de2(x,y) cout << #x << " = " << x << " " << #y << " = " << y << endl;
#define de3(x,y,z) cout << #x << " = " << x << " " << #y << " = " << y << " " << #z << " = " << z << endl;
#define f(i,a,b) for(int i = a;i <= b;++i)
#define fd(i,a,b) for(int i = a;i >= b;--i)
#define fro for

typedef long long ll;
using namespace std;

string h_mult_l(string s1,string s2)
{
    int len = s1.size();
    long long a = stoi(s2);
    vector<long long> ans(len + s2.size(),0);
    for(int i = 0;i < len ;++i)
    {
        long long temp = 1LL * (s1[len - 1 - i] - '0') * a;
        ans[i] += temp;//注意处理顺序
        ans[i+1] += ans[i]/10;//当前位一共的进位
        ans[i] %= 10;//最后处理当前位
    }
    if(ans[len] >= 10)//注意多余进位
    {
        int le = len;
        long long t = ans[len];
        while (t)
        {
            ans[le++] = t%10;
            t/= 10;
        }
    }
    string res = "";
    int i = len + s2.size() - 1;
    for(;i > 0 && ans[i] == 0;--i);
    for(;i >= 0;--i)
    {
        res += ans[i] + '0';
    }
    return res;
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    string a,b;
    cin >> a >> b;
    cout << h_mult_l(a,b);





















}














