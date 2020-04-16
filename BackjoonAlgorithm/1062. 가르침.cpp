//#include <iostream>
//#include <cstring>
//#include <string>
//using namespace std;
//
//#ifdef _DEBUG
//#include "Utility.h"
//#endif // _DEBUG
//
//
//
//constexpr int nmax = 50;
//constexpr int num_alphabet = 26;
//
//int answer = 0;
//string words[nmax];
//bool check[num_alphabet] = { false };
//void backtraking(int n, int mk, int count, bool checkflag)
//{
//	if (count == mk)
//	{
//		int num_read = 0;
//		for (int i = 0; i < n; ++i)
//		{
//			bool can_read = true;
//			for (const auto& it : words[i])
//			{
//				if (check[it - 'a'] != checkflag)
//				{
//					can_read = false;
//					break;
//				}
//			}
//			if (can_read)	num_read++;
//		}
//	}
//}
//
//int main()
//{
//	ios::sync_with_stdio(false);
//	cin.tie(NULL);
//
//	int n, k;
//	cin >> n >> k;
//
//	for (int i = 0; i < n; ++i)
//		cin >> words[i];
//
//	if (k >= 5)
//	{
//		bool checkflag;
//		int mk;
//		if (k - 5 >= 0 || k - 5 <= 10)
//		{
//			mk = k - 5;
//			checkflag = true;
//		}
//		else
//		{
//			mk = num_alphabet - k;
//			checkflag = false;
//			memset(check, true, sizeof(check));
//		}
//
//		check['a' - 'a'] = checkflag;
//		check['c' - 'a'] = checkflag;
//		check['i' - 'a'] = checkflag;
//		check['n' - 'a'] = checkflag;
//		check['t' - 'a'] = checkflag;
//	}
//
//	cout << answer << "\n";
//
//	return 0;
//}