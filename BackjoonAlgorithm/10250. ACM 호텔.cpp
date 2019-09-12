//#include <iostream>
//#include <ctime>
//#include <cmath>
//using namespace std;
//
//#define TEST
//#undef TEST
//
//
//int main()
//{
//	int T;
//	cin >> T;
//	srand((unsigned int)time(NULL));
//	for (int tc = 1; tc <= T; ++tc)
//	{
//
//		int Height;
//#ifdef TEST
//		Height = rand() % 98 + 1;
//		cout << "H : " << Height << " ";
//#else
//		cin >> Height;
//#endif // TEST
//
//		
//		
//		int Width = rand() % 98 + 1;
//#ifdef TEST
//		Width = rand() % 98 + 1;
//		cout << "W : " << Width << " ";
//#else
//		cin >> Width;
//#endif // TEST
//		
//		int Num;
//#ifdef TEST
//		Num = rand() % (Height * Width) + 1;
//		cout << "N : " << Num << endl;
//#else
//		cin >> Num;
//#endif // TEST
//		
//
//		int Floor = Num % Height;
//		if ((Num % Height) == 0)
//		{
//			Floor = Height;
//		}
//
//		int Line = ceil(((float)Num / (float)Height));
//		int Result = Floor * 100 + Line;
//
//		cout << Result << endl;
//	}
//
//	return 0;
//}