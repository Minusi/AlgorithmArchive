//#include <iostream>
//#include <algorithm>
////#include "Utility.h"
//using namespace std;
//
//
//
//int main()
//{
//	unsigned int N;
//	cin >> N;
//
//	/* 유효성 검사 */
//	if (N > 50 || N == 0)
//	{
//		return -1;
//	}
//
//	int Divisors[50] = { 0 };
//	for (int i = 0; i < (int)N; ++i)
//	{
//		cin >> Divisors[i];
//
//		/* 유효성 검사 */
//		if (Divisors[i] < 2 || Divisors[i]> 1000000)
//			return -1;
//	}
//
//	sort(Divisors, Divisors + N);
//	//Print(Divisors, 0, N);
//
//	cout << Divisors[0] * Divisors[N-1] << endl;
//	return 0;
//}