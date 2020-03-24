//#include <iostream>
//#include <utility>
//using namespace std;
//
//#ifdef _DEBUG
//#include "Utility.h"
//#endif // _DEBUG
//
//
//constexpr int limit = 5;
//constexpr int max_move = 5;
//typedef pair<int, int> coord;
//
//static size_t num_cases = 0;
//void backtracking(int(&map)[limit][limit], coord curr, int count = 0)
//{
//	static bool nums[1000000] = { false };
//	static int number = 0;
//
//	static coord dir[4] = { {0,1}, {1,0}, {0,-1}, {-1,0} };
//	if (count == max_move)
//	{
//		if (nums[number] == false)
//		{
//			nums[number] = true;
//			num_cases++;
//		}
//		return;
//	}
//
//
//	if (count == 0)
//		number = map[curr.first][curr.second];
//
//	coord next;
//	for (int d = 0; d < 4; ++d)
//	{
//		next = { curr.first + dir[d].first, curr.second + dir[d].second };
//		if (next.first < 0 || next.first >= limit || next.second < 0 || next.second >= limit)
//			continue;
//
//
//		number *= 10;
//		number += map[next.first][next.second];
//		backtracking(map, next, count + 1);
//		number -= map[next.first][next.second];
//		number /= 10;
//	}
//}
//
//int main()
//{
//	ios::sync_with_stdio(false);
//	cin.tie(NULL);
//
//	int map[limit][limit];
//	for (int i = 0; i < limit; ++i)
//		for (int j = 0; j < limit; ++j)
//			cin >> map[i][j];
//
//	for (int i = 0; i < limit; ++i)
//		for (int j = 0; j < limit; ++j)
//			backtracking(map, { i,j }, 0);
//
//	cout << num_cases << "\n";
//	return 0;
//}