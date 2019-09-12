//#include <iostream>
//using namespace std;
//
//
//int main()
//{
//	int X;
//	cin >> X;
//
//	unsigned int IndexArray[10001] = { 0 };
//	for (int i = 1; i <= 10000; ++i)
//	{
//		IndexArray[i] = i * (i + 1) / 2;
//	}
//
//	for (int i = 1; i <= 10000; ++i)
//	{
//		if (X > IndexArray[i - 1] && X <= IndexArray[i])
//		{
//			int StartIndex = IndexArray[i - 1] + 1;
//			int EndIndex = IndexArray[i];
//			
//			bool bProgressLeft = false;
//			int Numerator = 0;
//			int Denominator = 0;
//
//			/* i가 짝수일 때 */
//			if (i % 2 == 0)
//			{
//				bProgressLeft = true;
//				Numerator = 1;
//				Denominator = i;
//			}
//			/* i가 홀수일 때 */
//			else
//			{
//				bProgressLeft = false;
//				Numerator = i;
//				Denominator = 1;
//			}
//
//			for (int j = StartIndex; j <= EndIndex; ++j)
//			{
//				if (X == j)
//				{
//					cout << Numerator << "/" << Denominator << endl;
//				}
//
//				if (bProgressLeft)
//				{
//					Numerator++;
//					Denominator--;
//				}
//				else
//				{
//					Numerator--;
//					Denominator++;
//				}
//			}
//		}
//	}
//
//	return 0;
//}