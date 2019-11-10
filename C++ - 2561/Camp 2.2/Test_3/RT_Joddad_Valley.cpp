#include<bits/stdc++.h>
#define INF (double)1e25
using namespace std;
struct A
{
	int now;
	double t,v,c;
	bool operator <(const A & o) const{
        return t>o.t;
	}
};
A temp,now;
priority_queue<A > heap;
double w[210][210],tp;
int mark[210];
char opr[30];
int n,m;
void travel(int s,int e,double v,double c)
{
	temp.now = s,temp.t = 0,temp.v = v,temp.c = c;
	heap.push(temp);
	int ch = 0;
	while(!heap.empty())
	{
		now = heap.top();
		heap.pop();
		if(mark[now.now] == 1)
			continue;
		mark[now.now] = 1;
		//printf("%d %lf\n",now.now,now.t);
		if(now.now == e)
		{
			ch = 1;
			break;
		}
		if(now.v <= 0)
			continue;
		for(int i=1; i <= n ; i++)
		{
			if(w[now.now][i] == INF || w[now.now][i] == -1)
				continue;
			temp.now = i;
			temp.v = now.v - (now.c*w[now.now][i]);
			temp.t = (w[now.now][i]/now.v) + now.t;
			temp.c = now.c;
			if(mark[temp.now] == 1)
				continue;
			heap.push(temp);
		}
	}
	if(ch)
		printf("%.2lf\n",now.t);
	else
		printf("IMPOSSIBLE\n");
	for(int i=1; i<=n; i++)
		mark[i] = 0;
	while(!heap.empty())
		heap.pop();
}
void destroy(int s)
{
	for(int i=1; i<=n; i++)
	{
		w[s][i] = -1;
		w[i][s] = -1;
	}
}
int main()
{
	int a,b,q,s,e;
	double v,c;
	scanf("%d %d %d",&n,&m,&q);
	for(int i=1; i<=n; i++){
		for(int j=1; j<=n; j++){
			if(i == j){
				w[i][j] = 0;
				continue;
			}
			w[i][j] = -1;
		}
	}
	for(int i=1; i<=m; i++){
		scanf("%d %d %lf",&a,&b,&tp);
		if(w[a][b] == -1)
			w[a][b] = w[b][a] = tp;
		else{
			w[a][b] = min(w[a][b],tp);
			w[b][a] = w[a][b];
		}
	}
	while(q--){
		scanf(" %s",opr);
		if(opr[0] == 't'){
			scanf("%d %d %lf %lf",&s,&e,&v,&c);
			travel(s,e,v,c);
		}
		else if(opr[0] == 'd'){
			scanf("%d",&s);
			destroy(s);
		}
		else if(opr[0] == 'a'){
			scanf("%d %d",&e,&b);
			w[e][e] = 0;
			while(b--){
				scanf("%d %lf",&s,&tp);
				if(w[s][e] == -1)
					w[s][e] = w[e][s] = tp;
				else{
					w[s][e] = min(w[s][e],tp);
					w[e][s] = w[s][e];
				}
			}
		}
	}
	return 0;
}
/*
5 10 8
1 2 5.0
1 1 5.5
3 1 6.0
1 3 7.0
2 1 3.0
2 2 9.5
3 3 8.5
4 4 10.0
5 5 11.0
1 2 5.5
travel 2 3 10.0 1.0
travel 2 4 6.0 0.0
destroy 4
add 4 1
3 15.5
travel 1 4 3.5 0.1
destroy 2
add 2 3
1 1.0
3 3.0
5 5.0
travel 4 5 1.0 0.2
*/