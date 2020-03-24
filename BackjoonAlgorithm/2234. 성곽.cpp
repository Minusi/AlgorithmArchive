//#include <iostream>
//#include <queue>
//#include <vector>
//#include <utility>
//#include <cmath>
//#include <algorithm>
//using namespace std;
//
//#ifdef _DEBUG
//#include "Utility.h"
//#endif // _DEBUG
//
//typedef pair<short, short> coord;
//constexpr int max_limit = 50;
//constexpr coord dir[4] = { {0,-1}, {-1,0}, {0,1}, {1,0} };
//
//int main()
//{
//	ios::sync_with_stdio(false);
//	cin.tie(NULL);
//
//	int m, n;
//	cin >> m >> n;
//
//	int castle[max_limit + 1][max_limit + 1];
//	for (int i = 0; i < n; ++i)
//		for (int j = 0; j < m; ++j)
//			cin >> castle[i][j];
//
//	constexpr int west = 0x01;
//	constexpr int north = 0x02;
//	constexpr int east = 0x04;
//	constexpr int south = 0x08;
//	
//	vector<int> graph[max_limit * max_limit + 1];
//	int room_sizes[max_limit * max_limit + 1] = { 0 };
//
//	queue<coord> q;
//	int visit[max_limit][max_limit] = { 0 };
//	bool chk_rooms[max_limit * max_limit + 1];
//
//
//	int room_id = 0;
//	int max_room_size = 0;
//	for (int i = 0; i < n; ++i)
//	{
//		for (int j = 0; j < m; ++j)
//		{
//			if (visit[i][j] != 0)
//				continue;
//
//			// initialize variables
//			int room_size = 0;
//			room_id++;
//
//			fill(chk_rooms + 0, chk_rooms + max_limit * max_limit + 1, 0);
//			chk_rooms[room_id] = true;
//			for (const auto it : graph[room_id])
//				chk_rooms[it] = true;
//
//			coord insert = { i,j };
//			q.push(insert);
//			visit[i][j] = room_id;
//			while (q.empty() == false)
//			{
//				coord curr = q.front();
//				room_size++;
//				q.pop();
//				
//				coord next;
//				for (int d = 0; d < 4; ++d)
//				{
//					next = { curr.first + dir[d].first, curr.second + dir[d].second };
//
//					if (next.first < 0 || next.first >= n || next.second < 0 || next.second >= m)
//						continue;
//
//					if (visit[next.first][next.second] != 0)
//					{
//						if (chk_rooms[visit[next.first][next.second]] == false)
//						{
//							graph[room_id].push_back(visit[next.first][next.second]);
//							graph[visit[next.first][next.second]].push_back(room_id);
//							chk_rooms[visit[next.first][next.second]] = true;
//						}
//						continue;
//					}
//
//					if ((castle[curr.first][curr.second] & (int)pow(2, d)) != 0)
//						continue;
//
//					q.push(next);
//					visit[next.first][next.second] = room_id;
//				}
//			}
//			if (max_room_size < room_size)
//				max_room_size = room_size;
//
//			room_sizes[room_id] = room_size;
//		}
//	}
//
//	fill(chk_rooms + 0, chk_rooms + max_limit * max_limit + 1, 0);
//	int max_merge_rooms = 0;
//	queue<int> qr;
//	
//	qr.push(1);
//	chk_rooms[1] = true;
//
//	int merge_room_size;
//	while (qr.empty() == false)
//	{
//		auto curr = qr.front();
//		qr.pop();
//
//		int next;
//		for (int s = 0; s < graph[curr].size(); ++s)
//		{
//			next = graph[curr][s];
//
//			merge_room_size = room_sizes[curr] + room_sizes[next];
//			if (max_merge_rooms < merge_room_size)
//				max_merge_rooms = merge_room_size;
//
//			if (chk_rooms[next])
//				continue;
//
//			qr.push(next);
//			chk_rooms[next] = true;
//		}
//	}
//
//	cout << room_id << "\n";
//	cout << max_room_size << "\n";
//	cout << max_merge_rooms << "\n";
//	return 0;
//}