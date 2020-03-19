//#include <iostream>
//#include <algorithm>
//#include <utility>
//#include <cstring>
//using namespace std;
//
//typedef pair<int, int> coord;
//constexpr coord dir[4] = { {0,1},{1,0},{0,-1}, {-1,0} };
//constexpr int max_defined = 8;
//
//
//enum direction
//{
//	east, south, west, north
//};
//
//struct office
//{
//	int row, col;
//	int data[max_defined][max_defined];
//};
//
//static int answer;
//void dfs(office(&map), bool(&visit)[max_defined][max_defined][4], coord(&cameras)[max_defined], size_t num_camera, int count)
//{
//	static direction angles[8] = { (direction)-1,(direction)-1,(direction)-1,(direction)-1,(direction)-1,(direction)-1,(direction)-1,(direction)-1 };
//	static size_t num_angles = 0;
//	if (count == num_camera)
//	{
//		office simulation;
//		memcpy(simulation.data, map.data, sizeof(simulation.data));
//		for (int i = 0; i < num_angles; ++i)
//		{
//			auto curr = cameras[i];
//			coord next;
//			for (int j = 0; j < 4; ++j)
//			{
//				if (visit[curr.first][curr.second][j])
//				{
//					int next_angle = (j + angles[i]) % 4;
//					next.first = curr.first + dir[next_angle].first;
//					next.second = curr.second + dir[next_angle].second;
//					while (true)
//					{
//						if (simulation.data[next.first][next.second] == 6)
//							break;
//						
//						if (next.first < 0 || next.first >= map.row || next.second < 0 || next.second >= map.col)
//							break;
//
//						if (simulation.data[next.first][next.second] == 0)
//							simulation.data[next.first][next.second] = -1;
//
//						next.first += dir[next_angle].first;
//						next.second += dir[next_angle].second;
//					}
//				}
//			}
//		}
//
//		int num_blind_spot = 0;
//		for (int i = 0; i < map.row; ++i)
//			for (int j = 0; j < map.col; ++j)
//				if (simulation.data[i][j] == 0)
//					num_blind_spot += 1;
//		if (answer > num_blind_spot)
//			answer = num_blind_spot;
//		return;
//	}
//
//	for (int i = 0; i < 4; ++i)
//	{
//		angles[num_angles++] = (direction)i;
//		dfs(map, visit, cameras, num_camera, count + 1);
//		angles[num_angles--] = (direction)0;
//	}
//}
//int main()
//{
//	ios::sync_with_stdio(false);
//	cin.tie(NULL);
//	
//	office map;
//
//	coord cameras[max_defined];
//	size_t num_camera = 0;
//
//	bool visit[max_defined][max_defined][4] = { false };
//
//
//	cin >> map.row >> map.col;
//	for (int i = 0; i < map.row; ++i)
//	{
//		for (int j = 0; j < map.col; ++j)
//		{
//			cin >> map.data[i][j];
//			if (1 <= map.data[i][j] && map.data[i][j] <= 5)
//				cameras[num_camera++] = { i,j };
//
//			switch (map.data[i][j])
//			{
//			case 1:
//				visit[i][j][east] = true;
//				break;
//			case 2:
//				visit[i][j][east] = true;
//				visit[i][j][west] = true;
//				break;
//			case 3:
//				visit[i][j][east] = true;
//				visit[i][j][north] = true;
//				break;
//			case 4:
//				visit[i][j][east] = true;
//				visit[i][j][west] = true;
//				visit[i][j][north] = true;
//				break;
//			case 5:
//				visit[i][j][east] = true;
//				visit[i][j][south] = true;
//				visit[i][j][west] = true;
//				visit[i][j][north] = true;
//			}
//		}
//	}
//
//	answer = map.row * map.col;
//	dfs(map, visit, cameras, num_camera, 0);
//	cout << answer << "\n";
//}