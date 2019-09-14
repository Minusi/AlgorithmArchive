//#include <iostream>
//#include <iomanip>
//using namespace std;
//
//
//
//int main()
//{
//	unsigned int N, K;
//	cin >> N >> K;
//	/* 유효성 검사 */
//	if (N < 1 || N > 1000 || K > N)
//	{
//		return -1;
//	}
//
//
//
//	/* dp 배열 */
//	long long dp[1001][1001] = { 0 };
//
//	for (unsigned int i = 1; i <= N; ++i)
//	{
//		for (unsigned int j = 0; j <= i; ++j)
//		{
//			if (i == 1)					dp[i][j] = 1;
//			else if (j == 0 || j == i)	dp[i][j] = 1;
//			else if (j == 1)			dp[i][j] = i;
//			else						dp[i][j] = (dp[i - 1][j - 1] + dp[i - 1][j]) % 10007;
//		}
//	}
//
//	//for (int i = N-5; i <= N; ++i)
//	//{
//	//	for (int j = 0; j <= N/2; ++j)
//	//	{
//	//		cout << dp[i][j] << " ";
//	//	}
//	//	cout << endl;
//	//}
//	
//	cout << dp[N][K] << endl;
//	return 0;
//}