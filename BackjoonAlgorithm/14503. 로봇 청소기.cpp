//#include <iostream>
//#include <utility>
//using namespace std;
//
//#ifdef _DEBUG
//#include "Utility.h"
//#endif // _DEBUG
//
//
//// typedefs
//typedef pair<int, int> coord;
//
//static constexpr int map_empty = 0;
//static constexpr int map_wall = 1;
//// north | east | south | west in order
//static constexpr coord map_dir[4] = { {-1,0},{0,1}, {1,0}, {0,-1} };
//
//
//struct robot
//{
//	coord pos;
//	int dir;
//};
//
//int operate_robot(robot& robo, int (&map)[50][50], int r, int c)
//{
//	int num_cleans = 0;
//	int visit[50][50] = { 0 };
//
//	while (true)
//	{
//		// rule 1 : cleanup if floor is visit
//		bool need_cleanup = true;
//		if (visit[robo.pos.first][robo.pos.second] == 0 && need_cleanup)
//		{
//			num_cleans++;
//			visit[robo.pos.first][robo.pos.second] = num_cleans;
//		}
//
//		need_cleanup = false;
//		for (int i = 3; i >= 0; --i)
//		{
//			int next_dir = (robo.dir + i) % 4;
//			coord next = { robo.pos.first + map_dir[next_dir].first , robo.pos.second + map_dir[next_dir].second };
//
//			// trigger 2-a if satisfy condition
//			if (visit[next.first][next.second] == 0 && map[next.first][next.second] == map_empty)
//			{
//				robo.pos = { next.first, next.second };
//				robo.dir = next_dir;
//				need_cleanup = true;
//				break;
//			}
//		}
//
//		// go back to rule 1
//		if (need_cleanup)
//			continue;
//
//		int back_dir = (robo.dir + 2) % 4;
//		// trigger 2-c or 2-d based on condition
//		if (map[robo.pos.first + map_dir[back_dir].first][robo.pos.second + map_dir[back_dir].second] == map_wall)
//		{
//			break;
//		}
//		else
//		{
//			robo.pos.first += map_dir[back_dir].first;
//			robo.pos.second += map_dir[back_dir].second;
//		}
//	}
//	
//	return num_cleans;
//}
//
//int main()
//{
//	ios::sync_with_stdio(false);
//	cin.tie(NULL);
//
//	int n, m;
//	cin >> n >> m;
//
//	int r, c, d;
//	cin >> r >> c >> d;
//	
//	// map variables
//	int map[50][50];
//	for (int i = 0; i < n; ++i)
//		for (int j = 0; j < m; ++j)
//			cin >> map[i][j];
//
//	// robo variables
//	robot robo;
//	robo.pos = { r,c };
//	robo.dir = d;
//
//	int answer = operate_robot(robo, map, n, m);
//	cout << answer << "\n";
//	return 0;
//}