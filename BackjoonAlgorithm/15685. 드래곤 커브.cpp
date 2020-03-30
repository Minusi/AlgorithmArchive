//#include <iostream>
//#include <utility>
//#include <vector>
//using namespace std;
//
//#ifdef _DEBUG
//#include "Utility.h"
//#endif // _DEBUG
//
//
//
//typedef pair<int, int> coord;
//constexpr int max_limit = 101;
//constexpr coord dir[4] = { {0,1}, {-1,0}, {0,-1}, {1,0} };
//int main()
//{
//	ios::sync_with_stdio(false);
//	cin.tie(NULL);
//
//	int n;
//	cin >> n;
//	
//	unsigned int map[max_limit][max_limit] = { 0 };
//	{
//		int c, r, d, gen;
//		vector<coord> dcurve;
//		for (int i = 0; i < n; ++i)
//		{
//			dcurve.clear();
//
//			cin >> c >> r >> d >> gen;
//			dcurve.emplace_back(r, c);
//			dcurve.emplace_back(r + dir[d].first, c + dir[d].second);
//			for (int g = 1; g <= gen; ++g)
//			{
//				coord axis = dcurve.back();
//				coord offset, result;
//
//				size_t dcsize = dcurve.size();
// 
//				for (int s = dcsize - 1; s >= 0; --s)
//				{
//					offset = { dcurve[s].first - axis.first, dcurve[s].second - axis.second };
//					result = { axis.first + offset.second, axis.second - offset.first };
//					dcurve.emplace_back(result.first, result.second);
//				}
//			}
//			for (const auto& it : dcurve)
//				map[it.first][it.second] |= 1 << i;
//		}
//	}
//
//#ifdef _DEBUG
//	for (int i = 0; i < max_limit; ++i)
//	{
//		for (int j = 0; j < max_limit; ++j)
//		{
//			cout.width(2);
//			cout << map[i][j];
//		}
//		cout << "\n";
//	}cout << "\n";
//#endif // _DEBUG
//
//	int answer = 0;
//	for (int i = 0; i < max_limit - 1; ++i)
//	{
//		for (int j = 0; j < max_limit - 1; ++j)
//		{
//			if (map[i][j] != 0 && map[i][j + 1] != 0 &&
//				map[i + 1][j] != 0 && map[i + 1][j + 1] != 0)
//				answer++;
//		}
//	}
//
//	cout << answer << "\n";
//	return 0;
//}