//#include <iostream>
//#include <deque>
//#include <utility>
//using namespace std;
//
//#ifdef _DEBUG
//#include "Utility.h"
//#endif // _DEBUG
//
//
//typedef pair<int, int> coord;
//enum direction{ east, south, west, north };
//constexpr int max_limit = 100;
//constexpr coord dir[4] = { {0,1},{1,0}, {0,-1}, {-1,0} };
//int main()
//{
//	ios::sync_with_stdio(false);
//	cin.tie(NULL);
//
//	int n, k, l;
//	cin >> n >> k;
//
//	int map[max_limit][max_limit] = { 0 };
//	constexpr int map_empty = 0;
//	constexpr int map_apple = 1;
//	constexpr int map_snake = 2;
//	{
//		coord apple;
//		for (int i = 0; i < k; ++i)
//		{
//			cin >> apple.first >> apple.second;
//			apple.first--, apple.second--;
//			map[apple.first][apple.second] = map_apple;
//		}
//	}
//
//	cin >> l;
//	deque<coord> dq;
//	direction head = east;
//
//	map[0][0] = map_snake;
//	dq.emplace_back(0, 0);
//
//	int engine_time = 0;
//	{
//		int event_time;
//		char rot_angle;
//		size_t passed_events = 0;
//		cin >> event_time >> rot_angle;
//
//		bool game_over = false;
//		while(game_over == false)
//		{
//			engine_time++;
//			coord curr = dq.front();
//			coord next;
//			next = { curr.first + dir[head].first, curr.second + dir[head].second };
//					
//			// check out of range(wall)
//			if (next.first < 0 || next.first >= n || next.second < 0 || next.second >= n)
//			{
//#ifdef _DEBUG
//				cout << "snake is dead by wall(" << next.first << "," << next.second << ")\n";
//#endif // _DEBUG
//
//				game_over = true;
//				break;
//			}
//
//			// check collision with other objects
//			if (map[next.first][next.second] == map_snake)
//			{
//#ifdef _DEBUG
//				cout << "snake is dead by self(" << next.first << "," << next.second << ")\n";
//#endif // _DEBUG
//
//				game_over = true;
//				break;
//			}
//			else if (map[next.first][next.second] == map_apple)
//			{
//#ifdef _DEBUG
//				cout << "snake eats apple(" << next.first << "," << next.second << ")\n";
//#endif // _DEBUG
//
//				dq.emplace_front(next.first, next.second);
//				map[next.first][next.second] = map_snake;
//			}
//			else if (map[next.first][next.second] == map_empty)
//			{
//				dq.emplace_front(next.first, next.second);
//				map[next.first][next.second] = map_snake;
//
//				coord remove = dq.back();
//				dq.pop_back();
//				map[remove.first][remove.second] = map_empty;
//			}
//
//#ifdef _DEBUG
//			cout << "time(" << engine_time << ") : " << dq.front().first << "," << dq.front().second << "\n";
//#endif // _DEBUG
//			
//			// rotate head
//			if (engine_time == event_time)
//			{
//				if (rot_angle == 'L')
//					head = (direction)(((int)head + 3) % 4);
//				else if (rot_angle == 'D')
//					head = (direction)(((int)head + 1) % 4);
//				
//				passed_events++;
//				if(passed_events < l)
//					cin >> event_time >> rot_angle;
//			}
//		}
//	}
//	
//	cout << engine_time << "\n";
//	return 0;
//}