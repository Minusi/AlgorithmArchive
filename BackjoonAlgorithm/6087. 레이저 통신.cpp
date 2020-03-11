//#include <iostream>
//#include <algorithm>
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
//int main()
//{
//	ios::sync_with_stdio(false);
//	cin.tie(NULL);
//
//	int w, h;
//	constexpr int map_size = 100;
//	cin >> w >> h;
//
//	
//	char map[map_size][map_size];
//	constexpr coord dir[4] = { {0,1} ,{1,0}, {0,-1}, {-1,0} };
//	constexpr char map_wall = '*';
//	constexpr char map_tile = '.';
//	constexpr char map_conn = 'C';
//
//	coord target[2];
//	{
//		size_t count = 0;
//		for (int i = 0; i < h; ++i)
//		{
//			cin >> map[i];
//			for(int j = 0; j < w; ++j)
//				if (map[i][j] == map_conn)
//					target[count++] = { i,j };
//		}
//	}
//	queue<coord> q;
//	int visit[map_size][map_size];
//	fill(&visit[0][0], &visit[0][0] + sizeof(visit) / sizeof(visit[0][0]), -1);
//
//	q.emplace(target[0].first, target[0].second);
//	visit[target[0].first][target[0].second] = 0;
//	int num_refraction = -1;
//	while (q.empty() == false)
//	{
//		size_t qsize = q.size();
//		num_refraction += 1;
//		for (int s = 0; s < qsize; ++s)
//		{
//			coord curr = q.front();
//			q.pop(); 
//
//			coord next;
//			for (int i = 0; i < 4; ++i)
//			{
//				next = { curr.first + dir[i].first, curr.second + dir[i].second };
//				while (true)
//				{
//					// check out of range
//					if (next.first < 0 || next.first >= h || next.second < 0 || next.second >= w)
//						break;
//					
//					if(map[next.first][next.second] == map_wall)
//						break;
//
//					if (visit[next.first][next.second] == -1)
//					{
//						visit[next.first][next.second] = num_refraction;
//						q.emplace(next.first, next.second);
//					}
//					next.first += dir[i].first;
//					next.second += dir[i].second;
//				}
//			}
//		}
//	}
//
//#ifdef _DEBUG
//	for (int i = 0; i < h; ++i)
//	{
//		for (int j = 0; j < w; ++j)
//		{
//			cout.width(3);
//			cout << visit[i][j];
//		}cout << "\n";
//	}cout << "\n";
//#endif // _DEBUG
//	
//	cout << visit[target[1].first][target[1].second] << "\n";
//	return 0;
//}