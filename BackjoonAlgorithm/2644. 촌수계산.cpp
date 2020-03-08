//#include <iostream>
//#include <queue>
//#include <vector>
//using namespace std;
//
//#ifdef _DEBUG
//#include "Utility.h"
//#endif // _DEBUG
//
//
//
//int main()
//{
//	ios::sync_with_stdio(false);
//	cin.tie(NULL);
//
//	int n, m;
//	int lhs, rhs;
//	cin >> n >> lhs >> rhs >> m;
//	
//	// use graph instead of tree because of convenience for bfs
//	vector<int> family_graph[101];
//	for (int i = 0; i < m; ++i)
//	{
//		int parent, child;
//		cin >> parent >> child;
//		family_graph[parent].push_back(child);
//		family_graph[child].push_back(parent);
//	}
//
//	queue<int> q;
//	int visit[101] = { 0 };
//	
//	q.push(lhs);
//	visit[lhs] = 999;
//	int relation_level = 0;
//	int level_to_rhs = -1;
//	bool looping = true;
//	while (q.empty() == false && looping)
//	{
//		size_t qsize = q.size();
//		relation_level+= 1;
//		for (int s = 0; s < qsize && looping; ++s)
//		{
//			int curr = q.front();
//			q.pop();
//
//			int next;
//			for (int i = 0; i < family_graph[curr].size() && looping; ++i)
//			{
//				next = family_graph[curr][i];
//
//				// check fo out of range
//				if (next < 0 || next > 100)
//					continue;
//
//				// check already have visited
//				if (visit[next] != 0)
//					continue;
//
//				if (next == rhs)
//				{
//					level_to_rhs = relation_level;
//					looping = false;
//				}
//				visit[next] = relation_level;
//				q.push(next);
//			}
//		}
//	}
//
//	cout << level_to_rhs << "\n";
//	return 0;
//}