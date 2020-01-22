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
//	int Seq[1000];
//	int Buf[1000], Sum12;
//	for (int i = 0; i < N; ++i)
//	{
//		for (int j = 0; j < N; ++j)
//		{
//			cin >> Buf[j];
//			if (i == 0)
//			{
//				if (j == 0)				Seq[j] = 0;
//				else if (j == 1)		Sum12 = Buf[j];
//				else					Seq[j] = Buf[j] - Buf[j - 1];
//			}
//			else if (i == 2 && j == 1)
//			{
//				Seq[j] = Buf[j] - Buf[j - 1];
//				goto ENDLOOP;
//			}
//		}
//	}
//
//ENDLOOP:
//
//	if (N == 2)
//	{
//		Seq[0] = 1;
//		Seq[1] = Sum12 - 1;
//	}
//	else
//	{
//		Seq[0] = (Sum12 - Seq[1]) / 2;
//		for (int i = 1; i < N; ++i)
//			Seq[i] = Seq[i] + Seq[i - 1];
//	}
//
//	for (int i = 0; i < N; ++i)
//		cout << Seq[i] << " ";
//	cout << "\n";
//	return 0;
//}