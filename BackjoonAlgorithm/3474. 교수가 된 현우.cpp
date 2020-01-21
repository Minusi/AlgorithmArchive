//#include <iostream>
//using namespace std;
//
//#ifdef DEBUG
//#include "Utility.h"
//#endif // DEBUG
//
//
//
//int main()
//{
//	ios::sync_with_stdio(false);
//	cin.tie(NULL);
//
//	int T;
//	cin >> T;
//
//	while (T--)
//	{
//		int N;
//		cin >> N;
//
//		long long Pow5 = 5;
//		long long Answer = 0;
//		while (Pow5 <= N)
//		{
//			Answer += static_cast<int>(N / Pow5);
//			Pow5 *= 5;
//		}
//
//		cout << Answer << "\n";
//	}
//	return 0;
//}