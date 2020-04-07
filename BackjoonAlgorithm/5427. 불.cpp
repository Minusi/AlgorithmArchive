//#include <iostream>
//#include <utility>
//#include <queue>
//#include <cstring>
//using namespace std;
//
//#ifdef _DEBUG
//#include "Utility.h"
//#endif // _DEBUG
//
//
//typedef pair<int, int> coord;
//constexpr coord dir[4] = { {0,1}, {1,0},{0,-1},{-1,0} };
//
//constexpr int max_range = 1000;
//
//constexpr char mempty = '.';
//constexpr char mwall = '#';
//constexpr char mhuman = '@';
//constexpr char mfire = '*';
//
//constexpr int vfire = 1;
//constexpr int vhuman = -1;
//int main()
//{
//	ios::sync_with_stdio(false);
//	cin.tie(NULL);
//
//	int t;
//	cin >> t;
//
//	char map[max_range][max_range + 1];
//	queue<coord> qf;
//	queue<coord> qh;
//	int visit[max_range][max_range];
//	while (t--)
//	{
//		memset(visit, 0, sizeof(visit));
//
//		int h, w;
//		cin >> w >> h;
//		for (int i = 0; i < h; ++i)
//		{
//			cin >> map[i];
//			for (int j = 0; j < w; ++j)
//			{
//				if (map[i][j] == mfire)
//				{
//					qf.emplace(i, j);
//					visit[i][j] = vfire;
//				}
//				else if (map[i][j] == mhuman)
//				{
//					qh.emplace(i, j);
//					visit[i][j] = vhuman;
//				}
//			}
//		}
//
//		bool loop = true;
//		int step = 0;
//		while (loop)
//		{
//			step++;
//			coord curr, next;
//				
//			// bfs for fires
//			{
//				size_t qfsize = qf.size();
//				for (int fs = 0; fs < qfsize; ++fs)
//				{
//					curr = qf.front();
//					qf.pop();
//
//					for (int d = 0; d < 4; ++d)
//					{
//						next = { curr.first + dir[d].first, curr.second + dir[d].second };
//						// check out of range
//						if (next.first < 0 || next.first >= h || next.second < 0 || next.second >= w)
//							continue;
//
//						// check already have visited
//						if (visit[next.first][next.second] == vfire)
//							continue;
//
//						// ignore if next pos is wall
//						if (map[next.first][next.second] == mwall)
//							continue;
//
//						qf.emplace(next.first, next.second);
//						visit[next.first][next.second] = vfire;
//					}
//				}
//			}
//
//			// bfs for human
//			{
//				// check impossible
//				size_t qhsize = qh.size();
//				if (qhsize == 0)
//				{
//					cout << "IMPOSSIBLE\n";
//					loop = false;
//				}
//
//				for (int hs = 0; hs < qhsize && loop; ++hs)
//				{
//					curr = qh.front();
//					qh.pop();
//						
//					for (int d = 0; d < 4; ++d)
//					{
//						next = { curr.first + dir[d].first, curr.second + dir[d].second };
//						// check out of range
//						if (next.first < 0 || next.first >= h || next.second < 0 || next.second >= w)
//						{
//							cout << step << "\n";
//							loop = false;
//							break;
//						}
//
//						// check already have visted
//						if (visit[next.first][next.second] != 0)
//							continue;
//
//						if (map[next.first][next.second] == mwall)
//							continue;
//
//						qh.emplace(next.first, next.second);
//						visit[next.first][next.second] = vhuman;
//					}
//				}
//			}
//		} // end of while loop
//
//		while (qf.empty() == false)
//			qf.pop();
//		while (qh.empty() == false)
//			qh.pop();
//	} // end of t loop
//
//	return 0;
//}