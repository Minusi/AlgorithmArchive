//#include <iostream>
//#include <queue>
//#include <string>
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
//	int n;
//	cin >> n;
//
//	queue<int> q;
//	string input;
//	for (int i = 0; i < n; ++i)
//	{
//		cin >> input;
//		if (input == "push")
//		{
//			int data;
//			cin >> data;
//			
//			q.push(data);
//		}
//		else if (input == "pop")
//		{
//			if (q.empty() == false)
//			{
//				cout << q.front() << "\n";
//				q.pop();
//			}
//			else cout << -1 << "\n";
//		}
//		else if (input == "size")
//		{
//			cout << q.size() << "\n";
//		}
//		else if (input == "empty")
//		{
//			cout << q.empty() << "\n";
//		}
//		else if (input == "front")
//		{
//			if (q.empty() == false)	cout << q.front() << "\n";
//			else					cout << -1 << "\n";
//		}
//		else if (input == "back")
//		{
//			if (q.empty() == false)	cout << q.back() << "\n";
//			else					cout << -1 << "\n";
//		}
//	}
//
//	return 0;
//}