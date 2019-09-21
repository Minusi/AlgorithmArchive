//#include <iostream>
//using namespace std;
//
////#define DEBUG
//#ifdef DEBUG
//#include <chrono>
//#include "Utility.h"
//#endif
//
//
//
//int main()
//{
//	ios::sync_with_stdio(false);
//
//	int N;
//#ifdef DEBUG
//	cin >> N;
//	//N = GenerateSingleTestData<int>(1, 20);
//	//cout << N << endl;
//#else
//	cin >> N;
//#endif // DEBUG
//
//	int ADeck[500000];
//	size_t ASize = -1;
//
//
//
//	for (int i = 0; i < N; ++i)
//	{
//		ADeck[i] = i + 1;
//	}
//	ASize = N;
//
//
//	
//	bool AbandonWithStart = true;
//	while (ASize > 1)
//	{
//		int Index = 0;
//		if (AbandonWithStart)
//		{
//			/* 시작 카드가 버려지므로 2번째 카드부터 담는다. */
//			for (int i = 1; i < ASize; i = i + 2)
//			{
//				ADeck[Index] = ADeck[i];
//				Index++;
//			}
//
//			/* 홀수 개면 다음 덱의 첫 카드는 버리면 안된다. */
//			if (ASize % 2 == 1)
//			{
//				AbandonWithStart = false;
//			}
//
//			ASize /= 2;
//
//#ifdef DEBUG
//			Print(ADeck, 0, N);
//#endif // DEBUG
//
//		}
//		else
//		{
//			/* 시작 카드가 뒤로 가므로 처음 카드부터 담는다. */
//			for (int i = 0; i < ASize; i = i + 2)
//			{
//				ADeck[Index] = ADeck[i];
//				Index++;
//			}
//
//			/* 홀수 개면 다음 덱의 첫 카드는 버려야 한다.*/
//			if (ASize % 2 == 1)
//			{
//				AbandonWithStart = true;
//			}
//
//			ASize = (ASize + 1) / 2;
//
//#ifdef DEBUG
//			Print(ADeck, 0, N);
//#endif // DEBUG
//		}
//	}
//	
//	cout << ADeck[0] << '\n';
//	return 0;
//}