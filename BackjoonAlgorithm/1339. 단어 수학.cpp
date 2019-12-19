//#include <iostream>
//#include <cstring>
//#include <algorithm>
//#include <functional>
//#include <string>
//using namespace std;
//
////#define DEBUG
//#ifdef DEBUG
//#include "Utility.h"
//#endif // DEBUG
//
////#define PRINT
//
//int main()
//{
//	ios::sync_with_stdio(false);
//	cin.tie(NULL);
//
//	int N;
//	cin >> N;
//
//	string Buffer;
//	int Alphabet[26] = { 0 };
//	for (int i = 0; i < N; ++i)
//	{
//#ifdef DEBUG
//		Buffer.clear();
//		for (int i = 0; i < 3; ++i)
//			Buffer += GenerateSingleTestData<int>('A', 'E');
//
//		cout << Buffer << "\n";
//#else
//		cin >> Buffer;
//#endif // DEBUG
//
//		int Exponent = 1;
//		for (auto it = Buffer.rbegin(); it != Buffer.rend(); ++it)
//		{
//			Alphabet[*it - 'A'] += Exponent;
//			Exponent *= 10;
//		}
//	}
//
//#ifdef PRINT
//	for (int i = 0; i < 26; ++i)
//		if (Alphabet[i] != 0)
//			cout << (char)('A' + i) << " : " << Alphabet[i] << "\n";
//#endif // PRINT
//
//
//
//	int AlphaSort[26];
//	memcpy(AlphaSort, Alphabet, sizeof(AlphaSort));
//	sort(AlphaSort, AlphaSort + 26, greater<int>());
//
//#ifdef PRINT
//	for (int i = 0; i < 26; ++i)
//		if (AlphaSort[i] != 0)
//			cout << AlphaSort[i] << "\n";
//#endif // PRINT
//
//
//	int Value = 9;
//	bool bVisit[26] = { false };
//	for (int i = 0; i < 26; ++i)
//	{
//		for (int j = 0; j < 26 && Value >= 0; ++j)
//		{
//			if (AlphaSort[i] == Alphabet[j] && bVisit[j] == false)
//			{
//				Alphabet[j] *= Value;
//				bVisit[j] = true;
//				Value--;
//				break;
//			}
//		}
//	}
//
//#ifdef PRINT
//	for (int i = 0; i < 26; ++i)
//		if (Alphabet[i] != 0)
//			cout << (char)('A' + i) << " : " << Alphabet[i] << "\n";
//#endif // PRINT
//
//
//
//	int Result = 0;
//	for (int i = 0; i < 26; ++i)
//		Result += Alphabet[i];
//
//	cout << Result << "\n";
//	return 0;
//}