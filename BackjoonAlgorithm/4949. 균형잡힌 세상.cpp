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
//
//	
//	string Buffer;
//	size_t Start;
//	size_t End;
//	while (true)
//	{
//		getline(cin, Buffer);
//		if (Buffer == ".")
//			break;
//
//		stack<char> Validator;
//		bool bSkip = false;
//		Start = 0;
//		End = Buffer.find_first_of("[()]", Start);
//		while (End != string::npos)
//		{
//			switch (Buffer[End])
//			{
//			case '[':
//				Validator.push('[');
//				break;
//			case ']':
//				if (Validator.size() == 0)
//				{
//					bSkip = true;
//					cout << "no\n";
//					break;
//				}
//
//
//
//				if (Validator.top() != '[')
//				{
//					bSkip = true;
//					cout << "no\n";
//				}
//				else
//					Validator.pop();
//				break;
//			case '(':
//				Validator.push('(');
//				break;
//			case ')':
//				if (Validator.size() == 0)
//				{
//					bSkip = true;
//					cout << "no\n";
//					break;
//				}
//
//
//
//				if (Validator.top() != '(')
//				{
//					bSkip = true;
//					cout << "no\n";
//				}
//				else
//					Validator.pop();
//				break;
//			default:
//				bSkip = true;
//				cout << "no\n";
//				break;
//			}
//
//			if (bSkip)	break;
//			Start = End + 1;
//			End = Buffer.find_first_of("[()]", Start);
//		}
//
//		if (bSkip == false)
//		{
//			if (Validator.size() == 0)
//				cout << "yes\n";
//			else
//				cout << "no\n";
//		}
//	}
//	return 0;
//}