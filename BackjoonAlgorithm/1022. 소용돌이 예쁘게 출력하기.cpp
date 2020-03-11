//#include <iostream>
//#include <cmath>
//#include <vector>
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
//	int r1, c1, r2, c2;
//	cin >> r1 >> c1 >> r2 >> c2;
//
//	vector<int> answers;
//	int maxdigits = 0;
//	for (int i = r1; i <= r2; ++i)
//	{
//		for (int j = c1; j <= c2; ++j)
//		{
//			bool absRbigger = abs(i) > abs(j) ? true : false;
//			int point_value;
//			int final_value;
//			if (i < 0)
//			{
//				// 제 2사분면에 위치(i < 0, j < 0)
//				if (j < 0)
//				{
//					if (absRbigger)
//					{
//						point_value = (int)pow(2 * i + 1, 2) - 4 * i;
//						final_value = point_value - abs(i - j);
//					}
//					else
//					{
//						point_value = (int)pow(2 * j + 1, 2) - 4 * j;
//						final_value = point_value + abs(i - j);
//					}
//				}
//				// 제 1사분면에 위치(i < 0, j >= 0)
//				else
//				{
//					if (absRbigger)
//					{
//						point_value = (int)pow(2 * i, 2) - 2 * abs(i) + 1;
//						final_value = point_value + abs(i + j);
//					}
//					else
//					{
//						point_value = (int)pow(2 * j, 2) - 2 * j + 1;
//						final_value = point_value - abs(i + j);
//					}
//				}
//			}
//			else
//			{
//				// 제 3사분면에 위치(i >= 0, j < 0)
//				if (j < 0)
//				{
//					if (absRbigger)
//					{
//						point_value = (int)pow(2 * i, 2) + 2 * i + 1;
//						final_value = point_value + abs(i + j);
//					}
//					else
//					{
//						point_value = (int)pow(2 * j, 2) + 2 * abs(j) + 1;
//						final_value = point_value - abs(i + j);
//					}
//				}
//				// 제 4사분면에 위치
//				else
//				{
//					if (absRbigger)
//					{
//						point_value = (int)pow(2 * i + 1, 2);
//						final_value = point_value - abs(i - j);
//					}
//					else
//					{
//						if(i == j)
//							point_value = (int)pow(2 * i + 1, 2);
//						else
//							point_value = (int)pow(2 * (j - 1) +1, 2);
//						final_value = point_value + abs(i - j);
//					}
//				}
//			}
//			
//			answers.push_back(final_value);
//			int numdigits = log10(final_value) + 1;
//			maxdigits = maxdigits < numdigits ? numdigits : maxdigits;
//		}
//	}
//
//	auto it = answers.begin();
//	for (int i = 0; i < (r2 - r1) + 1; ++i)
//	{
//		for (int j = 0; j < (c2 - c1) + 1; ++j)
//		{
//			cout.width(maxdigits);
//			cout << *it << " ";
//			it += 1;
//		}cout << "\n";
//	}cout << "\n";
//	return 0;
//}