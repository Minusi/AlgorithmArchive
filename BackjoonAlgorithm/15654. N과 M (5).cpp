//#include <iostream>
//#include <cmath>
//#include <algorithm>
//using namespace std;
//
//#ifdef _DEBUG
//#include "Utility.h"
//#endif // _DEBUG
//
//
//
//void Permutation(int(&array)[8], int start, int end, int n, int m)
//{
//	if (start == end)
//	{
//		static short check[100000][8] = { 0 };
//		static size_t check_size = 0;
//
//		// sum of sequence 
//		short sequence[8] = { 0 };
//		for (int i = 0; i < m; ++i)
//			sequence[i] = array[i];
//
//		// check duplicates
//		for (int i = 0; i < check_size; ++i)
//		{
//			bool duplicated = true;
//			for (int j = 0; j < m; ++j)
//			{
//				if (check[i][j] != sequence[j])
//				{
//					duplicated = false;
//					break;
//				}
//			}
//			
//			if (duplicated)
//				return;
//		}
//		
//		// store preset
//		for (int i = 0; i < m; ++i)
//			check[check_size][i] = sequence[i];
//		check_size += 1;
//
//		// print sequencial
//		for (int i = 0; i < m; ++i)
//			cout << array[i] << " ";
//		cout << "\n";
//		return;
//	}
//
//
//	int min;
//	int min_idx;
//	uint8_t flag = 0x00;
//	for (int i = start; i <= end; ++i)
//	{
//		min = 0x7FFFFFFF;
//		min_idx = -1;
//		for (int j = start; j <= end; ++j)
//		{
//			if (min > array[j] && ((1 << j) & flag) == 0)
//			{
//				min = array[j];
//				min_idx = j;
//			}
//		}
//		flag |= (1 << min_idx);
//
//		if (min_idx < 0)
//			continue;
//
//		int temp = array[start];
//		array[start] = array[min_idx];
//		array[min_idx] = temp;
//		Permutation(array, start + 1, end, n, m);
//		temp = array[start];
//		array[start] = array[min_idx];
//		array[min_idx] = temp;
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
//	int num[8] = { 0 };
//	for (int i = 0; i < n; ++i)
//	{
//		cin >> num[i];
//	}
//	Permutation(num, 0, n - 1, n, m);
//	return 0;
//}