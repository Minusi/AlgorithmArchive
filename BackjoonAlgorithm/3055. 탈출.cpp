//#include <iostream>
//#include <algorithm>
//#include <utility>
//#include <queue>
//#include <vector>
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
//	int r, c;
//	cin >> r >> c;
//	
//	char map[50][50];
//	constexpr coord dir[4] = { {0,1}, {1,0}, {0,-1}, {-1,0} };
//
//	coord hh_start, hh_end;
//	vector<coord> wt_starts;
//	constexpr char map_ground = '.';
//	constexpr char map_water = '*';
//	constexpr char map_stone = 'X';
//	constexpr char map_cave = 'D';
//	constexpr char map_hedgehog = 'S';
//	for (int i = 0; i < r; ++i)
//	{
//		for (int j = 0; j < c; ++j)
//		{
//			cin >> map[i][j];
//			
//			if (map[i][j] == map_hedgehog)
//				hh_start = { i,j };
//			else if (map[i][j] == map_cave)
//				hh_end = { i,j };
//			else if (map[i][j] == map_water)
//				wt_starts.emplace_back(i, j);
//		}
//	}
//	
//
//	queue<coord> q;
//	int visit[50][50] = { 0 };
//	constexpr int visit_start = 99;
//	int step_index = 0;
//
//	// hedgehog step_index must be positive
//	q.emplace(hh_start.first, hh_start.second);
//	visit[hh_start.first][hh_start.second] = visit_start;
//
//	// water step_index must be negative
//	for (const auto& it : wt_starts)
//	{
//		q.emplace(it.first, it.second);
//		visit[it.first][it.second] = -visit_start;
//	}
//	// hedgehog moves first for more chance to move
//	while (q.empty() == false)
//	{
//		step_index += 1;
//		size_t qsize = q.size();
//		for (int s = 0; s < qsize; ++s)
//		{
//			coord curr = q.front();
//			q.pop();
//
//			// check if is water or hedgehog
//			bool isWater = visit[curr.first][curr.second] < 0? true : false;
//
//			coord next;
//			for (int d = 0; d < 4; ++d)
//			{
//				next = { curr.first + dir[d].first, curr.second + dir[d].second };
//
//				// check out of range
//				if (next.first < 0 || next.first >= r || next.second < 0 || next.second >= c)
//					continue;
//
//				// check already have visited
//				if (isWater == true && visit[next.first][next.second] < 0)
//					continue;
//				else if(isWater == false && visit[next.first][next.second] != 0)
//					continue;
//				
//				// check if next area is stone 
//				if (map[next.first][next.second] == map_stone)
//					continue;
//				
//				// check if next area is cave
//				if (map[next.first][next.second] == map_cave)
//				{
//					if (isWater)
//						continue;
//					else
//						goto ENDLOOP;
//				}
//
//				// set different index whether area is water or hedgehog
//				visit[next.first][next.second] = isWater ? -step_index : step_index;
//				q.emplace(next.first, next.second);
//			}
//		}
//
//#ifdef _DEBUG
//		for (int i = 0; i < r; ++i)
//		{
//			for (int j = 0; j < c; ++j)
//			{
//				cout.width(4);
//				cout << visit[i][j];
//			}
//			cout << "\n";
//		}
//		cout << "\n\n";
//#endif // _DEBUG
//
//	}
//	step_index = 0;
//
//ENDLOOP:
//	if (step_index)
//		cout << step_index << "\n";
//	else
//		cout << "KAKTUS\n" << "\n";
//
//	return 0;
//}