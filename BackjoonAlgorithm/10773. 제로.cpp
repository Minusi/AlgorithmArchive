//#include <iostream>
//#include <vector>
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
//
//	int K;
//#ifdef DEBUG
//	K = GenerateSingleTestData<int>(5, 12);
//	cout << K << "\n";
//#else
//	cin >> K;
//#endif // DEBUG
//
//
//	vector<int> Statement;
//	int Value;
//	for (int i = 0; i < K; ++i)
//	{
//#ifdef DEBUG
//		Value = GenerateSingleTestData<int>(0, 5);
//		cout << Value << " ";
//#else
//		cin >> Value;
//#endif // DEBUG
//
//		if (Value == 0)
//		{
//			if (Statement.size() > 0)
//				Statement.pop();
//		}
//		else
//			Statement.push(Value);
//	}
//
//	int Sum = 0;
//	while (Statement.size() > 0)
//	{
//		Sum += Statement.top();
//		Statement.pop();
//	}
//	
//	cout << Sum << "\n";
//
//	return 0;
//}