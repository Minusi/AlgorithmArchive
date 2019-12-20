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
//	int A, B, C;
//	cin >> A >> B >> C;
//
//	int Sum = A * B * C;
//	int Digit[10] = { 0 };
//
//#ifdef DEBUG
//	cout << Sum << "\n";
//#endif // DEBUG
//
//	while (Sum)
//	{
//		Digit[Sum % 10]++;
//		Sum /= 10;
//	}
//
//	for (int i = 0; i < 10; ++i)
//		cout << Digit[i] << "\n";
//	
//
//	return 0;
//}