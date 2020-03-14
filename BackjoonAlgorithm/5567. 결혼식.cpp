//#include <iostream>
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
//	cin >> n >> m;
//
//	vector<int> graph[501];
//	for (int i = 0; i < m; ++i)
//	{
//		int src, dest;
//		cin >> src >> dest;
//		graph[src].push_back(dest);
//		graph[dest].push_back(src);
//	}
//	
//	bool check[501] = { false };
//	check[1] = true;
//	int count = 0;
//	for (const auto& it : graph[1])
//	{
//		if (check[it] == false)
//		{
//			check[it] = true;
//			count++;
//		}
//		for (const auto& jt : graph[it])
//		{
//			if (check[jt] == false)
//			{
//				check[jt] = true;
//				count++;
//			}
//		}
//	}
//	
//	cout << count << "\n";
//	return 0;
//}