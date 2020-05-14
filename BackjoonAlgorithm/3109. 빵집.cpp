//#include <iostream>
//#include <stack>
//#include <utility>
//using namespace std;
//
//#ifdef _DEBUG
//#include "Utility.h"
//#endif // _DEBUG
//
//
//
//typedef pair<int, int> coord;
//static constexpr coord dir[3] = { {-1,1}, {0,1}, {1,1} };
//
//int answer = 0;
//int r, c;
//bool backtracking(char(&map)[10000][501], bool(&visit)[10000][501], coord curr)
//{
//	if (curr.second == c - 1)
//	{
//		answer++;
//		return true;
//	}
//
//	coord next;
//	for (int d = 0; d < 3; ++d)
//	{
//		next = { curr.first + dir[d].first, curr.second + dir[d].second };
//		if (next.first < 0 || next.first >= r)
//			continue;
//
//		if (visit[next.first][next.second])
//			continue;
//
//		if (map[next.first][next.second] == 'x')
//			continue;
//
//		visit[next.first][next.second] = true;
//		if (backtracking(map, visit, next) == true)
//			return true;
//	}
//	return false;
//}
//int main()
//{
//	ios::sync_with_stdio(false);
//	cin.tie(NULL);
//
//	cin >> r >> c;
//
//	char map[10000][501];
//	for (int i = 0; i < r; ++i)
//		cin >> map[i];
//			
//	bool visit[10000][501] = { false };
//	for (int i = 0; i < r; ++i)
//	{
//		visit[i][0] = true;
//		backtracking(map, visit, { i,0 });
//	}
//	
//	cout << answer << "\n";
//	return 0;
//}