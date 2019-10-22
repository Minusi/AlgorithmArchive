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
//	int QueryNum[100], Str[100], Ball[100];
//	for(int i = 0; i < N; ++i)
//		cin >> QueryNum[i] >> Str[i] >> Ball[i];
//
//
//
//	int Query[3];
//	int Digit[3];
//	int Answer = 0;
//	for (int i = 123; i <= 987; ++i)
//	{
//		Digit[0] = i / 100;
//		Digit[1] = (i / 10) % 10;
//		Digit[2] = i % 10;
//		
//		if (Digit[0] == Digit[1] || Digit[1] == Digit[2] || Digit[2] == Digit[0]
//			|| Digit[0] == 0 || Digit[1] == 0 || Digit[2] == 0)
//			continue;
//
//		int NumS = 0, NumB = 0;
//		for(int Loop = 0; Loop < N; ++Loop)
//		{
//			NumS = NumB = 0;
//
//			Query[0] = QueryNum[Loop] / 100 % 10;
//			Query[1] = (QueryNum[Loop] / 10) % 10;
//			Query[2] = QueryNum[Loop] % 10;
//
//			//cout << Query[0] << "\t" << Query[1] << "\t" << Query[2] << "\n";
//			for (int i = 0; i < 3; ++i)
//			{
//				for (int j = 0; j < 3; ++j)
//				{
//					if (Digit[i] == Query[j])
//					{
//						if (i == j)
//							NumS++;
//						else
//							NumB++;
//					}
//				}
//			}
//
//			if (NumS != Str[Loop] || NumB != Ball[Loop])
//				break;
//
//			if (Loop == N - 1)
//			{
//				//cout << i << "\n";
//				Answer++;
//			}
//		}
//	}
//
//	cout << Answer << "\n";
//	return 0;
//}