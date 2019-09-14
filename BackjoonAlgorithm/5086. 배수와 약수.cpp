//#include <iostream>
//using namespace std;
//
//
//
//int main()
//{
//	unsigned First, Second;
//
//	do
//	{
//		cin >> First >> Second;
//
//		if (First == 0 && Second == 0)
//		{
//			break;
//		}
//
//		/* 유효성 검사 */
//		if (First > 10000 || First == 0 || Second > 10000 || Second == 0)
//		{
//			return -1;
//		}
//
//
//		if (Second % First == 0)
//		{
//			cout << "factor" << endl;
//		}
//		else if (First % Second == 0)
//		{
//			cout << "multiple" << endl;
//		}
//		else
//		{
//			cout << "neither" << endl;
//		}
//	} while (First != 0 || Second != 0);
//
//	return 0;
//}