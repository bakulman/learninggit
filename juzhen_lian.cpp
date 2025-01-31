#include <bits/stdc++.h>
using namespace std;

struct Eage{
    int to, dis, nest;//to为边的终点，dis为边的权值，nest为下一条边的编号
};
int main(){
    //链式前向星
    int heads,eages;
    cin >> heads >> eages;
    vector<int> head(heads+1,-1);
    vector<Eage> eage(eages+1);

    for(int i = 1;i <= eages;++i)
    {
        int from;
        cin >> from >> eage[i].to >> eage[i].dis;
        eage[i].nest = head[from];
        head[from] = i;
    }


    //遍历链式前向星
    for(int i = 1;i <= heads;++i)
    {
        for(int k = head[i]; ~k; k = eage[k].nest)
        {
            cout << i << " " << eage[k].to << " " << eage[k].dis << endl;
        }
    }
    
}