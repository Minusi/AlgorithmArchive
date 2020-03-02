//#include <iostream>
//#include <stack>
//#include <utility>
//using namespace std;
//
//#ifdef DEBUG
//#include "Utility.h"
//#endif // DEBUG
//
//
//// const variable for bit flag
//constexpr unsigned int ms16b = 0xFFFF0000;
//constexpr unsigned int ls16b = 0x0000FFFF;
//
//// const expression about direction
//constexpr int dr[4] = { 0, 1, 0, -1 };
//constexpr int dc[4] = { 1, 0, -1, 0 };
//typedef pair<int, int> coord;
//
//void dfs(stack<coord>& stack, char(&pic)[100][100], unsigned int (&visit)[100][100], int n, bool bBlind)
//{
//	while (stack.empty() == false)
//	{
//		coord curr = stack.top();
//		stack.pop();
//
//		coord next;
//		for (int i = 0; i < 4; ++i)
//		{
//			next = { curr.first + dr[i], curr.second + dc[i] };
//
//			// check out of range
//			if (next.first < 0 || next.first >= n || next.second < 0 || next.second >= n)
//				continue;
//
//			// for blind
//			if (bBlind)
//			{
//				// check already visit
//				if (visit[next.first][next.second] & ls16b)
//					continue;
//
//				// processing color-blind and check values are same 
//				char currColor = pic[curr.first][curr.second];
//				char nextColor = pic[next.first][next.second];
//				if (((currColor == nextColor)
//					|| (currColor == 'R' && nextColor == 'G')
//					|| (currColor == 'G' && nextColor == 'R')) == false)
//					continue;
//
//				visit[next.first][next.second] = (visit[next.first][next.second] & ms16b) + (visit[curr.first][curr.second] & ls16b);
//				stack.emplace(next.first, next.second);
//			}
//			// for normal
//			else
//			{
//				// check already visit
//				if (visit[next.first][next.second] & ms16b)
//					continue;
//
//				// check values are same
//				if (pic[next.first][next.second] != pic[curr.first][curr.second])
//					continue;
//
//				visit[next.first][next.second] = (visit[curr.first][curr.second] & ms16b) + (visit[next.first][next.second] & ls16b);
//				stack.emplace(next.first, next.second);
//			}
//		}
//	}
//}
//
//int main()
//{
//	ios::sync_with_stdio(false);
//	cin.tie(NULL);
//
//	int n;
//	cin >> n;
//
//	char picture[100][100];
//	for (int i = 0; i < n; ++i)
//		for (int j = 0; j < n; ++j)
//			cin >> picture[i][j];
//
//	stack<coord> normal, blind;
//	static int cntBlind = 0;
//	static int cntNormal = 0;
//
//	// 16-msb for normal, 16-lsb for color-blind
//	unsigned int visited[100][100] = { 0 };
//	for (int i = 0; i < n; ++i)
//	{
//		for (int j = 0; j < n; ++j)
//		{
//			// blind bfs
//			if ((visited[i][j] & ls16b) == 0)
//			{
//				cntBlind += 1;
//
//				blind.emplace(i, j);
//				visited[i][j] = (visited[i][j] & ms16b) + cntBlind;
//				dfs(blind, picture, visited, n, true);
//			}
//			// normal bfs
//			if ((visited[i][j] & ms16b) == 0)
//			{
//				cntNormal += 1;
//
//				normal.emplace(i, j);
//				visited[i][j] = (cntNormal << 16) + (visited[i][j] & ls16b);
//				dfs(normal, picture, visited, n, false);
//			}
//
//		}
//	}
//
//	cout << cntNormal << " " << cntBlind << "\n";
//	return 0;
//}