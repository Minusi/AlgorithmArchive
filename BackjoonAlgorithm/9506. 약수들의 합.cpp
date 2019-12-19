//#include <iostream>
//#include <cstring>
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
//	int Array[100000];
//	int ArrIdx;
//	while (1)
//	{
//		int N;
//		cin >> N;
//		if (N == -1)
//			break;
//
//		memset(Array, 0, sizeof(Array));
//		ArrIdx = 0;
//
//		for (int i = 1; i < N; ++i)
//		{
//			if (N % i == 0)
//			{
//				Array[ArrIdx] = i;
//				ArrIdx++;
//			}
//		}
//
//		int Result = 0;
//		for (int i = 0; i < ArrIdx; ++i)
//			Result += Array[i];
//
//		if (Result == N)
//		{
//			cout << N << " = ";
//			for (int i = 0; i < ArrIdx; ++i)
//			{
//				cout << Array[i];
//				if (i != ArrIdx - 1)
//					cout << " + ";
//			}
//			cout << "\n";
//		}
//		else
//			cout << N << " is NOT perfect.\n";
//	}
//
//	return 0;
//}