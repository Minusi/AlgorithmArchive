//#include <iostream>
//#include <cmath>
//#include <vector>
//#include <algorithm>
//using namespace std;
//
//
//
//vector<int> GetDivisors(unsigned int N)
//{
//	vector<int> Result;
//	for (int i = 1; i <= sqrt(N) + 1; ++i)
//	{
//		if (N % i == 0)
//		{
//			Result.push_back(i);
//
//			if (i != sqrt(N))
//			{
//				Result.push_back(N / i);
//			}
//		}
//	}
//	sort(Result.begin(), Result.end());
//	return Result;
//}
//
//
//
//int main()
//{
//	int N;
//	cin >> N;
//	if (N > 500)	return -1;
//
//	
//	int Count2 = 0;
//	int Count5 = 0;
//
//	for (int i = 1; i <= N; ++i)
//	{
//		int Temp = i;
//		while (Temp % 2 == 0)
//		{
//			Count2++;
//			Temp = Temp / 2;
//		}
//		while (Temp % 5 == 0)
//		{
//			Count5++;
//			Temp = Temp / 5;
//		}
//	}
//
//	cout << min(Count2, Count5) << endl;
//	
//	return 0;
//}