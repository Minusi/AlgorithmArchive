//#include <iostream>
//#include <cmath>
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
//	constexpr int num_mushrooms = 10;
//	int mushrooms[num_mushrooms];
//	for (int i = 0; i < num_mushrooms; ++i)
//#ifdef _DEBUG
//	{
//		mushrooms[i] = GenerateSingleTestData<int>(10, 20);
//		cout << mushrooms[i] << "\n";
//	}
//#else
//		cin >> mushrooms[i];
//#endif // _DEBUG
//
//
//	int score = 0;
//	constexpr int desired = 100;
//
//	for (int i = 0; i < num_mushrooms; ++i)
//	{
//		if (abs(desired - score) >= abs(desired - (score + mushrooms[i])))
//			score += mushrooms[i];
//		else
//			break;
//	}
//	cout << score << "\n";
//	return 0;
//}