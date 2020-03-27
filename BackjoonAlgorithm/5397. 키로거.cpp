//#include <iostream>
//#include <list>
//#include <string>
//#include <iterator>
//using namespace std;
//
//#ifdef _DEBUG
//#include "Utility.h"
//#endif // _DEBUG
//
//
//
//int main()
//{
//	ios::sync_with_stdio(false);
//	cin.tie(NULL);
//
//	int t;
//	cin >> t;
//
//	list<char> pw;
//	list<char>::iterator pwit;
//	while (t--)
//	{
//		pw.clear();
//		pwit = pw.end();
//		string input;
//		cin >> input;
//
//		for (const auto& it : input)
//		{
//			if (it == '<')
//			{
//				if (pw.size() == 0 || pwit == pw.begin())
//					continue;
//
//				pwit--;
//			}
//			else if (it == '>')
//			{
//				if (pw.size() == 0 || pwit == pw.end())
//					continue;
//
//				pwit++;
//			}
//			else if (it == '-')
//			{
//				if (pw.size() == 0 || pwit == pw.begin())
//					continue;
//
//				pwit = pw.erase(--pwit);
//				if (pw.size() == 0)
//					pwit = pw.end();
//			}
//			else
//			{
//				pwit = pw.insert(pwit, it);
//				pwit++;
//			}
//		}
//		for (const auto& pt : pw)
//			cout << pt;
//		cout << "\n";
//	}
//
//
//	return 0;
//}