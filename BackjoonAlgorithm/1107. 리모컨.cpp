//#include <iostream>
//#include <cmath>
//#include <algorithm>
//#include <vector>
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
//#define INF 987654321
//int DigitToNum(int (&x)[6], int Length)
//{
//	int Number = 0;
//	for (int i = 0; i < Length; ++i)
//		Number = Number * 10 + x[i];
//	return Number;
//}
//
//static int NChannel = 100;
//int Remote(int Channel, vector<int>& Available, int (&Digit)[6], int Length)
//{
//	static int Max = abs(Channel - 100);
//	if (Length >= 6)
//		return INF;
//	
//	for (int it = 0; it < Available.size(); ++it)
//	{
//		Digit[Length] = Available[it];
//
//		int CurrChannel = DigitToNum(Digit, Length + 1);
//		int Size = CurrChannel > 0 ? (int)log10(CurrChannel) + 1 : 1;
//		int Diff = Size + abs(Channel - CurrChannel);
//
//		if (Diff < Max)
//		{
//			//cout << "it : " << it << "\n";
//			//cout << "CurrChannel : " << CurrChannel << "\n";
//			//cout << "Size : " << Size << "\n";
//			//cout << "Max : " << Max << "\n";
//			Max = Diff;
//			NChannel = CurrChannel;
//		}
//
//		Remote(Channel, Available, Digit, Length + 1);
//	}
//
//	return Max;
//}
//
//int main()
//{
//	ios::sync_with_stdio(false);
//	cin.tie(NULL);
//
//	int N, M;
//	cin >> N >> M;
//	vector<int> Available = { 0,1,2,3,4,5,6,7,8,9 };
//
//	int Buffer;
//	for (int i = 0; i < M; ++i)
//	{
//		cin >> Buffer;
//		Available.erase(find(Available.begin(), Available.end(), Buffer));
//	}
//	
//	int Digit[6] = { 0,0,0,0,0,0 };
//	cout << Remote(N, Available, Digit, 0) << "\n";
//	return 0;
//}