//#include <iostream>
//using namespace std;
//
////#define DEBUG
//#ifdef DEBUG
//#include <iomanip>
//#include <chrono>
//#include "Utility.h"
//
//chrono::system_clock::time_point Start;
//chrono::nanoseconds Time;
//#endif
//
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
//	/* i번째 자리에 j 숫자가 오는 경우의 수를 담는 배열 */
//	int DP[1001][10] = { 0 };
//	for (int i = 0; i < 10; ++i)
//		DP[1][i] = 1;
//
//	for (int i = 2; i <= N; ++i)
//		for (int j = 0; j < 10; ++j)
//			for (int k = 0; k <= j; ++k)
//				DP[i][j] = (DP[i][j] + DP[i - 1][k]) % 10007;
//
//	int Answer = 0;
//	for (int i = 0; i < 10; ++i)
//		Answer += DP[N][i];
//
//#ifdef DEBUG
//	for (int i = 0; i <= N; ++i)
//	{
//		for (int j = 0; j < 10; ++j)
//		{
//			cout << setw(5) << DP[i][j] << "\t";
//		}
//		cout << "\n";
//	}
//#endif // DEBUG
//
//	cout << Answer % 10007 << "\n";
//	return 0;
//}