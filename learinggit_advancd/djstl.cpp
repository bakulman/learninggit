#include<bits/stdc++.h>
#include<cmath>
using namespace std;
priority_queue<pair<int,int>,vector<pair<int,int> >,greater<pair<int,int> > >q;//STL优先队列（使用pair的情况下）的定义方法。由于要采用小根堆，所以需要这样定义。注* 
int fir[500001],to[500001],val[500001],nex[500001],n,m,s,u,v,w,cnt;
const int inf=2147483647;
long long dis[10001];//为了避免判定相加时爆掉int成负数，此处采用long long。注1* 
bool book[100001];
void add_edge(int a,int b,int c)//链式前向星存图，不懂的可以问度娘 
{
	to[++cnt]=b;
	val[cnt]=c;
	nex[cnt]=fir[a];
	fir[a]=cnt;
}
int main()
{
	cin>>n>>m>>s;
	for(int i=1; i<=m; i++)
	{
		cin>>u>>v>>w;
		add_edge(u,v,w); 
	}
	for(int i=1; i<=n; i++)
		dis[i]=inf;
	dis[s]=0;//初始化dis数组 
	q.push(make_pair(0,s));//这里采用C++自带二元组编写。注2* 
	while(q.size())//当堆中还有元素 
	{
		int x=q.top().second;//q.top()取出堆顶，也就是当前距离起点最近的点。 
		q.pop();//取完就删 
		if(book[x]) continue;//如果这个定点标记过了，就不用。注3* 
		book[x]=1;//标记一下 
		for(int i=fir[x]; i; i=nex[i])
		{
			if(dis[to[i]]>dis[x]+val[i])//dijkstra算法核心语句 
			{
				dis[to[i]]=dis[x]+val[i];
				q.push(make_pair(dis[to[i]],to[i]));//每次松弛成功，把关于当前点的信息压入堆。 
			}
		}
	}
	for(int i=1;i<=n;i++)
		cout<<dis[i]<<" "; 
	return 0;
}
/*
注：priority_queue<(数据类型)>的定义方法默认是大根堆。只有priority_queue<(数据类型),vector<(数据类型)>,greater<(数据类型)> >的方法才能定义小根堆。另外，应该用空格分开两个连在一起的尖括号(<<或>>)，否则编译器会把它识别成流读取运算符。
 	当然，你也可以选择重载运算符，不过我觉得这样更好些。毕竟不少人不会重载。
 	另外，优先队列虽然等价于堆，但是内部原理是通过给予变量一个优先值来实现的，与堆不同。 
注1：C++的计算过程中的数据是以两个变量中最高的数据类型存储的，与结果保存变量无关。两个int相加保存在一个long long变量里，如果结果超出int，还是会炸的。
注2：C++自带的二元组pair,定义方法是pair<(数据类型1),(数据类型2)>(名称)。相当于一个包含两个变量的结构体。pair中的两个成员使用.first和.second进行访问。在优先队列里，pair是以first为第一关键字、以second为第二关键字排序的。向pair中插入元素可以直接像结构体一样赋值，也可以使用make_pair()插入。 
注3：这里采用的是懒惰删除的思想。因为STL的优先队列不支持对内部元素的随机删除，所以采用一个标记。如果曾经使用过，那么在它到堆顶的时候就不使用它。相当于把删除操作延迟到堆顶进行。 
*/