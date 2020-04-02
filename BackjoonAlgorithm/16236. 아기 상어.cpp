//#include <iostream>
//#include <cstring>
//#include <queue>
//#include <utility>
//using namespace std;
//
//#ifdef _DEBUG
//#include "Utility.h"
//#endif // _DEBUG
//
//typedef pair<int, int> coord;
//constexpr coord dir[4] = { {0,1},{1,0},{0,-1},{-1,0} };
//
//constexpr int nmax = 20;
//constexpr int max_size = 6;
//
//constexpr int mempty = 0;
//constexpr int mshark = 9;
//int main()
//{
//	ios::sync_with_stdio(false);
//	cin.tie(NULL);
//
//	int n;
//	cin >> n;
//
//	int map[nmax][nmax];
//
//	int fishes[max_size + 1] = { 0 };
//	coord baby;
//	size_t bsize = 2;
//	int bexp_size = 0;
//	for (int i = 0; i < n; ++i)
//	{
//		for (int j = 0; j < n; ++j)
//		{
//			cin >> map[i][j];
//			if (map[i][j] >= 1 && map[i][j] <= max_size)
//				fishes[map[i][j]]++;
//			else if (map[i][j] == mshark)
//				baby = { i,j };
//		}
//	}
//
//	// answer
//	int global_time = 0;
//
//	// bfs variabes
//	queue<coord> q;
//	bool visit[nmax][nmax];
//
//	while (true)
//	{
//		//for (int i = 0; i < n; ++i)
//		//{
//		//	for (int j = 0; j < n; ++j)
//		//	{
//		//		cout.width(3);
//		//		cout << map[i][j];
//		//	}
//		//	cout << "\n";
//		//}
//		//cout << "\n";
//		// search feeds
//		{
//			int num_feed = 0;
//			for (int i = bsize  < 7 ? bsize - 1 : 6; i >= 1; --i)
//				num_feed += fishes[i];
//
//			// need mom shark
//			if (num_feed <= 0)
//				break;
//		}
//
//		// target feed variables
//		coord feed = { -1,-1 };
//		bool find_feed = false;
//
//		int local_time = 0;
//
//		memset(visit, false, sizeof(visit));
//		q.emplace(baby.first, baby.second);
//		visit[baby.first][baby.second] = true;
//		while (q.empty() == false && find_feed == false)
//		{
//			local_time++;
//			size_t qsize = q.size();
//			for (int s = 0; s < qsize; ++s)
//			{
//				auto curr = q.front();
//				q.pop();
//
//				coord next;
//				for (int d = 0; d < 4; ++d)
//				{
//					next = { curr.first + dir[d].first, curr.second + dir[d].second };
//					if (next.first < 0 || next.first >= n || next.second < 0 || next.second >= n)
//						continue;
//
//					if (visit[next.first][next.second])
//						continue;
//
//					if (map[next.first][next.second] > bsize)
//						continue;
//					if (map[next.first][next.second] < bsize
//						&& map[next.first][next.second] > 0)
//					{
//						if (feed.first == -1)
//						{
//							feed = next;
//							find_feed = true;
//						}
//						else
//						{
//							if (feed.first > next.first 
//								|| (feed.first == next.first && feed.second > next.second))
//								feed = next;
//						}
//						continue;
//					}
//
//					q.emplace(next.first, next.second);
//					visit[next.first][next.second] = true;
//				}
//			}
//		}
//		if (q.empty() == true && find_feed == false)
//		{
//			local_time = 0;
//			break;
//		}
//		else
//		{
//			while (q.empty() == false)
//				q.pop();
//			global_time += local_time;
//		}
//
//		fishes[map[feed.first][feed.second]]--;
//
//		map[baby.first][baby.second] = mempty;
//		map[feed.first][feed.second] = mshark;
//
//		baby = feed;
//		bexp_size++;
//		if (bexp_size == bsize)
//		{
//			bsize++;
//			bexp_size = 0;
//		}
//	}
//
//	cout << global_time << "\n";
//	return 0;
//}