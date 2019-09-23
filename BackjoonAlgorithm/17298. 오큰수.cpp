//#include <iostream>
//#include <stack>
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
//	cin.tie(NULL);
//
//	int N;
//	cin >> N;
//
//
//	int Result[1000000];
//	stack<int> Stack;
//	stack<int> IdxArchieve;
//	int Index = 0;
//
//	int Input;
//	for (int i = 0; i < N; ++i)
//	{
//#ifdef DEBUG
//		Input = GenerateSingleTestData<int>(1, 15);
//		cout << Input << " ";
//#else
//		cin >> Input;
//#endif // DEBUG
//
//
//		/* 스택에 쌓인 게 없으면 바로 집어넣습니다. */
//		if (Stack.size() == 0)
//		{
//			Stack.push(Input);
//			IdxArchieve.push(Index++);
//			continue;
//		}
//
//		
//
//		if (Stack.top() >= Input)
//		{
//			Stack.push(Input);
//			IdxArchieve.push(Index++);
//		}
//		else
//		{
//			do
//			{
//				Result[IdxArchieve.top()] = Input;
//				Stack.pop();
//				IdxArchieve.pop();
//
//				if (Stack.size() == 0)
//					break;
//			} while (Stack.top() < Input);
//
//			Stack.push(Input);
//			IdxArchieve.push(Index++);
//		}
//	}
//#ifdef DEBUG
//	cout << "\n";
//#endif // DEBUG
//
//
//	if (Stack.size() > 0)
//	{
//		do
//		{
//			Result[IdxArchieve.top()] = -1;
//			Stack.pop();
//			IdxArchieve.pop();
//		} while (Stack.size() > 0);
//	}
//
//	for (int i = 0; i < N; ++i)
//	{
//		cout << Result[i] << " ";
//	}
//	cout << "\n";
//
//	return 0;
//}