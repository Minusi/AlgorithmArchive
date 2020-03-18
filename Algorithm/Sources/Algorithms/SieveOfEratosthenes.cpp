//#include <iostream>
//#include <cstring>
//#include <cmath>
//using namespace std;
//
//
//
//int main()
//{
//	/* 에라토스테네스의 체를 실행할 구간 */
//	unsigned int Limit;
//	cin >> Limit;
//	
//	/* 소수인지 아닌지를 저장하기 위한 배열 */
//	bool* IsPrimes = new bool[Limit];
//	memset(IsPrimes, true, sizeof(bool) * Limit);
//	IsPrimes[0] = false;
//	IsPrimes[1] = false;
//
//	/* 에라토스테네스의 체 */
//	for (unsigned int i = 2; i <= sqrt(Limit); ++i)
//	{
//		/* 현재 수가 소수이면 배수들을 전부 합성수로 표기합니다. */
//		if (IsPrimes[i] == true)
//		{
//			for (unsigned int j = i * 2; j < Limit; j = j + i)
//			{
//				IsPrimes[j] = false;
//			}
//		}
//	}
//
//	return 0;
//}