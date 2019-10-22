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
//	int Height, Ascend, Descend;
//	cin >> Ascend >> Descend >> Height;
//
//	int Day = 0;
//	Height -= Ascend;
//	Day++;
//	
//	int AscPerDays = Ascend - Descend;
//	Day += Height / AscPerDays + (Height % AscPerDays == 0 ? 0 : 1);
//
//	cout << Day << "\n";
//	
//
//	return 0;
//}