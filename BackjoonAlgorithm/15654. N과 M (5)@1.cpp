//#include <iostream>	
//using namespace std;
//
//// less<int> bubble_sort
//void bubble_sort(int n, int(&num)[8])
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
//}
//
//void Permutation(int (&num)[8], int n, int count, int m)
//{
//	static int check[8];
//	if (count > m)
//	{
//		for (int i = 1; i <= m; ++i)
//			for (int j = 0; j < n; ++j)
//				if (check[j] == i)
//					cout << num[j] << " ";
//		cout << "\n";
//		return;
//	}
//
//	for (int i = 0; i < n; ++i)
//	{
//		if (check[i] == 0)
//		{
//			check[i] = count;
//			Permutation(num, n, count + 1, m);
//			check[i] = 0;
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
//	int num[8];
//	for (int i = 0; i < n; ++i)
//		cin >> num[i];
//
//	bubble_sort(n, num);
//	Permutation(num, n, 1, m);
//	return 0;
//}