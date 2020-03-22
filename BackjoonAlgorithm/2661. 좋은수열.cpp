//#include <iostream>
//#include <cstring>
//using namespace std;
//
//#ifdef _DEBUG
//#include "Utility.h"
//#endif // _DEBUG
//
//
//constexpr int max_len = 80;
//void find_good_sequence(int n, int count = 0)
//{
//	static int sequence[max_len] = { 0 };
//	static bool result = false;
//	if (count == n)
//	{
//		for (int i = 0; i < count; ++i)
//			cout << sequence[i];
//		cout << "\n";
//		result = true;
//		return;
//	}
//
//
//	for (int i = 1; i <= 3; ++i)
//	{
//		sequence[count] = i;
//
//		bool subseq = false;
// 		for (int j = 1; j <= (count + 1) / 2; ++j)
//		{
//			if (memcmp(&sequence[count - 2 * j + 1], &sequence[count - j + 1], sizeof(int) * j) == 0)
//			{
//				subseq = true; 
//				break;
//			}
//		}
//		if (subseq == false) find_good_sequence(n, count + 1);
//		if (result) return;
//		sequence[count] = 0;
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
//	find_good_sequence(n);
//
//	return 0;
//}