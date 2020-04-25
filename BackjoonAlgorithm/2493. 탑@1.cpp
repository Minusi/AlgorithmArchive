//#include <iostream>
//#include <utility>
//using namespace std;
//
//#ifdef _DEBUG
//#include "Utility.h"
//#endif // _DEBUG
//
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
//
//	pair<int, int> towers[nmax];
//	size_t size_tower = 0;
//	{
//		int input;
//		cin >> input;
//
//		cout << 0 << " ";
//		towers[size_tower++] = { 1, input };
//
//		for (int i = 2; i <= n; ++i)
//		{
//			cin >> input;
//
//			int store_mid = -1;
//			int j = 0;
//			for (; input <= towers[j].second && j < size_tower; ++j, ++store_mid);
//			
//
//			// if has no intersect then clear and push this tower
//			if (store_mid == -1)
//			{
//				size_tower = 0;
//				cout << 0 << " ";
//			}
//			else
//			{
//				cout << towers[j - 1].first << " ";
//				size_tower = j;
//			}
//			towers[size_tower++] = make_pair(i, input);
//
//			//for (int i = 0; i < size_tower; ++i)
//			//	cout << towers[i].first << "," << towers[i].second << " ";
//			//cout << "\n";
//		}
//	}
//	cout << "\n";
//
//
//	return 0;
//}