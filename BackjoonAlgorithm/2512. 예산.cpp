//#include <iostream>
//#include <algorithm>
//using namespace std;
//
//#ifdef _DEBUG
//#include "Utility.h"
//#endif // _DEBUG
//
//
//constexpr int nmax = 10000;
//int main()
//{
//	ios::sync_with_stdio(false);
//	cin.tie(NULL);
//
//	int n;
//	cin >> n;
//
//	int locals[nmax];
//	long long total_budget = 0;
//	for (int i = 0; i < n; ++i)
//	{
//		cin >> locals[i];
//		total_budget += locals[i];
//	}
//	sort(locals + 0, locals + n);
//
//	int m;
//	cin >> m;
//
//	if (total_budget <= m)
//	{
//		cout << locals[n - 1] << "\n";
//	}
//	else
//	{
//		int left = 0;
//		int right = locals[n - 1];
//		int mid;
//
//		long long limit_budget;
//		int answer = 0;
//		while (left <= right)
//		{
//			limit_budget = total_budget;
//			mid = (left + right) / 2;
//			for (int i = 0; i < n; ++i)
//			{
//				if (locals[i] <= mid)
//					continue;
//				else
//					limit_budget -= (locals[i] - mid);
//			}
//			
//			if (limit_budget == m)
//			{
//				answer = mid;
//				break;
//			}
//			else if (limit_budget > m)
//				right = mid - 1;
//			else if (limit_budget < m)
//			{
//				if (answer < mid)
//					answer = mid;
//				left = mid + 1;
//			}
//		}
//
//		cout << answer << "\n";
//	}
//	return 0;
//}