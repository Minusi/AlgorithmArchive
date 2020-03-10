//#include <iostream>
//#include <utility>
//#include <queue>
//#include <algorithm>
//#include <vector>
//using namespace std;
//
//#ifdef _DEBUG
//#include "Utility.h"
//#endif // _DEBUG
//
//
//typedef pair<int, int> dest;
//int main()
//{
//	ios::sync_with_stdio(false);
//	cin.tie(NULL);
//
//	int n;
//	cin >> n;
//	
//	vector<dest> tree[10001];
//	for (int i = 0; i < n - 1; ++i)
//	{
//		int parent, child, weight;
//		cin >> parent >> child >> weight;
//		
//		tree[parent].emplace_back(child, weight);
//		tree[child].emplace_back(parent, weight);
//	}
//
//
//	queue<int> q;
//	int visit[10001];
//	fill(visit + 1, visit + n + 1, -1);
//
//	q.emplace(1);
//	visit[1] = 0;
//	// find farthest length from root
//	int max_root_len = 0;
//	int node_max_len = 0;
//	while (q.empty() == false)
//	{
//		int curr = q.front();
//		q.pop();
//		
//		int next;
//		for (int i = 0; i < tree[curr].size(); ++i)
//		{
//			next = tree[curr][i].first;
//
//			// check already have visited
//			if (visit[next] != -1)
//				continue;
//
//			int next_len = visit[curr] + tree[curr][i].second;
//			q.emplace(next);
//			visit[next] = next_len;
//
//			if (max_root_len < next_len)
//			{
//				max_root_len = next_len;
//				node_max_len = next;
//			}
//		}
//	}
//	
//	fill(visit + 1, visit + n + 1, -1);
//	q.emplace(node_max_len);
//	visit[node_max_len] = 0;
//
//	int tree_diameter = 0;
//	while (q.empty() == false)
//	{
//		int curr = q.front();
//		q.pop();
//		
//		int next;
//		for (int i = 0; i < tree[curr].size(); ++i)
//		{
//			next = tree[curr][i].first;
//			
//			// check already have visited
//			if (visit[next] != -1)
//				continue;
//
//			int next_len = visit[curr] + tree[curr][i].second;
//			q.emplace(next);
//			visit[next] = next_len;
//			tree_diameter = max(tree_diameter, next_len);
//		}
//	}
//
//	cout << tree_diameter << "\n";
//	return 0;
//}