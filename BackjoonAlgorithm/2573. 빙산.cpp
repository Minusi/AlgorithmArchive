//#include <iostream>
//#include <queue>
//#include <utility>
//#include <cstring>
//using namespace std;
//
//#ifdef _DEBUG
//#include "Utility.h"
//#endif // _DEBUG
//
//
//typedef pair<int, int> coord;
//constexpr coord dir[4] = { {0,1}, {1,0}, {0,-1}, {-1,0} };
//constexpr int max_range = 300;
//constexpr int msea = 0;
//constexpr int idincrease = 100;
//int main()
//{
//	ios::sync_with_stdio(false);
//	cin.tie(NULL);
//
//	int n, m;
//	cin >> n >> m;
//
//	int map[max_range][max_range];
//	for (int i = 0; i < n; ++i)
//		for (int j = 0; j < m; ++j)
//			cin >> map[i][j];
//
//	queue<coord> q;
//	int visit[max_range][max_range] = { 0 };
//
//
//	int years = 0;
//	while (true)
//	{
//		memset(visit, 0, sizeof(visit));
//
//		int groundid = 0;
//		bool melt_all = true;
//		for (int i = 0; i < n; ++i)
//		{
//			for (int j = 0; j < m; ++j)
//			{
//				if (visit[i][j] > 0 || map[i][j] == msea)
//					continue;
//
//				if (melt_all == true)
//					melt_all = false;
//
//				groundid += idincrease;
//
//				q.emplace(i, j);
//				visit[i][j] = groundid;
//				while (q.empty() == false)
//				{
//					auto curr = q.front();
//					q.pop();
//
//					coord next;
//					for (int d = 0; d < 4; ++d)
//					{
//						next = { curr.first + dir[d].first, curr.second + dir[d].second };
//						if (visit[next.first][next.second] > 0)
//							continue;
//
//						if (map[next.first][next.second] == msea)
//						{
//							visit[curr.first][curr.second]++;
//							continue;
//						}
//
//						q.emplace(next.first, next.second);
//						visit[next.first][next.second] = groundid;
//					}
//				}
//			}
//		}
//
//		if (melt_all == true)
//		{
//			years = 0;
//			break;
//		}
//
//		if (groundid / idincrease >= 2)
//			break;
//
//		years++;
//		for (int i = 0; i < n; ++i)
//			for (int j = 0; j < m; ++j)
//				map[i][j] = map[i][j] >= (visit[i][j] % idincrease) ? map[i][j] - (visit[i][j] % idincrease) : 0;
//	}
//
//	cout << years << "\n";
//	return 0;
//}