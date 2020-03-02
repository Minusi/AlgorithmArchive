//#include <iostream>
//#include <stack>	
//#include <queue>
//#include <utility>
//#include <cstring>
//using namespace std;
//
////#define DEBUG
//#ifdef DEBUG
//#include "Utility.h"
//#endif // DEBUG
//
//
//
//int main()
//{
//	ios::sync_with_stdio(false);
//	cin.tie(NULL);
//
//	int n;
//	cin >> n;
//
//	int map[100][100];
//	for (int i = 0; i < n; ++i)
//		for (int j = 0; j < n; ++j)
//			cin >> map[i][j];
//
//
//	// start indexing all of islands and push seacoast to queue
//	stack<pair<int, int>> stack;
//	queue<pair<int, int>> queue;
//	bool visited[100][100] = { false };
//	int islandIndex = 0;
//
//	constexpr int dr[4] = { 0, 1, 0, -1 };
//	constexpr int dc[4] = { 1,0,-1,0 };
//
//	for (int i = 0; i < n; ++i)
//	{
//		for (int j = 0; j < n; ++j)
//		{
//			if (map[i][j] == 0 || visited[i][j] == true)
//				continue;
//
//			map[i][j] = --islandIndex;
//			stack.emplace(i, j);
//			visited[i][j] = true;
//			while (stack.empty() == false)
//			{
//				pair<int, int> curr = stack.top();
//				stack.pop();
//
//				bool bSeacoast = false;
//				pair<int, int> next;
//				for (int d = 0; d < 4; ++d)
//				{
//					next = { curr.first + dr[d], curr.second + dc[d] };
//					// check validate if value is out of range
//					if (next.first < 0 || next.first >= n || next.second < 0 || next.second >= n)
//						continue;
//
//					// check already visit
//					if (visited[next.first][next.second] == true)
//						continue;
//
//					// check next pos is area
//					if (map[next.first][next.second] == 0)
//					{
//						bSeacoast = true;
//						continue;
//					}
//
//					map[next.first][next.second] = islandIndex;
//					stack.emplace(next.first, next.second);
//					visited[next.first][next.second] = true;
//				}
//
//				if (bSeacoast)
//					queue.emplace(curr.first, curr.second);
//			}
//		}
//	}
//	memset(visited, false, sizeof(visited));
//
//	int answer = 987654321;
//	int area[100][100];
//	memcpy(area, map, sizeof(area));
//
//	int unit = 0;
//	bool bLoop = true;
//	while (queue.empty() == false && bLoop == true)
//	{
//		++unit;
//
//		auto qsize = queue.size();
//		for (int i = 0; i < qsize; ++i)
//		{
//			pair<int, int> curr = queue.front();
//			queue.pop();
//
//			// check already visit
//			if (visited[curr.first][curr.second])
//				continue;
//
//			visited[curr.first][curr.second] = true;
//			pair<int, int> next;
//			for (int d = 0; d < 4; ++d)
//			{
//				next = { curr.first + dr[d], curr.second + dc[d] };
//				// check out of range
//				if (next.first < 0 || next.first >= n || next.second < 0 || next.second >= n)
//					continue;
//				
//				// check next pos is ground
//				if (map[next.first][next.second] < 0)
//					continue;
//				else if (map[next.first][next.second] == 0)
//				{
//					map[next.first][next.second] = unit;
//					area[next.first][next.second] = area[curr.first][curr.second];
//					queue.emplace(next.first, next.second);
//				}
//				else
//				{
//					if (area[curr.first][curr.second] == area[next.first][next.second])
//					{
//						if (unit < map[next.first][next.second])
//							map[next.first][next.second] = unit;
//					}
//					else
//					{
//						bLoop = false;
//						int dist;
//						// if curr pos is ground, then dist is just 
//						if(map[curr.first][curr.second] < 0)
//							dist = map[next.first][next.second];
//						else
//							dist = map[curr.first][curr.second] + map[next.first][next.second];
//
//						if (dist < answer)
//							answer = dist;
//					}
//				}
//			}
//		}
//#ifdef DEBUG
//		cout << "unit : " << unit << "\n";
//		Print2Dimen(map, 0, n, 0, n, 4);
//		Print2Dimen(area, 0, n, 0, n, 4);
//#endif // DEBUG
//	}
//
//	cout << answer << "\n";
//	return 0;
//}