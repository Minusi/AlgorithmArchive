//#include <iostream>
//#include <utility>
//#include <stack>
//using namespace std;
//
//#ifdef _DEBUG
//#include "Utility.h"
//#endif // _DEBUG
//
//// pre variables and defs
//typedef pair<int, int> coord;
//constexpr coord dir[4] = { {0,1}, {1,0}, {0,-1},{-1,0} };
//constexpr int smax = 5;
//constexpr int seven = 7;
//
//
//// input
//char seat[smax][smax + 1];
//
//// output
//int answer = 0;
//
//// backtracking
//bool check_comb[smax][smax] = { false };
//
//coord seven_seat[seven];
//
//void backtracking(int start, int count)
//{
//	if (count == seven)
//	{
//		int numS = 0, numY = 0;
//		for (int i = 0; i < seven; ++i)
//		{
//			if (seat[seven_seat[i].first][seven_seat[i].second] == 'S')
//				numS++;
//			else if (seat[seven_seat[i].first][seven_seat[i].second] == 'Y')
//				numY++;
//		}
//
//		if (numS <= numY)
//			return;
//
//		// then start bfs for checking sequence array 
//		stack<coord> s;
//		s.emplace(seven_seat[0]);
//
//		bool check[seven] = { false };
//		check[0] = true;
//		while (s.empty() == false)
//		{
//			auto curr = s.top();
//			s.pop();
//
//			coord next;
//			for (int d = 0; d < 4; ++d)
//			{
//				next = { curr.first + dir[d].first, curr.second + dir[d].second };
//				for (int i = 0; i < seven; ++i)
//				{
//					if (check[i])
//						continue;
//
//					if (seven_seat[i] != next)
//						continue;
//
//					check[i] = true;
//					s.emplace(next.first, next.second);
//				}
//			}
//		}
//
//		bool sequence = true;
//		for (int i = 0; i < seven; ++i)
//		{
//			if (check[i] == false)
//			{
//				sequence = false;
//				break;
//			}
//		}
//
//		if (sequence)
//			answer++;
//
//		return;
//	}
//
//	for (int i = start; i < smax * (smax + 1); ++i)
//	{
//		if ((i + 1) % (smax + 1) == 0)
//			continue;
//
//		int r = (i + 1) / (smax + 1);
//		int c = i % (smax + 1);
//		seven_seat[count] = { r,c };
//		backtracking(i + 1, count + 1);
//		seven_seat[count] = { 0,0 };
//	}
//}
//
//int main()
//{
//	ios::sync_with_stdio(false);
//	cin.tie(NULL);
//
//	for (int i = 0; i < smax; ++i)
//		cin >> seat[i];
//
//	backtracking(0, 0);
//
//	cout << answer << "\n";
//	return 0;
//}