#include <bits/stdc++.h>
#define de(x) cout << #x << " = " << x << endl;
#define de2(x,y) cout << #x << " = " << x << " " << #y << " = " << y << endl;
#define de3(x,y,z) cout << #x << " = " << x << " " << #y << " = " << y << " " << #z << " = " << z << endl;
#define f(i,a,b) for(int i = a;i <= b;++i)
#define fd(i,a,b) for(int i = a;i >= b;--i)
#define fro for

typedef long long ll;
using namespace std;

string L_Subtraction(string s1,string s2)
{
    bool neg = false;
    int len1 = s1.size(),len2 = s2.size();
    if(len1 < len2 || s1 < s2)//符号判定
    {
        neg = true;
        swap(s1,s2);
        swap(len1,len2);
    }
    vector<int> a1(len1,0),a2(len1,0),ans(len1,0);//特别注意,算减法的时候会访问到len1的长度,小心a2越界!!!
    for(int i = 0;i < len1;++i)
    {
        a1[i] = s1[len1 - 1 - i]  - '0';
    }

    for(int i = 0;i < len2;++i)
    {
        a2[i] = s2[len2 - 1 - i]  - '0';
    }

    for(int i = 0;i < len1;++i)
    {
        int temp = a1[i] - a2[i];
        if(temp< 0)
        {
            temp += 10;
            a1[i+1]--;
        }
        ans[i] = temp;//别忘了
    }

    string anss = "";
    if(neg)
        anss = "-" + anss;
    int i = len1-1;//len1-1是最末尾,小心越界
    for(;i > 0 && ans[i]==0;++i);

    for(;i >= 0;--i)
    {
        anss += ans[i] + '0';
    }
    return anss;
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    string a,b;
    cin >> a >> b;
    cout << L_Subtraction(a,b);





















}














