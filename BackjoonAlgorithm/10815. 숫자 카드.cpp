//#include <iostream>
//#include <algorithm>
//using namespace std;
//
//#ifdef _DEBUG
//#include "Utility.h"
//#endif // _DEBUG
//
//
//constexpr int nmax = 500000;
//int main()
//{
//	ios::sync_with_stdio(false);
//	cin.tie(NULL);
//
//	int n;
//	cin >> n;
//
//	int cards[nmax];
//	for (int i = 0; i < n; ++i)
//		cin >> cards[i];
//	sort(cards + 0, cards + n);
//
//	int m;
//	cin >> m;
//
//	{
//		int check;
//		int left, right;
//		int mid;
//		for (int i = 0; i < m; ++i)
//		{
//			cin >> check;
//
//			left = 0;
//			right = n - 1;
//
//			bool find = false;
//			while (left <= right)
//			{
//				mid = (left + right) / 2;
//				if (cards[mid] == check)
//				{
//					find = true;
//					break;
//				}
//				else if (cards[mid] > check)
//					right = mid - 1;
//				else
//					left = mid + 1;
//			}
//
//			cout << (find ? 1 : 0) << " ";
//		}
//	}
//	return 0;
//}