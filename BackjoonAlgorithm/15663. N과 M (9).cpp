//#include <iostream>
//using namespace std;
//
//#ifdef _DEBUG
//#include "Utility.h"
//#endif // _DEBUG
//
//
//constexpr int max_n = 8;
//constexpr int max_digit = 10001;
//void non_duplicated_sequence(int(&counter)[max_digit], int n, int m, int count = 0)
//{
//	static int sequence[max_n] = { 0 };
//	if (m == count)
//	{
//		for (int i = 0; i < m; ++i)
//			cout << sequence[i] << " ";
//		cout << "\n";
//		return;
//	}
//
//	for (int i = 0; i < max_digit; ++i)
//	{
//		if (counter[i] > 0)
//		{
//			counter[i]--;
//			sequence[count] = i;
//			non_duplicated_sequence(counter, n, m, count + 1);
//			sequence[count] = 0;
//			counter[i]++;
//		}
//	}
//}
//
//int main()
//{
//	ios::sync_with_stdio(false);
//	cin.tie(NULL);
//
//	int n, m;
//	cin >> n >> m;
//
//	int counter[max_digit] = { 0 };
//	for (int i = 0; i < n; ++i)
//	{
//		int num;
//		cin >> num;
//		counter[num]++;
//	}
//
//	non_duplicated_sequence(counter, n, m, 0);
//	return 0;
//}