//#include <iostream>
//#include <algorithm>
//using namespace std;
//
//#ifdef _DEBUG
//#include "Utility.h"
//#endif // _DEBUG
//
//
//
//constexpr int nmax = 1000000;
//long long cut_trees(int(&trees)[nmax], int n, int height)
//{
//	long long sum = 0;
//	for (int i = 0; i < n; ++i)
//		sum += (trees[i] >= height ? trees[i] - height : 0);
//
//	return sum;
//}
//
//int main()
//{
//	ios::sync_with_stdio(false);
//	cin.tie(NULL);
//
//	unsigned int n, m;
//	cin >> n >> m;
//	if (n == 0)	return 0;
//
//	int trees[nmax];
//	for (int i = 0; i < n; ++i)
//		cin >> trees[i];
//	sort(trees + 0, trees + n);
//	
//	// start bisearch
//	long long num_log = 0;		// for debug
//	int height = -1;
//	{
//		int left = 0;
//		int right = trees[n - 1];
//		int mid; 
//		while (left <= right)
//		{
//			mid = (left + right) / 2;
//			long long temp;
//			if ((temp = cut_trees(trees, n, mid)) >= m)
//			{
//				num_log = temp;
//				height = mid;
//				left = mid + 1;
//			}
//			else
//			{
//				right = mid - 1;
//			}
//		}
//	}
//	
//	cout << height << "\n";
//
//
//	return 0;
//}