//#include <iostream>
//#include <algorithm>
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
//struct Deque
//{
//	void ConsumeInput(string Command)
//	{
//		vector<string> Subcommands;
//		string Buffer;
//
//		size_t Start = 0;
//		size_t End = Command.find(Delimeter);
//		while (End != string::npos)
//		{
//			Buffer = Command.substr(Start, End - Start);
//			Subcommands.push_back(Buffer);
//			Start = End + Delimeter.length();
//			End = Command.find(Delimeter, Start);
//		}
//		Subcommands.push_back(Command.substr(Start, End - Start));
//
//
//
//		/* 커맨드 해석 */
//		if (Subcommands[0] == "push_front")
//		{
//			if (Subcommands.size() != 2)
//			{
//				return;
//			}
//
//			Push_Front(stoi(Subcommands[1]));
//		}
//		else if (Subcommands[0] == "push_back")
//		{
//			if (Subcommands.size() != 2)
//			{
//				return;
//			}
//
//			Push_Back(stoi(Subcommands[1]));
//		}
//		else if (Subcommands[0] == "pop_front")
//		{
//			if (Subcommands.size() != 1)
//			{
//				return;
//			}
//
//			Pop_Front();
//		}
//		else if (Subcommands[0] == "pop_back")
//		{
//			if (Subcommands.size() != 1)
//			{
//				return;
//			}
//
//			Pop_Back();
//		}
//		else if (Subcommands[0] == "size")
//		{
//			if (Subcommands.size() != 1)
//			{
//				return;
//			}
//
//			Size();
//		}
//		else if (Subcommands[0] == "empty")
//		{
//			if (Subcommands.size() != 1)
//			{
//				return;
//			}
//
//			Empty();
//		}
//		else if (Subcommands[0] == "front")
//		{
//			if (Subcommands.size() != 1)
//			{
//				return;
//			}
//
//			Front();
//		}
//		else if (Subcommands[0] == "back")
//		{
//			if (Subcommands.size() != 1)
//			{
//				return;
//			}
//
//			Back();
//		}
//		else
//		{
//			cout << "No Commands Found\n";
//			return;
//		}
//	}
//
//	void Push_Front(int Input)
//	{
//		Data.insert(Data.begin(), Input);
//	}
//
//	void Push_Back(int Input)
//	{
//		Data.push_back(Input);
//	}
//
//	void Pop_Front()
//	{
//		if (Data.size() > 0)
//		{
//			cout << Data[0] << '\n';
//			Data.erase(Data.begin());
//		}
//		else
//			cout << -1 << '\n';
//	}
//
//	void Pop_Back()
//	{
//		if (Data.size() > 0)
//		{
//			cout << Data[Data.size() - 1] << '\n';
//			Data.pop_back();
//		}
//		else
//			cout << -1 << '\n';
//	}
//
//	void Size()
//	{
//		cout << Data.size() << '\n';
//	}
//
//	void Empty()
//	{
//		cout << Data.empty() << '\n';
//	}
//
//	void Front()
//	{
//		if (Data.size() > 0)
//			cout << Data[0] << '\n';
//		else
//			cout << -1 << '\n';
//	}
//
//	void Back()
//	{
//		if (Data.size() > 0)
//			cout << Data[Data.size() - 1] << '\n';
//		else
//			cout << -1 << '\n';
//	}
//
//private:
//	vector<int> Data;
//	string Delimeter = " ";
//};
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
//	Deque Deq;
//	string Command;
//	for (int i = 0; i < N; ++i)
//	{
//		getline(cin, Command);
//		Deq.ConsumeInput(Command);
// 	}
//
//	return 0;
//}