//#include <iostream>
//using namespace std;
//
////#define DEBUG
//#ifdef DEBUG
//#include <chrono>
//#include "Utility.h"
//
//chrono::system_clock::time_point Start;
//chrono::nanoseconds Time;
//#endif
//
//
//
//int main()
//{
//	ios::sync_with_stdio(false);
//	cin.tie(NULL);
//
//	int N;
//#ifdef DEBUG
//	N = GenerateSingleTestData(1, 10);
//	cout << N << "\n";
//#else
//	cin >> N;
//#endif // !DEBUG
//
//
//	int Plugs;
//	/* ������ �ܼ�Ʈ�� ��� �÷��׸� ����� �� �����Ƿ�  + 1 */
//	int NumPlugAvailable = 1;
//	for (int i = 0; i < N; i++)
//	{
//#ifdef DEBUG
//		Plugs = GenerateSingleTestData(1, 10);
//		cout << Plugs << "\n";
//#else
//		cin >> Plugs;
//#endif // DEBUG
//		NumPlugAvailable += Plugs - 1;
//	}
//
//	cout << NumPlugAvailable << "\n";
//
//	return 0;
//}