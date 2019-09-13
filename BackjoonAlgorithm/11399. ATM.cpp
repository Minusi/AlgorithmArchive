//#include <iostream>
//#include <algorithm>
//using namespace std;
//#define TEST
//#undef TEST
//
//
//int main()
//{
//	unsigned int N, P;
//	cin >> N;
//
//	unsigned int* Waiting = new unsigned int[N];
//	for (unsigned int i = 0; i < N; ++i)
//	{
//		cin >> P;
//		Waiting[i] = P;
//	}
//
//	sort(Waiting, Waiting + N);
//#ifdef TEST
//	for (unsigned int i = 0; i < N; ++i)
//	{
//		cout << Waiting[i] << " ";
//	}
//#endif // TEST
//
//
//
//	unsigned int CurrentSize = N;
//	unsigned int TotalWaitingTime = 0;
//	for (unsigned int i = 0; i < N; ++i)
//	{
//		TotalWaitingTime += Waiting[i] * CurrentSize;
//		CurrentSize--;
//	}
//	
//	cout << TotalWaitingTime << endl;
//
//	return 0;
//}