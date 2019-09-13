//#include <iostream>
//#include <algorithm>
//#include <functional>
//using namespace std;
//
//
//
//int main()
//{
//	unsigned int N;
//	cin >> N;
//
//	unsigned int K;
//	cin >> K;
//
//	
//	
//	/* 유효성 검사 */
//	if (N > 10 || K > 100000000)
//	{
//		return -1;
//	}
//
//	/* 코인 종류 배열 */
//	unsigned int Coins[10] = { 0 };
//	for (unsigned int i = 0; i < N; ++i)
//	{
//		cin >> Coins[i];
//	}
//	sort(Coins, Coins + N, greater<unsigned int>());
//
//
//
//	/* 잔여 가치 */
//	int ResidualValue = K;
//	/* 사용한 코인 개수 */
//	unsigned int NumCoinUsed = 0;
//	for (unsigned int i = 0; i < N; ++i)
//	{
//		/* 현재 코인 가치가 0이라면, 알고리즘을 종료합니다. */
//		if (Coins[i] == 0)
//		{
//			break;
//		}
//
//		/* 현재 코인 가치가 잔여 가치보다 크면 다음 코인 가치를 평가합니다. */
//		if (Coins[i] > ResidualValue)
//		{
//			continue;
//		}
//
//		/* 잔여 가치가 현재 코인 가치보다 작아질 때까지 반복합니다. */
//		for (unsigned int j = 0; ; ++j)
//		{
//			ResidualValue -= Coins[i];
//			NumCoinUsed++;
//
//			if (Coins[i] > ResidualValue)
//			{
//				break;
//			}
//		}
//	}
//
//	cout << NumCoinUsed << endl;
//	return 0;
//}