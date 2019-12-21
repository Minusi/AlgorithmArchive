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
//
//	string Player;
//	int alphabet[26] = { 0 };
//	for (int i = 0; i < N; ++i)
//	{
//		cin >> Player;
//		alphabet[Player[0] - 'a']++;
//	}
//
//	const string PREDAJA = "PREDAJA";
//	string Result;
//	for (int i = 0; i < 26; ++i)
//		if (alphabet[i] >= 5)
//			Result += 'a' + i;
//
//	cout << (Result.size() > 0 ? Result : PREDAJA) << "\n";
//
//	return 0;
//}