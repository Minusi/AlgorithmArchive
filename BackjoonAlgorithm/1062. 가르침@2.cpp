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
//constexpr int INF = 987654321;
//constexpr int NUM_ALPHABET = 26;
//constexpr int nmax = 50;
//
//int n, k;
//int answer = 0;
//
//bool inverse = false;
//
//int num_char;
//int word[nmax];
//int check = 0;
//void backtracking(int start, int count = 0)
//{
//	if (count == num_char)
//	{
//		int num_word = 0;
//		for (int i = 0; i < n; ++i)
//		{
//			if ((word[i] & ~check) == 0)
//				num_word++;
//		}
//
//		if (answer < num_word)
//			answer = num_word;
//		return;
//	}
//
//	for (int i = start; i < NUM_ALPHABET; ++i)
//	{
//		char character = i + 'a';
//		if (character == 'a' || character == 'c' || character == 't' ||
//			character == 'i' || character == 'n')
//			continue;
//		if (inverse == true)
//		{
//			check &= ~(1 << i);
//			backtracking(i + 1, count + 1);
//			check |= (1 << i);
//		}
//		else
//		{
//			check |= (1 << i);
//			backtracking(i + 1, count + 1);
//			check &= ~(1 << i);
//		}
//	}
//}
//int main()
//{
//	ios::sync_with_stdio(false);
//	cin.tie(NULL);
//
//	cin >> n >> k;
//
//	if (k < 5)
//	{
//		cout << 0 << "\n";
//		return 0;
//	}
//
//	string input;
//	for (int i = 0; i < n; ++i)
//	{
//		cin >> input;
//		for (const auto it : input)
//		{
//			if (it == 'a' || it == 'c' || it == 't' || it == 'i' || it == 'n')
//				continue;
//
//			word[i] |= (1 << (it - 'a'));
//		}
//	}
//
//	
//	if (k - 5 >= NUM_ALPHABET - k)
//	{
//		inverse = true;
//		check = 0xFFFFFFFF;
//		num_char = NUM_ALPHABET - k;
//		backtracking(0, 0);
//	}
//	else
//	{
//		inverse = false;
//		check = 0X00000000;
//		num_char = k - 5;
//		backtracking(0, 0);
//	}
//
//	cout << answer << "\n";
//	return 0;
//}