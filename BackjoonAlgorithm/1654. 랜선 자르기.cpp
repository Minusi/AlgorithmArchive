//#include <iostream>
//using namespace std;
//
//#ifdef _DEBUG
//#include "Utility.h"
//#endif // _DEBUG
//
//
//
//constexpr int kmax = 10000;
//long long cut_lancables(int(&lancables)[kmax], int k, unsigned int stride)
//{
//	long long sum = 0;
//	for (int i = 0; i < k; ++i)
//		sum += lancables[i] / stride;
//
//	return sum;
//}
//int main()
//{
//	ios::sync_with_stdio(false);
//	cin.tie(NULL);
//
//	int k, n;
//	cin >> k >> n;
//
//	int lancables[kmax];
//	int max_length = 0;
//	for (int i = 0; i < k; ++i)
//	{
//		cin >> lancables[i];
//		if (max_length < lancables[i])
//			max_length = lancables[i];
//	}
//
//	int length = -1;
//	long long num_cables = -1;	// for debug
//	{
//		long long left = 1;
//		long long right = max_length;
//		long long mid;
//		while (left <= right)
//		{
//			mid = (left + right) / 2;
//			long long sum = cut_lancables(lancables, k, mid);
//			if (sum >= n)
//			{
//				length = mid;
//				num_cables = sum;
//				left = mid + 1;
//			}
//			else
//			{
//				right = mid - 1;
//			}
//		}
//	}
//
//	cout << length << "\n";
//
//	return 0;
//}