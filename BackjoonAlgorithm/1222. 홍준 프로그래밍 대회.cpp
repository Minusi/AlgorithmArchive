//#include <iostream>
//#include <algorithm>
//using namespace std;
//
//int main()
//{
//	int N;
//	cin >> N;
//
//	long long Univ[2000001] = { 0 };
//	int Att;
//	long long Result = 0;
//	for (int i = 0; i < N; ++i)
//	{
//		cin >> Att;
//		Univ[Att]++;
//	}
//
//	for (int i = 1; i <= 2000000; ++i)
//	{
//		long long Count = 0;
//		for (int j = i; j <= 2000000; j += i)
//			Count += Univ[j];
//
//		if (Count > 1)
//			Result = max(Result, Count * i);
//	}
//	
//
//	cout << Result << "\n";
//	return 0;
//}
