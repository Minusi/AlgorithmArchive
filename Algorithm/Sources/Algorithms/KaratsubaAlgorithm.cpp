//#include <iostream>
//#include <vector>
//#include <cmath>
//#include <algorithm>
//
//using namespace std;
//
//
///* 10진수의 자릿수를 구합니다. */
//unsigned int GetNumLength(long long Num)
//{
//	return log10(Num) + 1;
//}
//
//
///* 10진수로 가정하고 정수 곱셈을 수행하는 카라추바 알고리즘입니다. */
//long long KaratsubaAlgorithm(long long Multiplicand, long long Multiplier)
//{
//	/* 음수 보정을 수행합니다/ */
//	char NagativeCorrection = 1;
//	if (Multiplicand < 0)
//	{
//		Multiplicand *= -1;
//		NagativeCorrection *= -1;
//	}
//	if (Multiplier < 0)
//	{
//		Multiplier *= -1;
//		NagativeCorrection *= -1;
//	}
//
//	/* 승수나 피승수가 1자리 수라면 곱셈을 수행합니다. */
//	if (Multiplicand < 10 && Multiplicand >= 0 
//		|| Multiplier < 10 && Multiplier >= 0)
//	{
//		return Multiplicand * Multiplier;
//	}
//
//	/* 숫자의 자리수를 계산하고 쪼개기 위한 사전 작업을 수행합니다. */
//	unsigned int m = min(GetNumLength(Multiplicand), GetNumLength(Multiplier));
//	unsigned int m2 = floor(m / 2);
//
//	/* 수를 쪼개어 저장합니다. */
//	long long High1, Low1;
//	High1 = Multiplicand / (int)(pow(10, m2));
//	Low1 = Multiplicand % (int)pow(10, m2);
//
//	long long High2, Low2;
//	High2 = Multiplier / (int)(pow(10, m2));
//	Low2 = Multiplier % (int)pow(10, m2);
//
//	/* z0, z1, z2를 구합니다. */
//	long long z0 = KaratsubaAlgorithm(Low1, Low2);
//	long long z1 = KaratsubaAlgorithm((Low1 + High1), (Low2 + High2));
//	long long z2 = KaratsubaAlgorithm(High1, High2);
//
//	/* 결과값을 구합니다. */
//	long long AbsResult = (z2 * pow(10, (m2 * 2))) + ((z1 - z2 - z0) * pow(10, m2)) + z0;
//
//	/* 음수값을 반영하여 최종값을 반환합니다. */
//	return NagativeCorrection * AbsResult;
//}