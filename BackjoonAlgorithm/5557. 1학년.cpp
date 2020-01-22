//#include <iostream>
//using namespace std;
//
//#ifdef DEBUG
//#include "Utility.h"
//#endif // DEBUG
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
//	int Numbers[101];
//	for (int i = 1; i <= N; ++i)
//		cin >> Numbers[i];
//
//	long long DP[100][21] = { 0 };
//	DP[1][Numbers[1]] = 1;
//	for (int i = 2; i < N; ++i)
//	{
//		for (int j = 0; j <= 20; ++j)
//		{
//			int Add = j + Numbers[i];
//			int Sub = j - Numbers[i];
//			if (Add >= 0 && Add <= 20)	DP[i][Add] += DP[i - 1][j];
//			if (Sub >= 0 && Sub <= 20)	DP[i][Sub] += DP[i - 1][j];
//		}
//	}
//	
//	//for (int i = 1; i < N; ++i)
//	//{
//	//	for (int j = 0; j <= 20; ++j)
//	//	{
//	//		cout.width(3);
//	//		cout << DP[i][j] << "";
//	//	}
//	//	cout << "\n";
//	//}
//	cout << DP[N-1][Numbers[N]] << "\n";
//
//	return 0;
//}