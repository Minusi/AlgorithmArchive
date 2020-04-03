//#include <iostream>
//#include <queue>
//#include <utility>
//#include <functional>
//using namespace std;
//
//#ifdef _DEBUG
//#include "Utility.h"
//#endif // _DEBUG
//
//
//typedef pair<int, int> coord;
//constexpr coord dir[4] = { {0,1},{1,0},{0,-1,},{-1,0} };
//constexpr int max_range = 100;
//constexpr int mempty = 0;
//constexpr int mwall = 1;
//constexpr int INF = 987654321;
//struct triple
//{
//	triple() = default;
//	triple(int _c, coord _p) : cost(_c), pos(_p){ };
//	bool operator>(const triple& rhs) const
//	{
//		return cost > rhs.cost;
//	}
//	int cost;
//	coord pos;
//};
//int main()
//{
//	ios::sync_with_stdio(false);
//	cin.tie(NULL);
//
//	int n, m;
//	cin >> m >> n;
//
//	int map[max_range + 1][max_range + 1];
//	{
//		char buffer[max_range + 2];
//		for (int i = 1; i <= n; ++i)
//		{
//			cin >> buffer;
//			for (int j = 1; j <= m; ++j)
//				map[i][j] = buffer[j - 1] - '0';
//		}
//	}
//
//	
//	priority_queue<triple, vector<triple>, greater<triple>> pq;
//	int distance[max_range + 1][max_range + 1];
//	for (int i = 1; i <= n; ++i)
//		for (int j = 1; j <= m; ++j)
//			distance[i][j] = INF;
//	
//	pq.emplace(0, make_pair(1,1));
//	distance[1][1] = 0;
//	while (pq.empty() == false)
//	{
//		auto curr = pq.top();
//		pq.pop();
//		
//		triple next;
//		for (int d = 0; d < 4; ++d)
//		{
//			next.pos = { curr.pos.first + dir[d].first, curr.pos.second + dir[d].second };
//			if (next.pos.first <= 0 || next.pos.first > n ||
//				next.pos.second <= 0 || next.pos.second > m)
//				continue;
//
//			next.cost = curr.cost;
//			if (map[next.pos.first][next.pos.second] == mwall)
//				next.cost += 1;
//
//			if (distance[next.pos.first][next.pos.second] <= next.cost)
//				continue;
//
//			distance[next.pos.first][next.pos.second] = next.cost;
//			pq.emplace(next.cost, next.pos);
//		}
//	}
//	
//	cout << distance[n][m] << "\n";
//	return 0;
//}