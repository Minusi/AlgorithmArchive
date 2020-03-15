//#include <iostream>
//#include <utility>
//#include <queue>
//#include <stack>
//#include <algorithm>
//using namespace std;
//
//#ifdef _DEBUG
//#include "Utility.h"
//#endif // _DEBUG
//
//
//typedef pair<int, int> coord;
//typedef pair<coord, coord> pipe;
//int main()
//{
//	ios::sync_with_stdio(false);
//	cin.tie(NULL);
//
//	int N;
//	cin >> N;
//
//	unsigned char map[18][18];
//	constexpr unsigned char map_tile = '0';
//	constexpr unsigned char map_wall = '1';
//	for (int i = 1; i <= N; ++i)
//		for (int j = 1; j <= N; ++j)
//			cin >> map[i][j];
//
//	queue<pipe> q;
//	q.push({ {1,1},{1,2} });
//	int count = 0;
//	while (q.empty() == false)
//	{
//		pipe curr = q.front();
//		q.pop();
//
//		coord endpipe = curr.second;
//		// check pipe moves end
//		if (curr.second.first == N && curr.second.second == N)
//		{
//			count++;
//			continue;
//		}
//
//		unsigned char dr = curr.second.first - curr.first.first;
//		unsigned char dc = curr.second.second - curr.first.second;
//		// pipe will move south
//		if (dr == 1)
//		{
//			if (map[endpipe.first + 1][endpipe.second] == map_tile 
//				&& curr.second.first < N)
//				q.push({ {endpipe.first,endpipe.second}, {endpipe.first + 1,endpipe.second } });
//		}
//
//		// pipe will move east
//		if (dc == 1)
//		{
//			if (map[endpipe.first][endpipe.second + 1] == map_tile
//				&& endpipe.second < N)
//				q.push({ {endpipe.first, endpipe.second} , {endpipe.first, endpipe.second + 1} });
//
//
//		}
//
//		// pipe will move southeast
//		if (map[endpipe.first + 1][endpipe.second] == map_wall
//			|| map[endpipe.first][endpipe.second + 1] == map_wall
//			|| map[endpipe.first + 1][endpipe.second + 1] == map_wall)
//			continue;
//
//		if (endpipe.first >= N || endpipe.second >= N)
//			continue;
//
//		q.push({ {endpipe.first, endpipe.second}, {endpipe.first + 1, endpipe.second + 1} });
//	}
//
//	cout << count << "\n";
//	return 0;
//}