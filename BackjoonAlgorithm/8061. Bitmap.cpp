//#include <iostream>
//#include <string>
//#include <queue>
//#include <utility>
//using namespace std;
//
//#ifdef _DEBUG
//#include "Utility.h"
//#endif // _DEBUG
//
//
//typedef pair<int, int> coord;
//constexpr coord dir[4] = { {0,1}, {1,0}, {0,-1},{-1,0} };
//
//constexpr int max_size = 182;
//constexpr char white = '1';
//constexpr char black = '0';
//int main()
//{
//	ios::sync_with_stdio(false);
//	cin.tie(NULL);
//
//	int n, m;
//	cin >> n >> m;
//
//	char bitmap[max_size][max_size];
//
//	queue<coord> q;
//	int visit[max_size][max_size];
//	for (int i = 0; i < n; ++i)
//		for (int j = 0; j < m; ++j)
//			visit[i][j] = -1;
//
//	for (int i = 0; i < n; ++i)
//	{
//		cin >> bitmap[i];
//		for (int j = 0; j < m; ++j)
//		{
//			if (bitmap[i][j] == white)
//			{
//				q.emplace(i, j);
//				visit[i][j] = 0;
//			}
//		}
//	}
//
//	int distance = 0;
//	size_t qsize;
//	while (q.empty() == false)
//	{
//		distance++;
//		qsize = q.size();
//		for (int s = 0; s < qsize; ++s)
//		{
//			auto curr = q.front();
//			q.pop();
//
//			coord next;
//			for (int d = 0; d < 4; ++d)
//			{
//				next = { curr.first + dir[d].first, curr.second + dir[d].second };
//				if (next.first < 0 || next.first >= n || next.second < 0 || next.second >= m)
//					continue;
//
//				if (visit[next.first][next.second] != -1)
//					continue;
//
//				if (bitmap[next.first][next.second] == white)
//					continue;
//
//				q.emplace(next.first, next.second);
//				visit[next.first][next.second] = distance;
//			}
//		}
//	}
//
//	for (int i = 0; i < n; ++i)
//	{
//		for (int j = 0; j < m; ++j)
//			cout << visit[i][j] << " ";
//		cout << "\n";
//	}
//	return 0;
//}