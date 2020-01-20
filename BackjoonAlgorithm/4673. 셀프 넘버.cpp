//#include <iostream>
//#include <cmath>
//#include <algorithm>
//using namespace std;
//
////#include "Utility.h"
//
//
//
//int d(int n)
//{
//	int sum = n;
//	int div = pow(10, static_cast<int>(log10(n)));
//	while (div > 0)
//	{
//		sum += (n / div) % 10;
//		div /= 10;
//	}
//
//	return sum;
//}
//
//
//
//int main()
//{
//	ios::sync_with_stdio(false);
//	cin.tie(NULL);
//
//	bool SelfNumber[10001];
//	fill(SelfNumber + 1, SelfNumber + 10001, 1);
//
//	for (int i = 1; i <= 10000; ++i)
//	{
//		if (SelfNumber[i] == false)	continue;
//		cout << i << "\n";
//
//		int Num = i;
//		while ((Num = d(Num)) <= 10000)
//			SelfNumber[Num] = false;
//	}
//
//	return 0;
//}