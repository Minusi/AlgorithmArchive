//#include <iostream>
//#include <cmath>
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
//	int Sum = 0;
//	int Num = 1;
//	int NumDigit = 1;
//	int PrevNum = 1;
//	while (Num <= N)
//	{
//		if (Num * 10 > N)
//		{
//			Sum += NumDigit * (abs(N - Num)+ 1);
//			break;
//		}
//
//		Num *= 10;
//		Sum += NumDigit * (Num - PrevNum);
//		NumDigit++;
//		PrevNum = Num;
//
//	}
//	cout << Sum << "\n";
//	return 0;
//}