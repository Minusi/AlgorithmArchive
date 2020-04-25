//#include <iostream>
//#include <utility>
//#include <vector>
//#include <cmath>
//using namespace std;
//
//#ifdef _DEBUG
//#include "Utility.h"
//#endif // _DEBUG
//
//
//
//typedef pair<int, int> coord;
//constexpr int pinf = 987654321;
//constexpr int mmax = 13;
//constexpr int mhouse = 1;
//constexpr int mchick = 2;
//
//int answer = pinf;
//void backtracking(const vector<coord>& houses, const vector<coord>& chicks, const int m, int count)
//{
//	static bool indices[mmax] = { false };
//	static size_t num_true = 0;
//	if (m == num_true)
//	{
//		int chick_dist = 0;
//		int min_dist;
//		for (const auto& it : houses)
//		{
//			min_dist = pinf;
//			for (int j = 0; j < chicks.size(); ++j)
//			{
//				if (indices[j] == false)
//					continue;
//
//				int dist = abs(it.first - chicks[j].first) + abs(it.second - chicks[j].second);
//				if (min_dist > dist)
//					min_dist = dist;
//			}
//			chick_dist += min_dist;
//		}
//
//		if (answer > chick_dist)
//			answer = chick_dist;
//		return;
//	}
//	
//	if (chicks.size() + num_true - count == m)
//	{
//		indices[count] = true;
//		num_true++;
//		backtracking(houses, chicks, m, count + 1);
//		indices[count] = false;
//		num_true--;
//	}
//	else
//	{
//		indices[count] = true;
//		num_true++;
//		backtracking(houses, chicks, m, count + 1);
//		indices[count] = false;
//		num_true--;
//
//		indices[count] = false;
//		backtracking(houses, chicks, m, count + 1);
//		indices[count] = false;
//	}
//}
//int main()
//{
//	ios::sync_with_stdio(false);
//	cin.tie(NULL);
//
//	int n, m;
//	cin >> n >> m;
//	
//	vector<coord> houses;
//	vector<coord> chicks;
//	houses.reserve(n * 2);
//	chicks.reserve(m);
//	
//	{
//		int input;
//		for (int i = 1; i <= n; ++i)
//		{
//			for (int j = 1; j <= n; ++j)
//			{
//				cin >> input;
//				if (input == mhouse)
//					houses.emplace_back(i, j);
//				else if (input == mchick)
//					chicks.emplace_back(i, j);
//			}
//		}
//	}
//
//	backtracking(houses, chicks, m, 0);
//	cout << answer << "\n";
//
//	return 0;
//}