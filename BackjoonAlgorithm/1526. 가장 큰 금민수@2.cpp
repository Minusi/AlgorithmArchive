//#include <iostream>
//using namespace std;
//
//#ifdef _DEBUG
//#include "Utility.h"
//#endif // _DEBUG
//
//
//
//void solve(int& answer, int n, int init)
//{
//	if (init > n)
//		return;
//
//	answer = answer > init ? answer : init;
//	solve(answer, n, init * 10 + 4);
//	solve(answer, n, init * 10 + 7);
//}
//
//int main()
//{
//	ios::sync_with_stdio(false);
//	cin.tie(NULL);
//
//	int n, answer;
//	cin >> n;
//	
//	solve(answer, n, 0);
//	cout << answer << "\n";
//
//	return 0;
//}