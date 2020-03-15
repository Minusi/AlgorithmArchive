//#include <iostream>
//#include <queue>
//#include <cstring>
//#include <utility>
//using namespace std;
//
//#ifdef _DEBUG
//#include "Utility.h"
//#endif // _DEBUG
//
//
//
//void combination(int col, int comb_index, int& out1, int& out2, int& out3)
//{
//	int i, j, k;
//	int count = 0;
//	for (i = 0; i < col; ++i)
//		for (j = i + 1; j < col; ++j)
//			for (k = j + 1; k < col; ++k, ++count)
//				if (count == comb_index)
//					goto END;
//END:
//	out1 = i;
//	out2 = j;
//	out3 = k;
//}
//
//typedef pair<int, int> coord;
//int main()
//{
//	ios::sync_with_stdio(false);
//	cin.tie(NULL);
//
//	int n, m, d;
//	cin >> n >> m >> d;
//
//
//	char map[15][15];
//	char map_copy[15][15];
//	constexpr char map_empty = '0';
//	constexpr char map_enemy = '1';
//	// west, north, east
//	coord dir_prior[3] = { {0,-1}, {-1,0}, {0,1} };
//	for (int i = 0; i < n; ++i)
//		for (int j = 0; j < m; ++j)
//			cin >> map[i][j];
//	
//
//	queue<coord> q;
//	bool visit[15][15];
//
//	int archers[3];
//	int max_kill = -1;
//	const int max_comb = (m * (m - 1) * (m - 2)) / 6;
//	for (int c = 0; c < max_comb; ++c)
//	{
//		memcpy(map_copy, map, sizeof(map));
//		combination(m, c, archers[0], archers[1], archers[2]);
//
//		int arc_row = n;
//		int num_kill = 0;
//		while (arc_row > 0)
//		{
//			coord enemys[3] = { {-1,-1}, {-1,-1}, {-1,-1} };
//			for (int a = 0; a < 3; ++a)
//			{
//				memset(visit, 0, sizeof(visit));
//				q.emplace(arc_row, archers[a]);
//
//				bool shoot = false;
//
//				int range = 0;
//				while (q.empty() == false)
//				{
//					size_t qsize = q.size();
//					range += 1;
//
//
//					for (int s = 0; s < qsize; ++s)
//					{
//						coord curr = q.front();
//						q.pop();
//
//						if (shoot == true)
//							continue;
//
//						coord next;
//						for (int i = 0; i < 3; ++i)
//						{
//							next = { curr.first + dir_prior[i].first, curr.second + dir_prior[i].second };
//
//							// check out of range
//							if (next.first < 0 || next.first >= arc_row || next.second < 0 || next.second >= m)
//								continue;
//
//							// check already have visited
//							if (visit[next.first][next.second])
//								continue;
//
//							// check range limitation
//							if (range > d)
//								continue;
//
//							// check find enemy
//							if (map_copy[next.first][next.second] == map_enemy)
//							{
//								enemys[a] = { next.first, next.second };
//								shoot = true;
//								break;
//							}
//
//							visit[next.first][next.second] = true;
//							q.emplace(next.first, next.second);
//						}
//					}
//				}
//
//				if (shoot)
//				{
//					bool other = true;
//					for (int i = a - 1; i >= 0; --i)
//					{
//						if (enemys[i] == enemys[a])
//						{
//							other = false;
//							break;
//						}
//					}
//
//					if (other)
//						num_kill += 1;
//				}
//			} // for(a = 0 ~ 3)
//
//			for (int i = 0; i < 3; ++i)
//				if (enemys[i].first != -1 && enemys[i].second != -1)
//					map_copy[enemys[i].first][enemys[i].second] = map_empty;
//
//			arc_row -= 1;
//		} // while(arc_row > 0)
//		if (max_kill < num_kill)
//			max_kill = num_kill;
//	}
//
//	cout << max_kill << "\n";
//	return 0;
//}