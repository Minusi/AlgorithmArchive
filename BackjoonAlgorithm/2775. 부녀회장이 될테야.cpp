//#include <iostream>
//#include <iomanip>
//using namespace std;
//
//
//
//unsigned int CalculateResidents(unsigned int (&Array)[15][15], int Floor, int Line)
//{
//	if (Floor < 0 || Floor > 14)
//	{
//		return 0;
//	}
//
//	if (Line < 1 || Line > 14)
//	{
//		return 0;
//	}
//
//
//	
//	if (Array[Floor][Line] != 0)
//	{
//		return Array[Floor][Line];
//	}
//	
//
//
//	unsigned int Result = 0;
//	for (int i = 1; i <= Line; ++i)
//	{
//		Result += CalculateResidents(Array, Floor - 1, i);
//	}
//
//	Array[Floor][Line] = Result;
//	return Result;
//}
//
//void PrintArray(const unsigned int (&Array)[15][15])
//{
//	for (int i = 0; i < 15; ++i)
//	{
//		for (int j = 0; j < 15; ++j)
//		{
//			cout << setw(8) << Array[i][j] << " ";
//		}
//		cout << endl;
//	}
//}
//
//int main()
//{
//	int T;
//	cin >> T;
//
//	/* 15층(0~14) 각 14(1~14)호로 구성된 아파트 */
//	unsigned int Apartment[15][15] = { 0 };
//	for (int i = 1; i <= 14; ++i)
//	{
//		Apartment[0][i] = i;
//	}
//	
//	for (int tc = 1; tc <= T; ++tc)
//	{
//		int Floor;			// 층
//		cin >> Floor;
//
//		int Line;			// 호
//		cin >> Line;
//		
//		cout << CalculateResidents(Apartment, Floor, Line) << endl;
//	}
//	return 0;
//}