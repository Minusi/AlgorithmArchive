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
//struct QueueInt
//{
//public:
//	/* 문자열 명령을 입력으로 받아 기능을 수행합니다. */
//	void ConsumeInput(string Command)
//	{
//		/* 명령을 구분자로 구분하여 서브 명령 배열에 담습니다. */
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
//		Subcommands.push_back(Command.substr(Start, End));
//
//
//
//		if (Subcommands[0] == "push")
//		{
//			if (Subcommands.size() != 2)
//			{
//				cout << "명령 인수가 부족하거나 많습니다." << endl;
//				return;
//			}
//
//			Push(stoi(Subcommands[1]));
//		}
//		else if (Subcommands[0] == "pop")
//		{
//			/* 유효성 검사 */
//			if (Subcommands.size() != 1)
//			{
//				return;
//			}
//
//			Pop();
//		}
//		else if (Subcommands[0] == "size")
//		{
//			/* 유효성 검사 */
//			if (Subcommands.size() != 1)
//			{
//				return;
//			}
//
//			SIze();
//		}
//		else if (Subcommands[0] == "empty")
//		{
//			/* 유효성 검사 */
//			if (Subcommands.size() != 1)
//			{
//				return;
//			}
//
//			Empty();
//		}
//		else if (Subcommands[0] == "front")
//		{
//			/* 유효성 검사 */
//			if (Subcommands.size() != 1)
//			{
//				return;
//			}
//
//			Front();
//		}
//		else if (Subcommands[0] == "back")
//		{
//			/* 유효성 검사 */
//			if (Subcommands.size() != 1)
//			{
//				return;
//			}
//
//			Back();
//		}
//		else
//		{
//			return;
//		}
//	}
//
//	void Push(int Input)
//	{
//		Data.push_back(Input);
//	}
//
//	void Pop()
//	{
//		if (Data.empty() == true)
//		{
//			cout << -1 << endl;
//			return;
//		}
//
//		cout << Data[0] << endl;
//		Data.erase(Data.begin());
//	}
//
//	void SIze() const
//	{
//		cout << Data.size() << endl;
//	}
//
//	void Empty() const
//	{
//		cout << Data.empty() << endl;
//	}
//
//	void Front() const
//	{
//		if (Data.size() >= 1)
//			cout << Data[0] << endl;
//		else
//			cout << -1 << endl;
//	}
//
//	void Back() const
//	{
//		if (Data.size() >= 1)
//			cout << Data[Data.size() - 1] << endl;
//		else
//			cout << -1 << endl;
//	}
//
//private:
//	vector<int> Data;
//
//private:
//	string Delimeter = " ";
//};
//
//
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
//	QueueInt Queue;
//
//	string Buffer;
//	for (int i = 0; i < N; ++i)
//	{
//		getline(cin, Buffer);
//		Queue.ConsumeInput(Buffer);
//	}
//
//
//
//	return 0;
//}