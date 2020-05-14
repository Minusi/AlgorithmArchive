//#include <iostream>
//using namespace std;
//
//#ifdef _DEBUG
//#include "Utility.h"
//#endif // _DEBUG
//
//
//int SumBaseN(int number, int base)
//{
//	int sum = 0;
//
//	int temp = number;
//	while (temp > 0)
//	{
//		sum += temp % base;
//		temp /= base;
//	}
//
//	return sum;
//}
//int main()
//{
//	ios::sync_with_stdio(false);
//	cin.tie(NULL);
//
//	int sumBase10 = 0;
//	int sumBase12 = 0;
//	int sumBase16 = 0;
//	for (int i = 1000; i < 10000; ++i)
//	{
//		//cout << "i : " << i << "\n";
//		sumBase10 = SumBaseN(i, 10);
//		//cout << "sumBase10 : " << sumBase10 << "\n";
//		sumBase12 = SumBaseN(i, 12);
//		//cout << "sumBase12 : " << sumBase12 << "\n";
//		sumBase16 = SumBaseN(i, 16);
//		//cout << "sumBase16 : " << sumBase16 << "\n";
//
//		if ((sumBase10 == sumBase12) && (sumBase10 == sumBase16))
//			cout << i << "\n";
//	}
//
//	return 0;
//}