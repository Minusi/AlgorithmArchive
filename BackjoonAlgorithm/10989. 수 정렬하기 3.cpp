//#include <iostream>
//using namespace std;
//
////#define DEBUG
//#ifdef DEBUG
//#include "Utility.h"
//#include <chrono>
//#endif // DEBUG
//
//
//
//int main()
//{
//	ios::sync_with_stdio(false);
//
//	int N;
//	cin >> N;
//	if (N <= 0 || N > 10000000)	return -1;
//
//
//
//	int Array[10001] = { 0 };
//	int Num;
//#ifdef DEBUG
//	chrono::system_clock::time_point Start = chrono::system_clock::now();
//
//	for (int i = 0; i < N; ++i)
//	{
//		Num = GenerateSingleTestData<int>(1, 10000);
//		//cout << "NUM : " << Num << endl;
//		Array[Num] += 1;
//	}
//
//#else
//	for (int i = 0; i < N; ++i)
//	{
//		cin >> Num;
//		Array[Num] += 1;
//	}
//#endif // DEBUG
//
//#ifdef DEBUG
//	chrono::nanoseconds Time = chrono::system_clock::now() - Start;
//	cout << "경과시간 : " << Time.count() / 1000000000.0 << endl;
//#endif // DEBUG
//	for (int i = 0; i <= 10000; ++i)
//	{
//		for (int j = 0; j < Array[i]; ++j)
//		{
//			cout << i << '\n';
//		}
//	}
//
//
//
//	return 0;
//}