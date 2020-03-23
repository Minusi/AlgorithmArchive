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
//	constexpr int belly = 0;
//	constexpr int back = 1;
//
//	constexpr int max_case = 2;
//	for (int t = 0; t < 3; ++t)
//	{
//		int Yutnori[max_case] = { 0 };
//		int Yut;
//
//		for (int i = 0; i < 4; ++i)
//		{
//			cin >> Yut;
//			Yutnori[Yut]++;
//		}
//
//		switch (Yutnori[back])
//		{
//		case 0:
//			cout << 'D' << "\n";
//			break;
//		case 1:
//			cout << 'C' << "\n";
//			break;
//		case 2:
//			cout << 'B' << "\n";
//			break;
//		case 3:
//			cout << 'A' << "\n";
//			break;
//		case 4:
//			cout << 'E' << "\n";
//			break;
//		}
//	}
//
//	return 0;
//}