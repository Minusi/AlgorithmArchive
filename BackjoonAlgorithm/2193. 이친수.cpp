//#include <iostream>
//using namespace std;
//
////#define DEBUG
//#ifdef DEBUG
//#include <chrono>
//#include "Utility.h"
//
//chrono::system_clock::time_point Start;
//chrono::nanoseconds Time;
//#endif
//
///*
// *	n = 0일 때와 n = 1일 떄 각각 1, 10 밖에 없으므로 dp[1] = dp[2] = 1이다.
// *	n > 3에 대해서 dp[n-1]의 구성 요소 중 0으로 끝나는 수는 다음 자리 수에서 0과 1 둘다 가능하지만
// *	1로 끝나는 수는 다음 자리 수에서 반드시 0이 되어야 이친수를 만족한다.
// *	결과적으로 dp[n]에서
// *	- 0으로 끝나는 수 : dp[n-1]에서 0으로 끝나는 수의 개수 + dp[n-1]에서 1로 끝나는 수의 개수
// *	- 1로 끝나는 수 : dp[n-1]에서 0으로 끝나는 수의 개수
// *	로 정리할 수 있다. 이것을 기반으로 경험적으로 수를 대입해보면, 결국 피보나치 수를 이루게 된다.
// *	따라서 피보나치에 대한 문제와 같다고 할 수 있다.
// */
//
//
//int main()
//{
//	ios::sync_with_stdio(false);
//	cin.tie(NULL);
//
//	int N;
//	cin >> N;
//
//	long long dp[91];
//	dp[1] = dp[2] = 1;
//	for (int i = 3; i <= N; ++i)
//		dp[i] = dp[i - 1] + dp[i - 2];
//
//	cout << dp[N] << "\n";
//	return 0;
//}