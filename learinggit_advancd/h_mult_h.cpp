#include <bits/stdc++.h>
#define de(x) cout << #x << " = " << x << endl;
#define de2(x,y) cout << #x << " = " << x << " " << #y << " = " << y << endl;
#define de3(x,y,z) cout << #x << " = " << x << " " << #y << " = " << y << " " << #z << " = " << z << endl;
#define f(i,a,b) for(int i = a;i <= b;++i)
#define fd(i,a,b) for(int i = a;i >= b;--i)
#define fro for

typedef long long ll;
using namespace std;


string h_mult_h(string s1,string s2)
{
    int len1 = s1.size(),len2 = s2.size();
    vector<int> a1(len1,0),a2(len2,0),ans(len1+len2+1,0);
    for(int i = 0;i < len1;++i)
    {
        a1[i] = s1[len1 - 1 - i] - '0';
    }
    for(int i = 0;i < len2;++i)
    {
        a2[i] = s2[len2 - 1 - i] - '0';
    }
    for(int i = 0;i < len1;++i)
    {
        for(int j = 0;j < len2;++j)
        {
            ans[i+j] += a1[i] * a2[j];
            ans[i+j+1] += ans[i+j]/10;
            ans[i+j] %= 10;
        }
    }
    if(ans[len1 + len2 - 1] > 10)
    {
        ans[len1 + len2] = ans[len1 + len2 -1]/10;
        ans[len1 + len2 - 1] %= 10;
    }
    string res = "";
    int i = len1 + len2;
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




    string s1,s2;
    cin >> s1 >> s2;
    cout << h_mult_h(s1,s2) << endl;




















}














