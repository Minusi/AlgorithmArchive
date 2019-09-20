//#include <iostream>
//using namespace std;
//
////#define DEBUG
//#ifdef DEBUG
//#include "Utility.h"
//#include <chrono>
//#endif // DEBUG
//
//
//
//void Heapify(int(&Array)[1000000], unsigned int Size, unsigned int Index)
//{
//	int LChild = Index * 2 + 1;
//	int RChild = LChild + 1;
//
////#ifdef DEBUG
////	cout << "Index : " << Index << ", Size : " << Size << ", LChild : " << LChild << ", RChild : " << RChild << endl;
////#endif // DEBUG
//
//	if (LChild < (int)Size)
//	{
//		int MaxChild;
//		/* 비교 대상 탐색 */
//		if (LChild >= (int)Size)		MaxChild = RChild;
//		else if (RChild >= (int)Size)	MaxChild = LChild;
//		else							MaxChild = Array[LChild] >= Array[RChild] ? LChild : RChild;
//
//		/* 자식이 더 큰 경우 */
//		int Temp;
//		if (Array[Index] < Array[MaxChild])
//		{
//			Temp = Array[Index];
//			Array[Index] = Array[MaxChild];
//			Array[MaxChild] = Temp;
//			
////#ifdef DEBUG
////			cout << "Change : " << Array[MaxChild] << " <-> " << Array[Index] << endl;
////			cout << "Output : ";
////			Print(Array, 0, Size);
////			cout << endl;
////#endif // DEBUG
//
//			Heapify(Array, Size, MaxChild);
//		}
//	}
//}
//
//
//
//void HeapSort(int(&Array)[1000000], unsigned int Size)
//{
//	if (Size <= 0)
//	{
//		return;
//	}
//
//	/* 힙의 중간 인덱스, 중간 인덱스까지 자식을 가진다. */
//	int Mid = Size / 2 - 1;
//	for (int i = Mid; i >= 0; --i)
//	{
//		Heapify(Array, Size, i);
//	}
//
//
//		
////#ifdef DEBUG
////	cout << "SIze(" << Size << ") : ";
////	Print(Array, 0, Size);
////#endif // DEBUG
//
//
//
//	for (int i = Size - 1; i > 0; --i)
//	{
//		/* 루트와 마지막 인덱스 자리 교환 */
//		int Temp;
//		Temp = Array[0];
//		Array[0] = Array[i];
//		Array[i] = Temp;
//		Heapify(Array, i, 0);
//	}
//	//HeapSort(Array, Size - 1);
//}
//
//
//int main()
//{
//	ios::sync_with_stdio(false);
//
//
//
//	unsigned int N;
//	cin >> N;
//	if (N == 0 || N > 1000000)	return -1;
//
//	int Array[1000000];
//#ifdef DEBUG
//	vector<int> Datas;
//	Datas.reserve(N);
//	GenerateTestData<int>(N, 0, 1000000, Datas);
//
//	/* 시작 시간 */
//	chrono::system_clock::time_point Start = chrono::system_clock::now();
//
//	/* 데이터 삽입 */
//	for (unsigned int i = 0; i < N; ++i)
//	{
//		Array[i] = Datas[i];
//	}
//	//cout << "Main : "; 
//	//Print(Array, 0, N);
//	
//#else
//	/* 데이터 삽입 */
//	for (unsigned int i = 0; i < N; ++i)
//	{
//		cin >> Array[i];
//	}
//#endif // DEBUG
//
//
//	HeapSort(Array, N);
//	
//
//
//#ifdef DEBUG
//	/* 경과 시간 측정 */
//	chrono::nanoseconds Time = chrono::system_clock::now() - Start;
//	cout << "경과 시간 : " << Time.count() / 1000000000.0 << endl;
//	Print(Array, 0, N);
//#else
//	for (unsigned int i = 0; i < N; ++i)
//	{
//		cout << Array[i] << '\n';
//	}
//#endif // DEBUG
//
//}