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
//void Merge(int(&Array)[1000000], unsigned int AStart, unsigned int AEnd, unsigned int BEnd)
//{
//	/* 유효성 검사 */
//	unsigned int BStart = AEnd + 1;
//	if (AStart > AEnd || BStart > BEnd)
//	{
//		return;
//	}
//
//
//	
//	const unsigned int Size = (AEnd - AStart + 1) + (BEnd - BStart + 1);
//	int* MergeArray = new int[Size];
//	unsigned int mIndex = 0;
//
//
////#ifdef DEBUG
////
////	cout << "Input : " << endl;
////	cout << "A : ";
////	Print(Array, AStart, AEnd + 1);
////	cout << "B : ";
////	Print(Array, BStart, BEnd + 1);
////#endif // DEBUG
//
//	unsigned int i = AStart;
//	unsigned int j = BStart;
//
//	/* 병합 과정 */
//	while (mIndex < Size)
//	{
//		/* 두 배열의 인덱스를 비교하여 작은 수를 머지 배열에 추가 */
//		if (Array[i] <= Array[j])
//		{
//			MergeArray[mIndex++] = Array[i];
//			++i;
//		}
//		else
//		{
//			MergeArray[mIndex++] = Array[j];
//			++j;
//		}
//		
//		/* 두 배열 중 한 배열이 끝났다면 나머지 배열을 몰아넣는다. */
//		if (i > AEnd)
//		{
//			while (j <= BEnd)
//			{
//				MergeArray[mIndex++] = Array[j];
//				++j;
//			}
//		}
//		if (j > BEnd)
//		{
//			while (i <= AEnd)
//			{
//				MergeArray[mIndex++] = Array[i];
//				++i;
//			}
//		}
//	}
//
//	mIndex = 0;
//	for (unsigned int i = AStart; i <= BEnd; ++i)
//	{
//		Array[i] = MergeArray[mIndex++];
//	}
//
////#ifdef DEBUG
////	cout << "Output : ";
////	Print(Array, AStart, BEnd + 1);
////#endif // DEBUG
//}
//
//
//
//void MergeSort(int(&Array)[1000000], unsigned int Start, unsigned int End)
//{
//	if (Start < End)
//	{
//		unsigned int Mid = (End + Start) / 2;
//		MergeSort(Array, Start, Mid);
//		MergeSort(Array, Mid + 1, End);
//		Merge(Array, Start, Mid, End);
//	}
//}
//
//
//
//int main()
//{
//	ios::sync_with_stdio(false);
//
//	unsigned int N;
//	cin >> N;
//	if (N == 0 || N > 1000000)	return -1;
//
//	int Array[1000000];
//
//
//
//	/* 데이터 입력 구간 */
//#ifdef DEBUG
//	vector<int> Datas;
//	Datas.reserve(N);
//	GenerateTestData<int>(N, 0, N, Datas);
//	
//
//	/* 시간 측정 */
//#ifdef DEBUG
//	chrono::system_clock::time_point Start = chrono::system_clock::now();
//#endif // DEBUG
//
//	//Print<int>(Datas.data(), 0, Datas.size());
//	for (unsigned int i = 0; i < N; ++i)
//	{
//		Array[i] = Datas[i];
//	}
//#else
//	for (unsigned int i = 0; i < N; ++i)
//	{
//		cin >> Array[i];
//	}
//#endif // DEBUG
//
//
//
//
//	/* 머지 소트 */
//	MergeSort(Array, 0, N - 1);
//
//
//#ifdef DEBUG
//	chrono::nanoseconds Time = chrono::system_clock::now() - Start;
//	cout << "경과 시간 : " << Time.count() / 1000000000.0 << endl;
//#endif // DEBUG
//
//	/* 출력 */
//	for (unsigned int i = 0; i < N; ++i)
//	{
//		cout << Array[i] << '\n';
//	}
//	return 0;
//}