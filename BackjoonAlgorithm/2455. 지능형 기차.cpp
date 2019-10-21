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
//	int Max = -1;
//	int NumPassenger = 0;
//	
//	int NumGetOff;
//	int NumRide;
//	for (int i = 0; i < 4; ++i)
//	{
//		cin >> NumGetOff;
//		cin >> NumRide;
//
//		//NumGetOff = GenerateSingleTestData<int>(0, 5);
//		//NumRide = GenerateSingleTestData<int>(0, 10);
//		//cout << NumGetOff << " " << NumRide << "\n";
//
//		NumPassenger = NumPassenger - NumGetOff + NumRide;
//		Max = max(Max, NumPassenger);
//	}
//
//	cout << Max << "\n";
//	return 0;
//}