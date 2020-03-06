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
//	int price, change;
//	cin >> price;
//	
//	constexpr int yens[6] = { 500, 100, 50, 10, 5, 1 };
//	constexpr int hold = 1000;
//	change = hold - price;
//
//	int numYens = 0;
//	while (change != 0)
//	{
//		for (int i = 0; i < 6; ++i)
//		{
//			while(change >= yens[i])
//			{
//				change -= yens[i];
//				numYens += 1;
//			}
//		}
//	}
//
//	cout << numYens << "\n";
//	return 0;
//}