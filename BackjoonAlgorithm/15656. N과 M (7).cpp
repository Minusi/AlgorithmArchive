//#include <iostream>
//using namespace std;
//
//#ifdef _DEBUG
//#include "Utility.h"
//#endif // _DEBUG
//
//
//void less_bubble(int(&num)[8], int n)
//{
//	for (int i = 0; i < n - 1; ++i)
//	{
//		for (int j = i + 1; j < n; ++j)
//		{
//			if (num[i] > num[j])
//			{
//				int temp = num[i];
//				num[i] = num[j];
//				num[j] = temp;
//			}
//		}
//	}
//	
//}
//
//int n, m;
//void duplicated_permutation(int(&num)[8])
//{
//	static int check[8] = { 0 };
//	static size_t check_size = 0;
//	if (check_size == m)
//	{
//		for (int i = 0; i < m; ++i)
//			cout << num[check[i]] << " ";
//		cout << "\n";
//		return;
//	}
//
//	for (int i = 0; i < n; ++i)
//	{
//		check[check_size++] = i;
//		duplicated_permutation(num);
//		check[check_size--] = 0;
//	}
//}
//int main()
//{
//	ios::sync_with_stdio(false);
//	cin.tie(NULL);
//
//	cin >> n >> m;
//	int num[8];
//	for (int i = 0; i < n; ++i)
//		cin >> num[i];
//
//
//	less_bubble(num, n);
//	duplicated_permutation(num);
//	return 0;
//}