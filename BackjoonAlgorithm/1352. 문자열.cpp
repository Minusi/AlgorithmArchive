//#include <iostream>
//using namespace std;
//
//#ifdef _DEBUG
//#include "Utility.h"
//#endif // _DEBUG
//
//
//
//constexpr int max_len = 100;
//static bool result = false;
//void backtracking(const int n, const int diff_alpha, int start, int surplus, int count)
//{
//	static int pos[15] = { 0 };
//	if (diff_alpha == count)
//	{
//
//		int sum = 0;
//		for (int i = 1; i <= diff_alpha; ++i)
//			sum += pos[i];
//
//		if (sum != n)
//			return;
//
//#ifdef _DEBUG
//		Print(pos, 1, diff_alpha + 1);
//		cout << "surplus : " << surplus << "\n";
//#endif // _DEBUG
//
//		char str[max_len + 2] = { 0 };
//		int num[15] = { 0 };
//		size_t num_index = 1;
//		for (int i = 1; i <= diff_alpha; ++i)
//		{
//			str[pos[i]] = 'A' - 1 + i;
//			num[i] += 1;
//		}
//
//		while (num[num_index] >= pos[num_index])
//			num_index += 1;
//
//		for (int i = 1; i <= n; ++i)
//		{
//			if (str[i] == '\0' && num[num_index] < pos[num_index])
//			{
//				str[i] = 'A' - 1 + num_index;
//				num[num_index] += 1;
//				if (num[num_index] == pos[num_index])
//					num_index += 1;
//			}
//		}
//		cout << str + 1 << "\n";
//		result = true;
//		return;
//	}
//	
//
//	for (int i = start + surplus; i >= start; --i)
//	{
//		//if (i > n / 2)
//		//	continue;
//
//		pos[count + 1] = i;
//		surplus += start - 1;
//		if(pos[count + 1] + surplus <= n)
//			backtracking(n, diff_alpha, i + 1, surplus, count + 1);
//		if (result == true)
//			return;
//
//		surplus -= start - 1;
//		pos[count + 1] = 0;
//	}
//}
//int main()
//{
//	ios::sync_with_stdio(false);
//	cin.tie(NULL);
//
//	int n;
//	cin >> n;
//
//	int diff_alpha = 0;
//	for(int i = 1; i <= n; i *= 2)
//		diff_alpha += 1;
//
//	backtracking(n, diff_alpha, 1, 0, 0);
//	if (result == false)
//		cout << -1 << "\n";
//	return 0;
//}