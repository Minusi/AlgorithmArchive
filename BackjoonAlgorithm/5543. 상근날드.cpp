//#include <iostream>
//using namespace std;
//
//#ifdef _DEBUG
//#include "Utility.h"
//#endif // _DEBUG
//
//
//
//int main()
//{
//	ios::sync_with_stdio(false);
//	cin.tie(NULL);
//
//	int burger[3];
//	int beverage[2];
//	for (int i = 0; i < 3; ++i)
//		cin >> burger[i];
//
//	for (int j = 0; j < 2; ++j)
//		cin >> beverage[j];
//
//	int set_price[3][2];
//	int min_set_price = 987654321;
//	for (int i = 0; i < 3; ++i)
//	{
//		for (int j = 0; j < 2; ++j)
//		{
//			set_price[i][j] = burger[i] + beverage[j] - 50;
//			if (min_set_price > set_price[i][j])
//				min_set_price = set_price[i][j];
//		}
//	}
//	cout << min_set_price << "\n";
//
//
//	return 0;
//}