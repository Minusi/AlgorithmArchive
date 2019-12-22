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
//	int E, F, C;
//	cin >> E >> F >> C;
//
//	int Empty = E + F;
//	int NumExchange = 0;
//
//	int Quotient;
//	int Remainder;
//	while (Empty >= C)
//	{
//		Quotient= Empty / C;
//		Remainder = Empty % C;
//
//		NumExchange += Quotient;
//		Empty = Quotient + Remainder;
//	}
//
//	cout << NumExchange << "\n";
//
//	return 0;
//}