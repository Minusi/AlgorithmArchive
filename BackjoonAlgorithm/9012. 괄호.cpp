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
//	int T;
//	cin >> T;
//	
//	string Buffer;
//	for (int tc = 1; tc <= T; ++tc)
//	{
//		cin >> Buffer;
//	
//		stack<char> Validator;
//		bool Break = false;
//		for (const auto& it : Buffer)
//		{
//			/* 삽입 / 삭제 구간 */
//			if (it == '(')
//				Validator.push(it);
//			else if(it ==  ')')
//			{
//				if (Validator.size() > 0)
//					Validator.pop();
//				else
//				{
//					cout << "NO\n";
//					Break = true;
//					break;
//				}
//			}
//			else
//			{
//				Break = true;
//				break;
//			}
//		}
//
//		if (Break == false)
//		{
//			if (Validator.size() == 0)
//				cout << "YES\n";
//			else
//				cout << "NO\n";
//		}
//	}
//
//	return 0;
//}