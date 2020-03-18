//#include <iostream>
//#include <queue>
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
//struct coord_log
//{
//	coord pos;
//	uint32_t alpa_flag = 0x0;
//};
//int main()
//{
//	ios::sync_with_stdio(false);
//	cin.tie(NULL);
//
//	int r, c;
//	cin >> r >> c;
//
//	char board[20][21];
//	constexpr coord dir[4] = { {0,1}, {1,0}, {0,-1}, {-1,0} };
//	for (int i = 0; i < r; ++i)
//		cin >> board[i];
//
//	queue<coord_log> q;
//	int answer = 1;
//
//	coord_log init;
//	init.alpa_flag = (1 << (board[0][0] - 'A'));
//	q.push(init);
//	
//	while (q.empty() == false)
//	{
//		size_t qsize = q.size();
//		answer += 1;
//		for (size_t s = 0; s < qsize; ++s)
//		{
//			coord_log curr = q.front();
//			q.pop();
//
//			coord_log next;
//			for (int i = 0; i < 4; ++i)
//			{
//				next.pos = { curr.pos.first + dir[i].first, curr.pos.second + dir[i].second };
//				next.alpa_flag = curr.alpa_flag;
//
//				// check out of range
//				if (next.pos.first < 0 || next.pos.first >= r || next.pos.second < 0 || next.pos.second >= c)
//					continue;
//
//				// check alphabet is matching
//				uint32_t check = (1 << (board[next.pos.first][next.pos.second] - 'A'));
//				if (curr.alpa_flag & check)
//					continue;
//
//				next.alpa_flag |= check;
//				q.push(next);
//			}
//		}
//	}
//	answer -= 1;
//	cout << answer<< "\n";
//	return 0;
//}