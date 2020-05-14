//#include <iostream>
//#include <algorithm>
//#include <string>
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
//	int n1, n2;
//	cin >> n1 >> n2;
//
//	string s1, s2;
//	string sequence;
//
//	cin >> s1 >> s2;
//	reverse(s1.begin(), s1.end());
//	
//	sequence.resize(n1 + n2);
//
//	int t;
//	cin >> t;
//	{
//		int decrease = 0;
//		for (int s = s1.size() - 1; s >= 0; --s)
//		{
//			if (s + t - decrease > s)
//				sequence[min(s + t - decrease, s + (int)s2.size())] = s1[s];
//			else
//				sequence[s] = s1[s];
//			decrease++;
//		}
//	}
//
//	{
//		int increase = 0;
//		for (int s = 0; s < s2.size(); ++s)
//		{
//			if (s + (int)s1.size() - t + increase < s + (int)s1.size())
//				sequence[max(s + (int)s1.size() - t + increase, s)] = s2[s];
//			else
//				sequence[s + s1.size()] = s2[s];
//			increase++;
//		}
//	}
//	cout << sequence << "\n";
//
//
//	return 0;
//}