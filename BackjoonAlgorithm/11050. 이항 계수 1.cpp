//#include <iostream>
//using namespace std;
//
//
//
//unsigned int Binomial(unsigned int N, unsigned int K)
//{
//	if (K > N) return 0;
//	
//	if (N == 1)			return 1;
//	else if (K == 1)	return N;
//	else				return Binomial(N - 1, K - 1) + Binomial(N - 1, K);
//}
//
//
//
//int main()
//{
//	unsigned int N, K;
//	cin >> N >> K;
//	/* 유효성 검사 */
//	if (N < 1 || N > 10 || K > N)
//	{
//		return -1;
//	}
//	
//
//
//	cout << Binomial(N, K) << endl;
//	return 0;
//}