//#include <iostream>
//#include <algorithm>
//#include <cmath>
//using namespace std;
//
//#ifdef _DEBUG
//#include "Utility.h"
//#endif // _DEBUG
//
//
//constexpr int nmax = 200000;
//constexpr int INF = 2000000000;
//int main()
//{
//	ios::sync_with_stdio(false);
//	cin.tie(NULL);
//
//	int n, c;
//	cin >> n >> c;
//	
//	int houses[nmax];
//	for (int i = 0; i < n; ++i)
//		cin >> houses[i];
//	sort(houses + 0, houses + n);
//
//	int answer;
//	{
//		int left = 1;
//		int right = houses[n - 1] - houses[0];
//		int mid;
//
//		int count, interval, base;
//		while (left <= right)
//		{
//			count = 1;
//			base = houses[0];
//
//			mid = (left + right) / 2;
//			for (int i = 0; i < n; ++i)
//			{
//				interval = houses[i] - base;
//				if (interval >= mid)
//				{
//					count++;
//					base = houses[i];
//				}
//			}
//
//			if (count >= c)
//			{
//				answer = mid;
//				left = mid + 1;
//			}
//			else
//				right = mid - 1;
//		}
//	}
//	cout << answer << "\n";
//
//	return 0;
//}