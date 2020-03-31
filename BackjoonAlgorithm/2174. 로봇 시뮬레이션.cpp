//#include <iostream>
//#include <utility>
//using namespace std;
//
//#ifdef _DEBUG
//#include "Utility.h"
//#endif // _DEBUG
//
//
//typedef pair<int, int> coord;
//enum direction
//{
//	east, south, west, north
//};
//constexpr int max_limit = 100;
//constexpr coord dir[4] = { {0,1},{1,0},{0,-1},{-1,0} };
//
//void print_map(int(&map)[max_limit + 2][max_limit + 2], int a, int b)
//{
//	for (int i = 0; i <= b + 1; ++i)
//	{
//		for (int j = 0; j <= a + 1; ++j)
//		{
//			cout.width(2);
//			cout << map[i][j];
//		}cout << "\n";
//	}cout << "\n";
//}
//
//int main()
//{
//	ios::sync_with_stdio(false);
//	cin.tie(NULL);
//
//	int a, b, n, m;
//	cin >> a >> b >> n >> m;
//
//	constexpr int map_wall = -1;
//	constexpr int map_empty = 0;
//	int map[max_limit + 2][max_limit + 2];
//	for (int i = 0; i <= b + 1; ++i)
//	{
//		for (int j = 0; j <= a + 1; ++j)
//		{
//			if (i == 0 || i == b + 1 || j == 0 || j == a + 1)
//				map[i][j] = map_wall;
//			else
//				map[i][j] = map_empty;
//		}
//	}
//
//
//	coord robots[max_limit + 1];
//	direction robo_dir[max_limit + 1] = { east };
//	{
//		for (int i = 1; i <= n; ++i)
//		{
//			int c, r;
//			char d;
//			cin >> c >> r >> d;
//
//			robots[i] = { b - r + 1, c };
//			switch (d)
//			{
//			case 'E':
//				robo_dir[i] = east;
//				break;
//			case 'S':
//				robo_dir[i] = south;
//				break;
//			case 'W':
//				robo_dir[i] = west;
//				break;
//			case 'N':
//				robo_dir[i] = north;
//				break;
//			}
//			map[robots[i].first][robots[i].second] = i;
//		}
//#ifdef _DEBUG
//		print_map(map, a, b);
//#endif // _DEBUG
//	}
//
//	{
//		int id, iter;
//		char cmd;
//		for (int i = 0; i < m; ++i)
//		{
//			cin >> id >> cmd >> iter;
//
//			switch (cmd)
//			{
//			case 'L':
//				robo_dir[id] = (direction)((robo_dir[id] + 4 - (iter % 4)) % 4);
//				break;
//			case 'R':
//				robo_dir[id] = (direction)((robo_dir[id] + iter) % 4);
//				break;
//			case 'F':
//				coord simul = robots[id];
//				map[simul.first][simul.second] = map_empty;
//				for (int j = 0; j < iter; ++j)
//				{
//					simul.first += dir[robo_dir[id]].first;
//					simul.second += dir[robo_dir[id]].second;
//
//					if (map[simul.first][simul.second] != map_empty)
//					{
//						if (map[simul.first][simul.second] == map_wall)
//						{
//#ifdef _DEBUG
//							print_map(map, a, b);
//#endif // _DEBUG
//							cout << "Robot " << id << " crashes into the wall";
//						}
//						else if (map[simul.first][simul.second] > 0)
//						{
//#ifdef _DEBUG
//							print_map(map, a, b);
//#endif // _DEBUG
//							cout << "Robot " << id << " crashes into robot " << map[simul.first][simul.second];
//						}
//						return 0;
//					}
//				}
//				robots[id] = simul;
//				map[simul.first][simul.second] = id;
//				break;
//			}
//		}
//	}
//	cout << "OK\n";
//	return 0;
//}
