//#include <iostream>
//#include <cmath>
//#include <queue>
//#include <vector>
//#include <utility>
//using namespace std;
//
//#ifdef _DEBUG
//#include "Utility.h"
//#endif // _DEBUG
//
//
//
//typedef pair<int, int> mcoord;
//constexpr int max_limit = 100;
//int main()
//{
//	ios::sync_with_stdio(false);
//	cin.tie(NULL);
//
//	int t;
//	cin >> t;
//
//	vector<int> graph[max_limit + 2];
//	mcoord points[max_limit + 2];
//
//	queue<int> q;
//	bool visit[max_limit + 2];
//	while (t--)
//	{
//		for (int i = 0; i < max_limit + 2; ++i)
//		{
//			graph[i].clear();
//			visit[i] = false;
//		}
//	
//
//		int n;
//		cin >> n;
//
//		int x, y;
//		for (int i = 0; i < n + 2; ++i)
//		{
//			cin >> x >> y;
//			points[i] = { x,y };
//			for (int j = i - 1; j >= 0; --j)
//			{
//				int manhatten = abs(points[i].first - points[j].first) + abs(points[i].second - points[j].second);
//				if (manhatten <= 1000)
//				{
//					//cout << i << " and " << j << " are connected\n";
//					graph[i].push_back(j);
//					graph[j].push_back(i);
//				}
//			}
//		}
//
//		q.push(0);
//		visit[0] = true;
//
//		bool loop = true;
//		while (q.empty() == false && loop)
//		{
//			auto curr = q.front();
//			q.pop();
//
//			int next;
//			for (int s = 0; s < graph[curr].size(); ++s)
//			{
//				next = graph[curr][s];
//				
//				// check already visited
//				if (visit[next] == true)
//					continue;
//
//				// check end point
//				if (next == n + 1)
//				{
//					cout << "happy\n";
//					loop = false;
//					break;
//				}
//
//				visit[next] = true;
//				q.push(next);
//			}
//		}
//
//		if (loop == true)
//			cout << "sad\n";
//	}
//
//
//	return 0;
//}