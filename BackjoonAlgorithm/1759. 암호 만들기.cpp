//#include <iostream>
//using namespace std;
//
//#ifdef _DEBUG
//#include "Utility.h"
//#endif // _DEBUG
//
//
//constexpr int max_size = 17;
//
//void less_bubble(char(&chars)[max_size], size_t size)
//{
//	for (int i = 1; i < size; ++i)
//	{
//		for (int j = i + 1; j <= size; ++j)
//		{
//			if (chars[i] > chars[j])
//			{
//				char temp = chars[i];
//				chars[i] = chars[j];
//				chars[j] = temp;
//			}
//		}
//	}
//}
//
//void find_case(char(&chars)[max_size], int l, int c, int start, int count)
//{
//	static int indices[max_size] = { 0 };
//	if (count == l)
//	{
//		static char output[max_size - 1] = { 0 };
//		int num_consonant = 0;
//		int num_vowel = 0;
//		for (int i = 1; i <= l; ++i)
//		{
//			output[i - 1] = chars[indices[i]];
//			if (output[i - 1] == 'a' || output[i - 1] == 'e' || output[i - 1] == 'i'
//				|| output[i - 1] == 'o' || output[i - 1] == 'u')
//				num_vowel += 1;
//			else
//				num_consonant += 1;
//		}
//		if (num_consonant >= 2 && num_vowel >= 1)
//			cout << output << "\n";
//
//		return;
//	}
//
//	for (int i = start; i <= c; ++i)
//	{
//		indices[count + 1] = i;
//		find_case(chars, l, c, i + 1, count + 1);
//		indices[count + 1] = 0;
//	}
//}
//
//
//
//int main()
//{
//	ios::sync_with_stdio(false);
//	cin.tie(NULL);
//
//	int l, c;
//	cin >> l >> c;
//	char chars[max_size] = { 0 };
//	for (int i = 1; i <= c; ++i)
//		cin >> chars[i];
//
//	less_bubble(chars, c);
//
//	find_case(chars, l, c, 1, 0);
//
//	return 0;
//}