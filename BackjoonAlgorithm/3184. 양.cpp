//#include <iostream>
//#include <queue>
//using namespace std;
//
//#ifdef _DEBUG
//#include "Utility.h"
//#endif // _DEBUG
//
//
//typedef pair<int, int > coord;
//constexpr coord dir[4] = { {0,1},{1,0}, {0,-1}, {-1,0} };
//constexpr int max_field = 250;
//constexpr char mempty = '.';
//constexpr char mfence = '#';
//constexpr char msheep = 'o';
//constexpr char mwolf = 'v';
//int main()
//{
//	ios::sync_with_stdio(false);
//	cin.tie(NULL);
//
//	int r, c;
//	cin >> r >> c;
//
//	char map[max_field][max_field + 1];
//	for (int i = 0; i < r; ++i)
//		cin >> map[i];
//
//	queue<coord> q;
//	int visit[max_field][max_field] = { false };
//
//	int region_id = 0;
//	int survivor_sheep = 0;
//	int survivor_wolves = 0;
//	for (int i = 0; i < r; ++i)
//	{
//		for (int j = 0; j < c; ++j)
//		{
//			if (visit[i][j] || map[i][j] == mfence)
//				continue;
//
//			int num_sheep = 0;
//			int num_wolves = 0;
//
//			region_id++;
//			q.emplace(i, j);
//			visit[i][j] = region_id;
//			while (q.empty() == false)
//			{
//				auto curr = q.front();
//				q.pop();
//
//				if (map[curr.first][curr.second] == msheep)
//					num_sheep++;
//				else if (map[curr.first][curr.second] == mwolf)
//					num_wolves++;
//
//				coord next;
//				for (int d = 0; d < 4; ++d)
//				{
//					next = { curr.first + dir[d].first, curr.second + dir[d].second };
//					// check escape region
//					if (next.first < 0 || next.first >= r || next.second < 0 || next.second >= c)
//						continue;
//
//					// ignore already have visited
//					if (visit[next.first][next.second])
//						continue;
//
//					// ignore fence
//					if (map[next.first][next.second] == mfence)
//						continue;
//
//					q.emplace(next.first, next.second);
//					visit[next.first][next.second] = region_id;
//				}
//			}
//
//			//cout << "\n";
//			//for (int a = 0; a < r; ++a)
//			//{
//			//	for (int b = 0; b < c; ++b)
//			//	{
//			//		cout.width(3);
//			//		cout << visit[a][b];
//			//	}
//			//	cout << "\n";
//			//}
//			//cout << "num_sheep : " << num_sheep << "\n";
//			//cout << "num_wolves : " << num_wolves << "\n";
//
//			if (num_sheep > num_wolves)
//				survivor_sheep += num_sheep;
//			else
//				survivor_wolves += num_wolves;
//		}
//	}
//	
//	cout << survivor_sheep << " " << survivor_wolves << "\n";
//
//	return 0;
//}