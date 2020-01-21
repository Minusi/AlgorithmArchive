//#include <iostream>
//#include <vector>
//#include <algorithm>
//#include <functional>
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
//	vector<int> Straws(1000000);
//	int Input;
//	for (int i = 0; i < N; ++i)
//		cin >> Straws[i];
//	sort(Straws.begin(), Straws.begin() + N, greater<int>());
//
//
//
//	int Answer = -1;
//	for (int i = 2; i < N; ++i)
//	{
//		if (Straws[i - 2] >= Straws[i - 1] + Straws[i])
//			continue;
//	
//		Answer = Straws[i - 2] + Straws[i - 1] + Straws[i];
//		break;
//	}
//
//	cout << Answer << "\n";
//	return 0;
//}