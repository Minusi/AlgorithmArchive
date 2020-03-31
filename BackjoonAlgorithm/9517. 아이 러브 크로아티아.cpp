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
//	int k, n;
//	cin >> k >> n;
//
//	int explosion = 210;
//	{
//		int time;
//		char result;
//		for (int i = 0; i < n; ++i)
//		{
//			cin >> time >> result;
//
//			explosion -= time;
//			if (explosion <= 0)
//			{
//				cout << k << "\n";
//				break;
//			}
//			
//			switch (result)
//			{
//			case 'T':
//				if (k == 8)
//					k = 1;
//				else
//					k++;
//				break;
//			case 'N':
//			case 'P':
//				break;
//			}
//		}
//	}
//	return 0;
//}