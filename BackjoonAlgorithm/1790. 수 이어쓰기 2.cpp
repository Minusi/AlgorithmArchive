//#include <iostream>
//#include <string>
//#include <cmath>
//using namespace std;
//
//#ifdef _DEBUG
//#include "Utility.h"
//#endif // _DEBUG
//
//
//
//int main()
//{
//	ios::sync_with_stdio(false);
//	cin.tie(NULL);
//
//	int n, k;
//	cin >> n >> k;
//
//	constexpr int max_limit = 10;
//	long long index_log10[max_limit] = { 0 };
//	size_t size_log10 = 1;
//	index_log10[0] = 1;
//	for (int i = 1; i <= (int)log10(n); ++i, ++size_log10)
//		index_log10[i] = index_log10[i - 1] + ((long long)pow(10, i) - (long long)pow(10, i - 1)) * i;
//
//	long long end_sequence = index_log10[size_log10 - 1] + (n - pow(10, size_log10 - 1)) * ((long long)log10(n) + 1) + (long long)log10(n);
//	index_log10[size_log10++] = end_sequence + 1;
//
//	int index = -1;
//	for (int i = 0; i < size_log10; ++i)
//	{
//		if (k < index_log10[i])
//		{
//			index = i;
//			break;
//		}
//	}
//	if (index == -1)
//	{
//		cout << -1 << "\n";
//		return 0;
//	}
//	if(index > 0)	index--;
//
//	long long dist = k - index_log10[index];
//	int number = pow(10, index) + (dist / (index + 1));
//	int offset = dist % (index + 1);
//
//	string result = to_string(number);
//	cout << result[offset] << "\n";
//	return 0;
//}