//
//
//
//
// 시간초과
//
//
//
//
//#include <iostream>
//#include <cmath>
//#include <cstring>
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
//struct single_union
//{
//	coord nations[2500];
//	int size = 0;
//	int population = 0;
//};
//
//int main()
//{
//	ios::sync_with_stdio(false);
//	cin.tie(NULL);
//
//	int n, lhs, rhs;
//	cin >> n >> lhs >> rhs;
//
//	int map[50][50];
//	constexpr coord dir[4] = { {0,1}, {1,0}, {0,-1}, {-1,0} };
//	for (int i = 0; i < n; ++i)
//		for (int j = 0; j < n; ++j)
//			cin >> map[i][j];
//
//	queue<coord> q;
//	int visit[50][50];
//
//	// all of unions list
//	single_union unions[2500];
//	int unions_size = 0;
//
//	bool move;
//	int num_move = -1;
//	do
//	{
//		// initialize variables
//		move = false;
//		num_move += 1;
//
//		int union_id = 1;
//		unions_size = 0;
//		memset(visit, 0, sizeof(visit));
//		memset(unions, 0, sizeof(unions));
//
//		
//		// search and bfs
//		for (int r = 0; r < n; ++r)
//		{
//			for (int c = 0; c < n; ++c)
//			{
//				if (visit[r][c] > 0)
//					continue;
//
//				q.emplace(r, c);
//				visit[r][c] = union_id++;
//
//				single_union& new_union = unions[unions_size++];
//				new_union.nations[new_union.size++] = { r, c };
//				new_union.population += map[r][c];
//
//				while (q.empty() == false)
//				{
//					auto curr = q.front();
//					q.pop();
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
//						// check board opening condition
//						int pop_diff = abs(map[curr.first][curr.second] - map[next.first][next.second]);
//						if (pop_diff < lhs || pop_diff > rhs)
//							continue;
//
//						if (move == false)
//							move = true;
//
//						q.emplace(next.first, next.second);
//						visit[next.first][next.second] = union_id;
//
//						new_union.nations[new_union.size++] = { next.first, next.second };
//						new_union.population += map[next.first][next.second];
//					}
//				} // end of bfs loop
//			}
//		} // end of r/c loop
//
//		if (move == true)
//		{
//			// distribute union populations to all of consistants
//			for (int i = 0; i < unions_size; ++i)
//			{
//				int nation_pop = unions[i].population / unions[i].size;
//				for (int j = 0; j < unions[i].size; ++j)
//				{
//					int row = unions[i].nations[j].first;
//					int col = unions[i].nations[j].second;
//					map[row][col] = nation_pop;
//				}
//			}
//		}
//
//#ifdef _DEBUG
//		for (int i = 0; i < n; ++i)
//		{
//			for (int j = 0; j < n; ++j)
//			{
//				cout.width(4);
//				cout << map[i][j];
//			}cout << "\n";
//		}cout << "\n";
//#endif // _DEBUG
//
//	} while (move);
//
//	cout << num_move << "\n";
//	return 0;
//}