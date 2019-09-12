//#include <iostream>
//#include <algorithm>
//using namespace std;
//
//
//
//int main()
//{
//	/* 카드 개수 */
//	int Num;
//	cin >> Num;
//
//	/* 목표 합 */
//	int Sum;
//	cin >> Sum;
//
//	/* 카드 현황 */
//	int* Card = new int[Num + 1];
//	Card[0] = 0;
//	for (int i = 1; i < Num + 1; ++i)
//	{
//		cin >> Card[i];
//	}
//
//
//	sort(Card + 1, Card + Num + 1);
//	int ApproxSum = 0;
//	int CandidateSum = 0;
//	for (int i = 1; i < Num + 1; ++i)
//	{
//		for (int j = i + 1; j < Num + 1; ++j)
//		{
//			for (int k = j + 1; k < Num + 1; ++k)
//			{
//				ApproxSum = Card[i] + Card[j] + Card[k];
//				//cout << "Approx : " << ApproxSum << endl;
//				if (ApproxSum <= Sum && ApproxSum > CandidateSum)
//				{
//					CandidateSum = ApproxSum;
//				}
//			}
//		}
//	}
//
//	cout << CandidateSum << endl;
//	return 0;
//}