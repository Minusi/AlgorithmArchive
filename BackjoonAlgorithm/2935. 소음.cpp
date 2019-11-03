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
//	string A, B;
//	char Operator;
//	cin >> A >> Operator >> B;
//
//	if (Operator == '+')
//	{
//		size_t ALen = A.length(), BLen = B.length();
//		int Offset;
//		if (A >= B)
//		{
//			Offset = ALen - BLen;
//			A[Offset] = (A[Offset] - '0') + B[0];
//			cout << A << "\n";
//			return 0;
//		}
//		else
//		{
//			Offset = BLen - ALen;
//			B[Offset] = (B[Offset] - '0') + A[0];
//			cout << B << "\n";
//			return 0;
//		}
//	}
//	else if (Operator == '*')
//	{
//		B.erase(B.begin());
//		A += B;
//		cout << A << "\n";
//		return 0;
//	}
//
//
//	return 0;
//}