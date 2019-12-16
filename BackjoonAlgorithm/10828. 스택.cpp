//#include <iostream>
//#include <string>
//#include <vector>
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
//template<typename T>
//void interprete(string Command, vector<T>& Stack)
//{
//	size_t Start = 0;
//	size_t End = Command.find_first_of(' ', Start);
//	vector<string> Subcommands;
//	string Buffer;
//	while (End != string::npos)
//	{
//		Buffer =  Command.substr(Start, End - Start);
//		Subcommands.push_back(Buffer);
//		Start = End + 1;
//		End = Command.find_first_of(' ', Start);
//	}
//	Buffer = Command.substr(Start, End - Start);
//	Subcommands.push_back(Buffer);
//
//	if (Subcommands[0] == "push")
//	{
//		if (Subcommands.size() != 2)
//			return;
//
//		Stack.push(stoi(Subcommands[1]));
//	}
//	else if(Subcommands[0] == "pop")
//	{
//		if (Subcommands.size() != 1)
//			return;
//
//		if (Stack.size() == 0)
//			cout << -1 << "\n";
//		else
//		{
//			cout << Stack.top() << "\n";
//			Stack.pop();
//		}
//	}
//	else if (Subcommands[0] == "size")
//	{
//		if (Subcommands.size() != 1)
//			return;
//
//		cout << Stack.size() << "\n";
//	}
//	else if (Subcommands[0] == "empty")
//	{
//		if (Subcommands.size() != 1)
//			return;
//
//		cout << Stack.empty() << "\n";
//	}
//	else if (Subcommands[0] == "top")
//	{
//		if (Subcommands.size() != 1)
//			return;
//		
//		if (Stack.size() == 0)
//			cout << -1 << "\n";
//		else
//			cout << Stack.top() << "\n";
//	}
//}
//
//
//
//int main()
//{
//	ios::sync_with_stdio(false);
//
//	int N;
//	cin >> N;
//	cin.ignore();
//	
//	
//	vector<int> Stack;
//	string Buffer;
//	for (int i = 0; i < N; ++i)
//	{
//		getline(cin, Buffer);
//		
//		interprete(Buffer, Stack);
//	}
//
//	return 0;
//}