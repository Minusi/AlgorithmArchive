//#include <iostream>
//#include <algorithm>
//using namespace std;
//
//
//
//template<int T>
//unsigned int CountNum(int Num)
//{
//	int Result = 0;
//	for (long long i = T; i <= Num; i *= T)
//	{
//		Result += Num / i;
//	}
//
//	return Result;
//}
//
//
//
//int main()
//{
//	int N, M;
//	cin >> N >> M;
//	int NumFive = 0;
//	int NumTwo = 0;
//	
//
//	NumFive += CountNum<5>(N);
//	if (M != 0)
//	{
//		NumFive -= CountNum<5>(M);
//	}
//	if (N != M)
//	{
//		NumFive -= CountNum<5>(N - M);
//	}
//
//	NumTwo += CountNum<2>(N);
//	if (M != 0)
//	{
//		NumTwo -= CountNum<2>(M);
//	}
//	if (N != M)
//	{
//		NumTwo -= CountNum<2>(N - M);
//	}
//
//	cout << min(NumFive, NumTwo) << endl;
//	return 0;
//}