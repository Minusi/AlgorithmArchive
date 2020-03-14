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
//	unsigned int flags = 0x00;
//	int input;
//	for (int i = 0; i < 28; ++i)
//	{
//		cin >> input;
//		flags = flags | (1 << input);
//	}
//
//	for (int i = 1; i <= 30; ++i)
//		if ((flags & (1 << i)) == 0)
//			cout << i << "\n";
//	return 0;
//}