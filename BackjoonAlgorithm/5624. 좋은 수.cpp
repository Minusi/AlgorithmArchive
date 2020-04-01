//#include <iostream>
//#include <algorithm>
//using namespace std;
//
//#ifdef _DEBUG
//#include "Utility.h"
//#endif // _DEBUG
//
//
//constexpr int max_limit = 5000;
//constexpr int max_range = 200000 * 2 + 1;
//int answer = 0;
//int main()
//{
//	ios::sync_with_stdio(false);
//	cin.tie(NULL);
//
//	int n;
//	cin >> n;
//
//	int nums[max_limit];
//	for (int i = 0; i < n; ++i)
//		cin >> nums[i];
//
//	bool indices[max_range] = { false };
//	constexpr int index_zero = max_range / 2;
//
//	int answer = 0;
//	{
//		int sum, sub;
//		for (int i = 0; i < n; ++i)
//		{
//			for (int j = i - 1; j >= 0; --j)
//			{
//				sub = nums[i] - nums[j];
//				if (sub < -200000 || 200000 < sub)
//					continue;
//
//				if (indices[index_zero + sub] == true)
//				{
//					answer++;
//					break;
//				}
//			}
//
//			for (int j = 0; j <= i; ++j)
//			{
//				sum = nums[i] + nums[j];
//				if (-200000 <= sum && sum <= 200000)
//					indices[index_zero + sum] = true;
//			}
//		}
//	}
//
//	cout << answer << "\n";
//
//	return 0;
//}