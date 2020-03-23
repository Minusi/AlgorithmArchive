//#include <iostream>
//using namespace std;
//
//#ifdef _DEBUG
//#include "Utility.h"
//#endif // _DEBUG
//
//
//
//int gcd(int lhs, int rhs)
//{
//	while (rhs != 0)
//	{
//		int remainder = lhs % rhs;
//		lhs = rhs;
//		rhs = remainder;
//	}
//
//	return lhs;
//}
//
//int main()
//{
//	ios::sync_with_stdio(false);
//	cin.tie(NULL);
//
//	int n, m;
//	cin >> n >> m;
//
//	int divisor = gcd(n, m);
//	n /= divisor;
//	m /= divisor;
//
//	cout << (m - 1) * divisor << "\n";
//	return 0;
//}