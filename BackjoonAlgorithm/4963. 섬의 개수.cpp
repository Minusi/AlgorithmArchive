//#include <iostream>
//#include <stack>
//#include <utility>
//#include <cmath>
//using namespace std;
//
//#ifdef DEBUG
//#include "Utility.h"
//#endif // DEBUG
//
//
//typedef pair<int, int> coord;
//int main()
//{
//	ios::sync_with_stdio(false);
//	cin.tie(NULL);
//
//	int map[50][50];
//	constexpr int MAP_LAND = 1;
//	constexpr int MAP_SEA = 0;
//	// east, southeast, south, southwest, west, northwest, north, northeast in order
//	constexpr coord DIRECTION[8] = { {0,1}, {1,1}, {1,0}, {1,-1}, {0,-1}, {-1,-1}, {-1,0}, {-1,1} };
//
//	int w, h;
//	while (true)
//	{
//		cin >> w >> h;
//		// break condition
//		if (w == 0 && h == 0)
//			break;
//
//		// initialize from input data
//		for (int i = 0; i < h; ++i)
//			for (int j = 0; j < w; ++j)
//				cin >> map[i][j];
//
//		stack<coord> stack;
//		// landIndex decrease when new island is found to identify each island
//		int landIndex = 0;
//		int visit[50][50] = { 0 };
//		for (int r = 0; r < h; ++r)
//		{
//			for (int c = 0; c < w; ++c)
//			{
//				// pass if position is sea
//				if (map[r][c] == MAP_SEA)	continue;
//				// pass if position have already visited
//				if (visit[r][c] != 0)	continue;
//
//				landIndex -= 1;
//				stack.emplace(r, c);
//				visit[r][c] = landIndex;
//				while (stack.empty() == false)
//				{
//					coord curr = stack.top();
//					stack.pop();
//
//					coord next;
//					for (int i = 0; i < 8; ++i)
//					{
//						next = { curr.first + DIRECTION[i].first, curr.second + DIRECTION[i].second };
//						// check out of range
//						if (next.first < 0 || next.first >= h || next.second < 0 || next.second >= w)
//							continue;
//
//						// check next position is sea
//						if (map[next.first][next.second] == MAP_SEA)
//							continue;
//
//						// check already visited
//						if (visit[next.first][next.second] != 0)
//							continue;
//
//						//cout << "next(" << next.first << "," << next.second << ")\n";
//						//cout << "landindex : " << landIndex << "\n";
//						// push to stack
//						visit[next.first][next.second] = landIndex;
//						stack.emplace(next.first, next.second);
//					}
//				}
//			}
//		}
//		cout << abs(landIndex) << "\n";
//
//	}// loop for w,h input 
//	return 0;
//}