//#include <iostream>
//#include <algorithm>
//#include <queue>
//#include <utility>
//using namespace std;
//
//#ifdef _DEBUG
//#include "Utility.h"
//#endif // _DEBUG
//
//
//typedef pair<int, int> coord;
//int main()
//{
//	ios::sync_with_stdio(false);
//	cin.tie(NULL);
//
//	int n;
//	cin >> n;
//	
//	// answer variable
//	int max_area = 0;
//
//	
//	// map-related variables
//	int map[100][100];
//	int max_height = 1, min_height = 100;
//	constexpr coord dir[4] = { {0, 1}, {1,0}, {0,-1}, {-1,0} };
//	for (int i = 0; i < n; ++i)
//	{
//		for (int j = 0; j < n; ++j)
//		{
//			cin >> map[i][j];
//
//			max_height = max(max_height, map[i][j]);
//			min_height = min(min_height, map[i][j]);
//		}
//	}
//	
//	// bfs-related variables
//	queue<coord> queue;
//	int visit[100][100];
//	for (int h = min_height - 1; h < max_height; ++h)
//	{
//		// initialize visit flag to zero (change area_index after some ops)
//		fill(&visit[0][0], &visit[0][0] + sizeof(visit) / sizeof(visit[0][0]), 0);
//		int area_index = 0;
//
//		for (int r = 0; r < n; ++r)
//		{
//			for (int c = 0; c < n; ++c)
//			{
//				if (map[r][c] <= h || visit[r][c] > 0)	continue;
//
//				area_index += 1;
//
//				queue.emplace(r, c);
//				visit[r][c] = area_index;
//				while (queue.empty() == false)
//				{
//					coord curr = queue.front();
//					queue.pop();
//
//					coord next;
//					for (int i = 0; i < 4; ++i)
//					{
//						next = { curr.first + dir[i].first, curr.second + dir[i].second };
//						
//						// check out of range
//						if (next.first < 0 || next.first >= n || next.second < 0 || next.second >= n)
//							continue;
//
//						// check already have visited
//						if (visit[next.first][next.second] > 0)
//							continue;
//						
//						// pass if next area is not higher than h(water height)
//						if (map[next.first][next.second] <= h)
//							continue;
//
//						visit[next.first][next.second] = area_index;
//						queue.emplace(next.first, next.second);
//					}
//				}
//			}
//		}
//
//		// check and record num of areas
//		max_area = max(max_area, area_index);
//#ifdef _DEBUG
//		cout << "h : " << h << "\n";
//		for (int i = 0; i < n; ++i)
//		{
//			for (int j = 0; j < n; ++j)
//			{
//				cout.width(4);
//				cout << visit[i][j];
//			}
//			cout << "\n";
//		}
//		cout << "\n\n";
//#endif // _DEBUG
//	}
//
//	cout << max_area << "\n";
//
//	return 0;
//}