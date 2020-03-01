//#include <iostream>
//#include <stack>
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
//	int table[2][101] = { 0 };
//	for (int i = 1; i <= N; ++i)
//		table[0][i] = i;
//	for (int j = 1; j <= N; ++j)
//		cin >> table[1][j];
//
//	enum class EChkState{	UNKNOWN, CYCLE, NONCYCLE };
//	EChkState check[101] = { EChkState::UNKNOWN };
//	for (int i = 1; i <= N; ++i)
//	{
//		// print for "DEBUG"
//		//cout << "\n" << i << "\n";
//		//for (int i = 1; i <= N; ++i)
//		//	cout << (int)check[i] << " ";
//		//cout << "\n";
//
//		if (check[i] != EChkState::UNKNOWN)	continue;
//		
//		stack<int> tableStack;
//		bool flags[101] = { false };
//		
//		tableStack.push(i);
//		flags[i] = true;
//
//		// loop while cycle occurs
//		int next = table[1][tableStack.top()];
//		while (flags[next] == false)
//		{
//			tableStack.push(next);
//			flags[next] = true;
//			next = table[1][next];
//		}
//
//		// rewind while find end of cycle
//		int top = tableStack.top();
//		while (true)
//		{
//			check[top] = EChkState::CYCLE;
//
//			if (next == top)	
//				break;
//
//			tableStack.pop();
//			top = tableStack.top();
//		}
//
//		// set stack empty and set check array flags to non-cycle
//		while (tableStack.empty() == false)
//		{
//			top = tableStack.top();
//			if (check[top] != EChkState::CYCLE)
//				check[top] = EChkState::NONCYCLE;
//			tableStack.pop();
//		}
//	}
//
//	// print answer 
//	int answer = 0;
//	for (int i = 1; i <= N; ++i)
//		if (check[i] == EChkState::CYCLE)
//			answer++;
//
//	cout << answer << "\n";
//	for (int i = 1; i <= N; ++i)
//		if (check[i] == EChkState::CYCLE)
//			cout << i << "\n";
//	return 0;
//}