//#include <iostream>
//#include <queue>
//#include <algorithm>
//#include <utility>
//using namespace std;
//
//#ifdef _DEBUG
//#include "Utility.h"
//#endif // _DEBUG
//
//
//
//typedef pair<int, int> coord;
//int main()
//{
//	ios::sync_with_stdio(false);
//	cin.tie(NULL);
//
//	// answer
//	int max_dist = 0;
//
//	int r, c;
//	cin >> r >> c;
//
//	char map[51][51];
//	constexpr coord dir[4] = { {0,1},{1,0},{0,-1},{-1,0} };
//	constexpr char map_land = 'L';
//	constexpr char map_water = 'W';
//	for (int i = 0; i < r; ++i)
//		cin >> map[i];
//
//	queue<coord> q;
//	int visit[50][50];
//	for (int i = 0; i < r; ++i)
//	{
//		for (int j = 0; j < c; ++j)
//		{
//			if (map[i][j] != map_land)
//				continue;
//
//			int local_dist = 0;
//			fill(&visit[0][0], &visit[0][0] + sizeof(visit) / sizeof(visit[0][0]), 0);
//
//			q.emplace(i, j);
//			visit[i][j] = 999;
//			while (q.empty() == false)
//			{
//				size_t qsize = q.size();
//				local_dist += 1;
//				for (int s = 0; s < qsize; ++s)
//				{
//					coord curr = q.front();
//					q.pop();
//
//					coord next;
//					for (int d = 0; d < 4; ++d)
//					{
//						next = { curr.first + dir[d].first, curr.second + dir[d].second };
//
//						// check out of range
//						if (next.first < 0 || next.first >= r || next.second < 0 || next.second >= c)
//							continue;
//
//						// check already have visited
//						if (visit[next.first][next.second] != 0)
//							continue;
//
//						// check next area is water
//						if (map[next.first][next.second] == map_water)
//							continue;
//						visit[next.first][next.second] = local_dist;
//						q.emplace(next.first, next.second);
//					}
//				}
//			}
//			// end of bfs loop must failed so decreases 1
//			local_dist -= 1;
//			max_dist = max(max_dist, local_dist);
//		}
//	}
//	cout << max_dist << "\n";
//	return 0;
//}