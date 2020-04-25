//#include <iostream>
//#include <vector>
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
//#ifdef _DEBUG
//	n = 500000;
//	int ii = n;
//#else
//	cin >> n;
//#endif // _DEBUG
//
//
//	vector<pair<int, int>> towers;
//	{
//		int input;
//#ifdef _DEBUG
//		input = ii;
//		ii--;
//#else
//		cin >> input;
//#endif // _DEBUG
//
//		cout << 0 << " ";
//		towers.emplace_back(1, input);
//
//		int left, right, mid;
//		pair<int,int> candidate;
//		int store_mid;
//		for (int i = 2; i <= n; ++i)
//		{
//			store_mid = -1;
//#ifdef _DEBUG
//			input = ii;
//			ii--;
//#else
//			cin >> input;
//#endif // _DEBUG
//			
//			left = 0;
//			right = towers.size() - 1;
//			while (left <= right)
//			{
//				mid = (left + right) / 2;
//				if (towers[mid].second == input)
//				{
//					candidate = towers[mid];
//					store_mid = mid;
//					break;
//				}
//				else if (towers[mid].second > input)
//				{
//					store_mid = mid;
//					candidate = towers[mid];
//					left = mid + 1;
//				}
//				else if (towers[mid].second < input)
//				{
//					right = mid - 1;
//				}
//			}
//
//			// if has no intersect then clear and push this tower
//			if (store_mid == -1)
//			{
//				towers.clear();
//				cout << 0 << " ";
//			}
//			else
//			{
//				cout << towers[store_mid].first << " ";
//				if (towers.begin() + store_mid + 1 != towers.end())
//					towers.erase(towers.begin() + store_mid + 1, towers.end());
//			}
//			towers.emplace_back(i, input);
//		}
//	}
//	cout << "\n";
//
//
//	return 0;
//}