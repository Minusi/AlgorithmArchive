//#include <iostream>
//#include <vector>
//#include <queue>
//#include <algorithm>
//using namespace std;
//
//#ifdef DEBUG
//#include "Utility.h"
//#endif // DEBUG
//
//
//constexpr int maxVert = 101;
//constexpr int inf = 987654321;
//
//int main()
//{
//	ios::sync_with_stdio(false);
//	cin.tie(NULL);
//
//	int n, m;
//	cin >> n >> m;
//
//	// initialize from input
//	vector<int> graph[maxVert];
//	for (int i = 0; i < m; ++i)
//	{
//		int src, dest;
//		cin >> src >> dest;
//		
//		graph[src].push_back(dest);
//		graph[dest].push_back(src);
//	}
//
//
//
//	// sum of kevin-bacon number for other people
//	int minValue = inf;
//	// host having minValue about kevin-bacon number
//	int number = 0;
//
//	queue<int> queue;
//	bool visit[maxVert];
//	int relations[maxVert];
//	for (int i = 1; i <= n; ++i)
//	{
//		fill(visit + 0, visit + maxVert, false);
//		fill(relations + 0, relations + maxVert, inf);
//
//		queue.push(i);
//		visit[i] = true;
//
//		int cnt = 0;
//		while (queue.empty() == false)
//		{
//			cnt += 1;
//
//			int qsize = queue.size();
//			for (int s = 0; s < qsize; ++s)
//			{
//				int curr = queue.front();
//				queue.pop();
//
//				for (int j = 0; j < graph[curr].size(); ++j)
//				{
//					int next = graph[curr][j];
//
//					// check already visit
//					if (visit[next] == true)
//						continue;
//
//					relations[next] = relations[next] < cnt ? relations[next] : cnt;
//					queue.push(next);
//					visit[next] = true;
//				}
//			}
//		}
//
//		// caculates carry-baycon number
//		int sum = 0;
//		for (const auto& it : relations)
//			if(it != inf)
//				sum += it;
//
//		if (sum < minValue)
//		{
//			minValue = sum;
//			number = i;
//		}
//	}
//
//	cout << number << "\n";
//	return 0;
//}