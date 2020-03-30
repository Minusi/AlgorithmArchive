//#include <iostream>
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
//	int m;
//	cin >> m;
//
//	bool shellcup[4] = { 0 };
//	shellcup[1] = true;
//	
//	{
//		int lhs, rhs;
//		for (int i = 0; i < m; ++i)
//		{
//			cin >> lhs >> rhs;
//			int temp = shellcup[lhs];
//			shellcup[lhs] = shellcup[rhs];
//			shellcup[rhs] = temp;
//		}
//	}
//
//	for (int i = 1; i <= 3; ++i)
//		if (shellcup[i] == true)
//			cout << i << "\n";
//
//	return 0;
//}