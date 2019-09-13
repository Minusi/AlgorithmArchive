//#include <iostream>
//#include <algorithm>
//#include <functional>
//using namespace std;
////#define TEST
//
//
//
//int main()
//{
//	unsigned int N;
//	cin >> N;
//
//	int Rope[100000] = { 0 };
//	for (unsigned int i = 0; i < N; ++i)
//	{
//		cin >> Rope[i];
//
//		/* 유효성 검사 */
//		if (Rope[i] > 10000)
//		{
//			return -1;
//		}
//	}
//
//	sort(Rope, Rope + N, greater<int>());
//	
//#ifdef TEST
//	int count = 0;
//	for (unsigned int i = 0; i < N; ++i)
//	{
//		count++;
//		cout << Rope[i] << " ";
//
//		if (count % 10 == 0)
//		{
//			cout << endl;
//		}
//	}
//	
//	if (count % 10 != 0)
//	{
//		cout << endl;
//	}
//#endif // TEST
//
//
//	int MaxWeight = -1;						// 최대 중량
//	int CurrentWeight = -1;					// 현재 중량
//	//bool UsedRope[100001] = { 0 };			// 사용된 로프 확인을 위한 배열
//	unsigned int NumSelected = 0;			// 사용된 로프 수
//
//	for (int i = 0; i < N; ++i)
//	{
//		//if (UsedRope[Rope[i]] == false)
//		//{
//			CurrentWeight = Rope[i] * (NumSelected + 1);
//
//
//			/* 현재 중량이 최대 중량보다 낮으면, 탈출합니다. */
//			if (CurrentWeight > MaxWeight)
//			{
//				MaxWeight = CurrentWeight;
//			}
//			NumSelected++;
//			//UsedRope[Rope[i]] = true;
//		//}
//	}
//
//#ifdef TEST
//	cout << "NumSelected : " << NumSelected << endl;
//#endif // TEST
//
//	cout << MaxWeight << endl;
//	
//	return 0;
//}
//
///* 오해한 원인 : 전수 탐색을 해야할 줄은 몰랐다. 
// * 따라서 100 , 49, 48 과 같은 경우에 대해, 49까지
// * 검사를 수행하고, 100을 최대값으로 제출하는 실수
// * 를 범함. 
// */
//
///* 오해한 원인2 : 중복 검사는 필요없었다.
// * 같은 중량의 로프가 입력될 수 있었기 때문;;;
// */