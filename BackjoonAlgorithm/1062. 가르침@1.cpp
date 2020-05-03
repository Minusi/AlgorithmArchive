//#include <iostream>
//#include <string>
//using namespace std;
//
//#ifdef _DEBUG
//#include "Utility.h"
//#endif // _DEBUG
//
//
//int n, k, words[55], learn, answer;
//void backtracking(int num, int start)
//{
//	if (num == k)
//	{
//		int word_available = 0;
//		for (int i = 0; i < n; ++i)
//		{
//			if ((words[i] & ~learn) == 0)
//				word_available++;
//		}
//
//		if (answer < word_available)
//			answer = word_available;
//		return;
//	}
//
//	for (char i = 'a' + start; i <= 'z'; ++i)
//	{
//		if (i == 'a' || i == 'c' || i == 'i' || i == 'n' || i == 't')
//			continue;
//		learn |= (1 << (i - 'a'));
//		backtracking(num + 1, i - 'a' + 1);
//		learn &= ~(1 << (i - 'a'));
//	}
//	return;
//}
//int main()
//{
//	ios::sync_with_stdio(false);
//	cin.tie(NULL);
//
//	cin >> n >> k;
//	if (k < 5)
//	{
//		cout << 0 << "\n";
//		return 0;
//	}
//
//	for (int i = 0; i < n; ++i)
//	{
//		string input;
//		cin >> input;
//
//		for (const auto& it : input)
//			words[i] |= (1 << (it - 'a'));
//	}
//
//	learn |= (1 << ('a' - 'a'));
//	learn |= (1 << ('c' - 'a'));
//	learn |= (1 << ('i' - 'a'));
//	learn |= (1 << ('n' - 'a'));
//	learn |= (1 << ('t' - 'a'));
//
//	backtracking(5, 0);
//	cout << answer << "\n";
//	return 0;
//}