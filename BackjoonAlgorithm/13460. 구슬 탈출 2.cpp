//#include <iostream>
//#include <algorithm>
//#include <vector>
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
//struct balls
//{
//	balls() = default;
//	balls(coord _red, coord _blue) : red(_red), blue(_blue){}
//	balls(const balls&) = default;
//	coord red;
//	coord blue;
//};
//int main()
//{
//	ios::sync_with_stdio(false);
//	cin.tie(NULL);
//
//	int n, m;
//	cin >> n >> m;
//
//	char map[11][11];
//	constexpr coord dir[4] = { {0,1},{1,0},{0,-1},{-1,0} };
//	constexpr char map_tile = '.';
//	constexpr char map_wall = '#';
//	constexpr char map_hole = 'O';
//	constexpr char map_red = 'R';
//	constexpr char map_blue = 'B';
//
//	queue<balls> queue;
//	vector<balls> visit[11];
//	{
//		coord red_pos, blue_pos, hole_pos;
//		for (int i = 0; i < n; ++i)
//		{
//			cin >> map[i];
//			for (int j = 0; j < m; ++j)
//			{
//				if (map[i][j] == 'R')
//				{
//					map[i][j] = map_tile;
//					red_pos = { i,j };
//				}
//				else if (map[i][j] == 'B')
//				{
//					map[i][j] = map_tile;
//					blue_pos = { i,j };
//				}
//				else if (map[i][j] == 'O')
//					hole_pos = { i,j };
//			}
//		}
//
//		queue.emplace(red_pos, blue_pos);
//		visit[0].emplace_back(red_pos, blue_pos);
//	}
//
//	int count = 0;
//	bool loop = true;
//	while ((queue.empty() == false) && (count < 10) && loop)
//	{
//		size_t qsize = queue.size();
//		count += 1;
//		for (int s = 0; s < qsize && loop; ++s)
//		{
//			balls curr = queue.front();
//			queue.pop();
//#ifdef _DEBUG
//			cout << "\ncount : " << count << "\n";
//			cout << "curr.red : " << curr.red.first << "," << curr.red.second << "\n";
//			cout << "curr.blue : " << curr.blue.first << "," << curr.blue.second << "\n";
//#endif // _DEBUG
//
//
//			balls next;
//			for (int i = 0; i < 4 && loop; ++i)
//			{
//				balls cand = next = curr;
//				enum class EPrecede{ NONE, BLUE, RED } precede_state = EPrecede::NONE;
//				enum class EGoal{ NONE, RED, BLUE, BOTH  } goal_state = EGoal::NONE;
//
//				// simulates red
//				while (true)
//				{
//					cand.red.first += dir[i].first;
//					cand.red.second += dir[i].second;
//					char& cand_tile = map[cand.red.first][cand.red.second];
//					
//					// encounter walls
//					if (cand_tile == map_wall)
//					{
//						if (precede_state == EPrecede::BLUE)
//						{
//							next.red.first -= dir[i].first;
//							next.red.second -= dir[i].second;
//						}
//						break;
//					}
//					// encounter holes
//					else if (cand_tile == map_hole)
//					{
//						goal_state = EGoal::RED;
//						next.red = cand.red;
//						break;
//					}
//					// encounter blue
//					else if (cand.red == curr.blue)
//					{
//						precede_state = EPrecede::BLUE;
//					}
//
//					next.red = cand.red;
//				}
//				// simulates blue
//				while (true)
//				{
//					cand.blue.first += dir[i].first;
//					cand.blue.second += dir[i].second;
//					char& cand_tile = map[cand.blue.first][cand.blue.second];
//
//					// encounter walls
//					if (cand_tile == map_wall)
//					{
//						if (precede_state == EPrecede::RED)
//						{
//							next.blue.first -= dir[i].first;
//							next.blue.second -= dir[i].second;
//						}
//						break;
//					}
//					// encounter holes
//					else if (cand_tile == map_hole)
//					{
//						if (goal_state == EGoal::RED)
//							goal_state = EGoal::BOTH;
//						else
//							goal_state = EGoal::BLUE;
//						next.blue = cand.blue;
//						break;
//					}
//					// encounter blue
//					else if (cand.blue == curr.red)
//					{
//						precede_state = EPrecede::RED;
//					}
//
//					next.blue = cand.blue;
//				}
//#ifdef _DEBUG
//				cout << "i : " << i << "\n";
//				cout << "next.red : " << next.red.first << "," << next.red.second << "\n";
//				cout << "next.blue :" << next.blue.first << "," << next.blue.second << "\n";
//#endif // _DEBUG
//
//				// check already have visited
//				bool visited = false;
//				for (int c = 0; (c < count) && (visited == false); ++c)
//					for (const auto& it : visit[c])
//						if (next.red == it.red && next.blue == it.blue)
//							visited = true;
//				if (visited)
//					continue;
//
//				visit[count].emplace_back(next.red, next.blue);
//				if (goal_state == EGoal::NONE)
//				{
//					//cout << "Accept\n\n";
//					queue.emplace(next.red, next.blue);
//				}
//				else if (goal_state == EGoal::RED)
//					loop = false;
//			}
//		}
//	}
//#ifdef _DEBUG
//	int vvisit[10][10];
//	fill(&vvisit[0][0], &vvisit[0][0] + sizeof(vvisit) / sizeof(vvisit[0][0]), -1);
//	
//	for (int i = 0; i <= count; ++i)
//	{
//		for (const auto& it : visit[i])
//		{
//			if (vvisit[it.red.first][it.red.second] == -1)
//				vvisit[it.red.first][it.red.second] = i;
//			else
//				vvisit[it.red.first][it.red.second] = min(vvisit[it.red.first][it.red.second], i);
//		}
//	}
//
//	for (int j = 0; j < n; ++j)
//	{
//		for (int k = 0; k < m; ++k)
//		{
//			cout.width(3);
//			cout << vvisit[j][k];
//		}cout << "\n";
//	}cout << "\n";
//#endif // _DEBUG
//
//		cout << (loop ? -1 : count ) << "\n";
//	return 0;
//}