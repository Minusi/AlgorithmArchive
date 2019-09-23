//#include <iostream>
//#include <string>
//#include <stack>
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
//	int Input[100000];
//	size_t InputIndex = 0;
//	for (int i = 0; i < N; ++i)
//	{
//		cin >> Input[i];
//	}
//
//
//
//	stack<int> Stack;
//	int CurrNum = 1;
//	string Result;
//	
//	Stack.push(CurrNum++);
//	Result.reserve(2 * N + 1);
//	Result += '+';
//	while (InputIndex < N)
//	{
//		if (Stack.size() == 0)
//		{
//			Stack.push(CurrNum++);
//			Result += '+';
//			continue;
//		}
//		
//		if (Stack.top() < Input[InputIndex])
//		{
//			Stack.push(CurrNum++);
//			Result += '+';
//		}
//		else if (Stack.top() == Input[InputIndex])
//		{
//			Stack.pop();
//			Result += '-';
//			InputIndex++;
//		}
//		else if (Stack.top() > Input[InputIndex])
//		{
//			Result = "NO";
//			break;
//		}
//	}
//
//	if (Result == "NO")
//	{
//		cout << "NO\n";
//	}
//	else
//	{
//		for (const auto& it : Result)
//		{
//			cout << it << "\n";
//		}
//	}
//
//
//	return 0;
//}