//#include <iostream>
//#include <cstring>
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
//	int M, N;
//	cin >> M >> N;
//
//	bool IsPrime[1000001];
//	memset(IsPrime, true, sizeof(IsPrime));
//	IsPrime[0] = IsPrime[1] = false;
//
//	for (int i = 2; i <= N; ++i)
//	{
//		if (IsPrime[i] == false)
//			continue;
//
//		for (int j = i * 2; j <= N; j += i)
//			IsPrime[j] = false;
//	}
//
//	for (int i = M; i <= N; ++i)
//	{
//		if (IsPrime[i] == true)
//			cout << i << "\n";
//	}
//	return 0;
//}