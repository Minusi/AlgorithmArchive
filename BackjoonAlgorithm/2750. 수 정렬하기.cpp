//#include <iostream>
//using namespace std;
//
//
//
///* 0번째 인덱스부터 N번째 인덱스까지 정렬해주는 버블 소트 알고리즘 */
//void BubbleSort(int(&Array)[1000], unsigned int N)
//{
//	/* 버블 소트 */
//	for (unsigned int i = 0; i < N; ++i)
//	{
//		for (unsigned int j = 1; j < N - i; ++j)
//		{
//			int Temp;
//			/* 스왑 */
//			if (Array[j] < Array[j - 1])
//			{
//				Temp = Array[j - 1];
//				Array[j - 1] = Array[j];
//				Array[j] = Temp;
//			}
//		}
//	}
//
//}
//
///* 0번째 인덱스부터 N번째 인덱스까지 정렬해주는 셀렉션 소트 알고리즘 */
//void SelectionSort(int(&Array)[1000], unsigned int N)
//{
//	/* 셀렉션 소트 */
//	for (unsigned int i = 0; i < N; ++i)
//	{
//		for (unsigned int j = i; j < N; ++j)
//		{
//			int Temp;
//			if (Array[i] > Array[j])
//			{
//				Temp = Array[i];
//				Array[i] = Array[j];
//				Array[j] = Temp;
//			}
//		}
//	}
//}
//
///* 0번째 인덱스부터 N번재 인덱스까지 정렬해주는 인설션 소트 알고리즘 */
//void InsertionSort(int(&Array)[1000], int N)
//{
//	/* 인설션 소트 */
//	for (unsigned int i = 1; i < N; ++i)
//	{
//		unsigned int j = i;
//		int Temp;
//		while (j > 0 && Array[j - 1] > Array[j])
//		{
//			Temp = Array[j];
//			Array[j] = Array[j - 1];
//			Array[j - 1] = Temp;
//			--j;
//		}
//	}
//}
//
//
//int main()
//{
//	unsigned int N;
//	cin >> N;
//	if (N > 1000)	return -1;
//	
//	
//	int Array[1000];
//	for (unsigned int i = 0; i < N; ++i)
//	{
//		cin >> Array[i];
//	}
//
//
//	InsertionSort(Array, N);
//
//
//	for (unsigned int i = 0; i < N; ++i)
//	{
//		cout << Array[i] << endl;
//	}
//	return 0;
//}