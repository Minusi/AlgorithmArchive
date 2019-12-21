//#include <iostream>
//#include <string>
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
//	string SeatInfo;
//	cin >> SeatInfo;
//
//	/* 맨 왼쪽 자리 하나는 무조건 주어지므로 +1로 초기화 */
//	int NumCupHolders = 1;
//	int NumPerson = 0;
//
//	for (size_t i = 0; i < SeatInfo.size(); ++i)
//	{
//		if (SeatInfo[i] == 'S')
//		{
//			NumCupHolders++;
//			NumPerson++;
//		}
//		else if (SeatInfo[i] == 'L')
//		{
//			NumCupHolders++;
//			NumPerson += 2;
//			++i;
//		}
//	}
//
//	cout << (NumCupHolders > NumPerson ? NumPerson : NumCupHolders) << "\n";
//	
//
//	return 0;
//}