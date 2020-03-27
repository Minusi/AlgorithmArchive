//#include <iostream>
//using namespace std;
//
//#ifdef _DEBUG
//#include "Utility.h"
//#endif // _DEBUG
//
//
//
//constexpr int max_limit = 500;
//int main()
//{
//	ios::sync_with_stdio(false);
//	cin.tie(NULL);
//
//	int n, m;
//	unsigned int B;
//	cin >> n >> m >> B;
//
//	int map[max_limit][max_limit] = { 0 };
//	int min_height = 256, max_height = 0;
//	for (int i = 0; i < n; ++i)
//	{
//		for (int j = 0; j < m; ++j)
//		{
//			cin >> map[i][j];
//			if (min_height > map[i][j])
//				min_height = map[i][j];
//			if (max_height < map[i][j])
//				max_height = map[i][j];
//		}
//	}
//
//	int min_elapsed_time = 987654321;
//	int height = -1;
//	for (int h = min_height; h <= max_height; ++h)
//	{
//		int total_blocks = B;
//		int elapsed_time = 0;
//		for (int i = 0; i < n; ++i)
//		{
//			for (int j = 0; j < m; ++j)
//			{
//				if (map[i][j] >= h)
//					elapsed_time += 2 * (map[i][j] - h);
//				else
//					elapsed_time += h - map[i][j];
//
//				total_blocks += map[i][j] - h;
//			}
//		}
//
//		if (total_blocks < 0)
//			continue;
//
//		if (min_elapsed_time >= elapsed_time)
//		{
//			min_elapsed_time = elapsed_time;
//			height = h;
//		}
//	}
//
//	cout << min_elapsed_time << " " << height << "\n";
//	return 0;
//}