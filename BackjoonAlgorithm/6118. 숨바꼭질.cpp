//#include <iostream>
//#include <vector>
//#include <queue>
//using namespace std;
//
//#ifdef _DEBUG
//#include "Utility.h"
//#endif // _DEBUG
//
//
//constexpr int nmax = 20000;
//int main()
//{
//	ios::sync_with_stdio(false);
//	cin.tie(NULL);
//
//	int n, m;
//	cin >> n >> m;
//
//	vector<int> graph[nmax + 1];
//	{
//		int src, dest;
//		for (int i = 0; i < m; ++i)
//		{
//			cin >> src >> dest;
//			graph[src].push_back(dest);
//			graph[dest].push_back(src);
//		}
//	}
//	constexpr int INF = 987654321;
//	queue<int> q;
//	int visit[nmax + 1] = { 0 };
//	
//	q.emplace(1);
//	visit[1] = { INF };
//	
//	int node;
//	size_t num_bfs;
//	int count = 0;
//	while (q.empty() == false)
//	{
//		bool find_path = false;
//		size_t qsize = q.size();
//		for (int s = 0; s < qsize; ++s)
//		{
//			auto curr = q.front();
//			q.pop();
//
//			int next;
//			for (const auto it : graph[curr])
//			{
//				next = it;
//
//				if (visit[next])	continue;
//				
//				if (find_path == false)
//				{
//					find_path = true;
//					node = INF;
//					count++;
//					num_bfs = 0;
//				}
//				
//				if(find_path)
//				{
//					if (node > next)	node = next;
//					num_bfs++;
//				}
//				visit[next] = count;
//				q.emplace(next);
//			}
//		}
//	}
//
//	cout << node << " " << count << " " << num_bfs << "\n";
//	return 0;
//}