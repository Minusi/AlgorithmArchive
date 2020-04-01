//// referencing https://www.acmicpc.net/source/6538359 for personal study
//// in my case, solve problem using floyd-warshall and it results 144ms
//
//#include <iostream>
//#include <vector>
//#include <cstring>
//using namespace std;
//
//#ifdef _DEBUG
//#include "Utility.h"
//#endif // _DEBUG
//
//
//
//constexpr int max_limit = 500;
//void search_ranking(vector<int>(&graph)[max_limit + 1], bool(&check)[max_limit + 1][max_limit + 1], bool(&visit)[max_limit + 1], int search, int n)
//{
//	visit[search] = true;
//	for (const auto& it : graph[search])
//	{
//		// check this number has already visited
//		if (visit[it] == true)
//			continue;
//
//		// now two nodes(search and search's next) know who are taller and smaller
//		check[search][it] = true;
//		check[it][search] = true;
//
//		// also another two nodes(n and search's next) know who are taller and smaller
//		if (search != n)
//		{
//			check[n][it] = true;
//			check[it][n] = true;
//		}
//
//		// iterates when search is top node(having no next nodes)
//		search_ranking(graph, check, visit, it, n);
//	}
//}
//
//int main()
//{
//	ios::sync_with_stdio(false);
//	cin.tie(NULL);
//
//	int n, m;
//	cin >> n >> m;
//
//	vector<int> graph[max_limit + 1];
//	{
//		int src, dest;
//		for (int i = 0; i < m; ++i)
//		{
//			cin >> src >> dest;
//			graph[src].push_back(dest);
//		}
//	}
//
//	bool check[max_limit + 1][max_limit + 1] = { false };
//	bool visit[max_limit + 1];
//	for (int i = 1; i <= n; ++i)
//	{
//		memset(visit, false, sizeof(visit));
//		check[i][i] = true;
//		search_ranking(graph, check, visit, i, i);
//	}
//
//	int num_known = 0;
//	for (int i = 1; i <= n; ++i)
//	{
//		bool can_known = true;
//		for (int j = 1; j <= n; ++j)
//		{
//			if (check[i][j] == false)
//			{
//				can_known = false;
//				break;
//			}
//		}
//
//		if (can_known)
//			num_known++;
//	}
//	cout << num_known << "\n";
//	return 0;
//}