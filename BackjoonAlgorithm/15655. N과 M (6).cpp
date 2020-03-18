//#include <iostream>
//using namespace std;
//
//#ifdef _DEBUG
//#include "Utility.h"
//#endif // _DEBUG
//
//
//void less_bubble(int(&num)[8], int size)
//{
//	for (int i = 0; i < size - 1; ++i)
//	{
//		for (int j = i; j < size; ++j)
//		{
//			if (num[i] > num[j])
//			{
//				int temp = num[i];
//				num[i] = num[j];
//				num[j] = temp;
//			}
//		}
//	}
//}
//
//void Permutation(int(&num)[8], int n, int m, int loop_start, int count)
//{
//	static bool check[8];
//	if (count == m)
//	{
//		for (int i = 0; i < n; ++i)
//			if (check[i] == true)
//				cout << num[i] << " ";
//		cout << "\n";
//		return;
//	}
//	
//	for (int i = loop_start; i < n; ++i)
//	{
//		if (check[i] != false)
//			continue;
//
//		check[i] = true;
//		Permutation(num, n, m, i + 1, count + 1);
//		check[i] = false;
//	}
//}
//int main()
//{
//	ios::sync_with_stdio(false);
//	cin.tie(NULL);
//
//	int n, m;
//	cin >> n >> m;
//	
//	int num[8];
//	for (int i = 0; i < n; ++i)
//		cin >> num[i];
//	
//	less_bubble(num, n);
//	Permutation(num, n, m, 0, 0);
//	return 0;
//}