//#include <iostream>
//#include <vector>
//#include <chrono>
//#include <cstring>
//#include <ctgmath>
//using namespace std;
//
//
//int main()
//{
//	/* 입력 */
//	int Num;
//	cin >> Num;
//	
//#ifdef CHRONO
//	chrono::system_clock::time_point TP1 = chrono::system_clock::now();
//#endif // CHRONO
//
//
//	int* Ctor = new int[1000001];
//	memset(Ctor, 0, sizeof(int) * 1000001);
//
//
//	int Digits[8] = { 0 };
//	int DigitOffset = 0;
//	for (int i = 1; ;++i)
//	{
//#ifdef CHRONO
//		if (i % 100000 == 0)
//		{
//			chrono::system_clock::time_point MTP = chrono::system_clock::now();
//			chrono::nanoseconds MTime = MTP - TP1;
//			cout << "중간 시간 : " << MTime.count() / 1000000000.0 << endl;
//		}
//#endif // CHRONO
//
//		int Decomp = 0;
//		int TempNum = i;
//
//		/* 숫자의 분해수들을 저장합니다. */
//		Digits[DigitOffset] = TempNum % 10;
//		DigitOffset++;
//		for (int j = 0; j < (int)log10(i); ++j)
//		{
//			TempNum = (TempNum / 10);
//			Digits[DigitOffset] = TempNum % 10;
//			DigitOffset++;
//		}
//		
//		/* 분해합을 계산합니다. */
//		Decomp = i;
//		for (const auto& it : Digits)
//		{
//			Decomp += it;
//		}
//
//		if (Decomp > 1000000)
//		{
//			break;
//		}
//
//		//cout << "i : " << i << ", Decomp : " << Decomp << endl;
//		if(Ctor[Decomp] == 0)
//			Ctor[Decomp] = i;
//
//		DigitOffset = 0;
//	}
//
//	cout << Ctor[Num] << endl;
//
//#ifdef CHRONO
//	chrono::system_clock::time_point TP2 = chrono::system_clock::now();
//	chrono::nanoseconds Time = TP2 - TP1;
//	cout << "소요시간 : " << Time.count() / 1000000000.0 << endl;
//#endif // CHRONO
//
//
//	return 0;
//}