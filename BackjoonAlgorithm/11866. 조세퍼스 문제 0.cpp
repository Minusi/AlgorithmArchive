//#include <iostream>
//#include <string>
//#include <vector>
//using namespace std;
//
////#define DEBUG
//#ifdef DEBUG
//#include <chrono>
//#include "Utility.h"
//#endif
//
//
//
//int main()
//{
//	ios::sync_with_stdio(false);
//
//	int N;
//	cin >> N;
//
//	vector<int> Circle;
//	Circle.reserve(1000);
//	Circle.resize(N);
//	for (int i = 0; i < N; ++i)
//	{
//		Circle[i] = i + 1;
//	}
//	
//	int K;
//	cin >> K;
//
//
//
//	/* 조세퍼스 순열 출력을 위한 구현 시작 */
//	int DelIndex = -1;
//	vector<int> Josephus;
//	Josephus.reserve(1000);
//	while (Circle.size() > 0)
//	{
//		DelIndex += K;
//
//		if (DelIndex >= Circle.size())
//		{
//			DelIndex = DelIndex % Circle.size();
//		}
//
//		Josephus.push_back(Circle[DelIndex]);
//		Circle.erase(Circle.begin() + DelIndex);
//		DelIndex--;
//	}
//
//	cout << "<";
//	for (auto it = Josephus.begin(); it != Josephus.end(); ++it)
//	{
//		cout << *it;
//		if (it + 1 != Josephus.end())
//		{
//			cout << ", ";
//		}
//	}
//	cout << ">\n";
//
//	return 0;
//}