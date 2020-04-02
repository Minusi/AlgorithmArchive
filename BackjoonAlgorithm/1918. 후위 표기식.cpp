//#include <iostream>
//#include <string>
//#include <stack>
//using namespace std;
//
//#ifdef _DEBUG
//#include "Utility.h"
//#endif // _DEBUG
//
//
//
//constexpr int max_range = 500;
//int main()
//{
//	ios::sync_with_stdio(false);
//	cin.tie(NULL);
//
//	string input;
//	cin >> input;
//
//	stack<char> s;
//	int accumulate[max_range] = { 0 };
//	int acc_size = 0;
//
//	accumulate[acc_size++] = 1;
//	for (const auto& it : input)
//	{
//		// alphabet processing
//		if (it >= 'A' && it <= 'Z')
//		{
//			cout << it;
//			continue;
//		}
//
//		// right parentheses processing
//		if (it == ')')
//		{
//			while (s.top() != '(')
//			{
//				cout << s.top();
//				s.pop();
//			}
//			s.pop();
//			acc_size--;
//		}
//		// left parentheses processing
//		else if(it == '(')
//		{
//			s.push(it);
//			accumulate[acc_size++] = 1;
//		}
//		// arithmatic operation processing
//		else
//		{
//			if (s.empty())
//			{
//				s.push(it);
//			}
//			else
//			{
//				if (s.top() == '(')
//				{
//					s.push(it);
//					continue;
//				}
//
//				if ((it == '*' || it == '/') && (s.top() == '+' || s.top() == '-'))
//				{
//					accumulate[acc_size - 1]++;
//				}
//				else if ((it == '+' || it == '-') && (s.top() == '*' || s.top() == '/'))
//				{
//					for (int i = 0; i < accumulate[acc_size - 1]; ++i)
//					{
//						cout << s.top();
//						s.pop();
//					}
//					accumulate[acc_size - 1] = 1;
//				}
//				else
//				{
//					cout << s.top();
//					s.pop();
//				}
//
//				s.push(it);
//			}
//		}
//	}
//
//	while (s.empty() == false)
//	{
//		cout << s.top();
//		s.pop();
//	}
//
//	return 0;
//}