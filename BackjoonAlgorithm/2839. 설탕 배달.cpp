//#include <iostream>
//using namespace std;
//
////#define DEBUG
//#ifdef DEBUG
//#include <chrono>
//#include "Utility.h"
//
//chrono::system_clock::time_point Start;
//chrono::nanoseconds Time;
//#endif
//
//
//
//int main()
//{
//	ios::sync_with_stdio(false);
//	cin.tie(NULL);
//
//	int N;
//	cin >> N;
//
//	int X = -1, Y = 0;
//	for (int i = 0; i <= N; i += 5)
//	{
//		/* 3X + 5Y = N을 프로그램으로 구현 */
//		int Temp = N - i;
//		if (Temp % 3 == 0)
//		{
//			X = i / 5;
//			Y = Temp / 3;
//		}
//	}
//
//	//cout << "Temp : " << Temp << ", X : " << X << ", Y : " << Y << "\n";
//	cout << X + Y << "\n";
//
//	return 0;
//}