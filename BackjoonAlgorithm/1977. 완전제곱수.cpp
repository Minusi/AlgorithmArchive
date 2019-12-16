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
//	int M, N;
//#ifdef DEBUG
//	M = GenerateSingleTestData<int>(1, 10000);
//	N = GenerateSingleTestData<int>(M, 10000);
//	cout << M << "\t" << N << "\n";
//#else
//	cin >> M >> N;
//#endif // DEBUG
//
//
//	int Array[102];
//	for (int i = 1; i <= 101; ++i)
//		Array[i] = i * i;
//
//	int Min = 0, Max = 0;
//	int bMinFlag = false, bMaxFlag = false;
//	for (int i = 1; i <= 101; ++i)
//	{
//		if (bMinFlag == false && M <= Array[i])
//		{
//			Min = i;
//			bMinFlag = true;
//		}
//		
//		if (bMaxFlag == false && N < Array[i])
//		{
//			Max = i-1;
//			bMaxFlag = true;
//			break;
//		}
//	}
//
//	int Sum = 0;
//	for (int i = Min; i <= Max; ++i)
//		Sum += Array[i];
//
//	if (Sum == 0)
//		cout << -1 << "\n";
//	else
//	{
//		cout << Sum << "\n";
//		cout << Array[Min] << "\n";
//	}
//	return 0;
//}