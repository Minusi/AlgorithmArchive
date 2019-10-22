//#include <iostream>
//#include <algorithm>
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
//	int Dwarfs[9];
//	int SumHeight = 0;
//	for (int i = 0; i < 9; ++i)
//	{
//		cin >> Dwarfs[i];
//		SumHeight += Dwarfs[i];
//	}
//	sort(Dwarfs + 0, Dwarfs + 9);
//
//	int Sum7Height = 0;
//	bool bSuccess = false;
//	for (int i = 0; i < 9; ++i)
//	{
//		if (bSuccess)	break;
//
//		for (int j = i + 1; j < 9; ++j)
//		{
//			if (bSuccess)	break;
//			Sum7Height = SumHeight;
//			Sum7Height -= (Dwarfs[i] + Dwarfs[j]);
//
//			/* 7명의 난쟁이 총합이 100인 경우, 출력하고 탈출합니다. */
//			if (Sum7Height == 100)
//			{
//				for (int k = 0; k < 9; ++k)
//				{
//					if (k == i || k == j)
//						continue;
//					
//					cout << Dwarfs[k] << "\n";
//					bSuccess = true;
//				}
//			}
//		}
//	}
//
//	return 0;
//}