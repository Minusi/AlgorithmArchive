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
//	int m, n;
//	cin >> m >> n;
//
//	int num_turn = 0;
//	
//	if (n <= 2)
//	{
//		cout << num_turn << "\n";
//		return 0;
//	}
//
//	while (true)
//	{
//		m -= 1;
//		if (m <= 0)
//			break;
//		num_turn++;
//
//		n -= 1;
//		if (n <= 0)
//			break;
//		num_turn++;
//	}
//
//	cout << num_turn << "\n";
//	return 0;
//}