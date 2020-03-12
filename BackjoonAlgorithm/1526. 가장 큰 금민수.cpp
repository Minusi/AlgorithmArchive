//#include <iostream>
//#include <cmath>
//using namespace std;
//
//#ifdef _DEBUG
//#include "Utility.h"
//#endif // _DEBUG
//
//
//
//int main()
//{
//	ios::sync_with_stdio(false);
//	cin.tie(NULL);
//
//	int n;
//	cin >> n;
//
//	int answer = 4;
//	for (int i = 0; i <= n; ++i)
//	{
//		bool num_gm = true;
//
//		int factor = pow(10, (int)log10(i));
//		while (factor > 0)
//		{
//			int digit = (i / factor) % 10;
//			if (digit != 4 && digit != 7)
//			{
//				num_gm = false;
//				break;
//			}
//			factor /= 10;
//		}
//		
//		if (num_gm)
//			answer = i;
//	}
//
//	cout << answer << "\n";
//	return 0;
//}