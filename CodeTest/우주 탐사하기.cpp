//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
///* 비트 비교 방식으로 틀린 갯수 반환 */
//int Check_Internal(unsigned char Low, unsigned char High, unsigned char Mid)
//{
//	int Result = 0;
//	unsigned char BitPos = 1;
//	for (int i = 0; i < 8; ++i)
//	{
//		BitPos = 1 << i;
//		
//		int LFlag = Low &  BitPos;
//		int HFlag = High &  BitPos;
//		int MFlag = Mid &  BitPos;
//		if ((LFlag != HFlag)
//			|| (HFlag != MFlag)
//			|| LFlag != MFlag)
//			Result++;
//	}
//
//	return Result;
//}
//
///* 토큰화한 후, 비교값을 출력하는 함수 */
//int Check(char* const Low, char* const High, char* const Mid,int N)
//{
//	int Result = 0;
//
//	/* - 토큰으로 문자열 구분하는 구간 */
//	char* LToken, *HToken, *MToken;
//	LToken = strtok(Low, "-");
//	HToken = strtok(High, "-");
//	MToken = strtok(Mid, "-");
//	size_t End = strlen(LToken);
//
//	char* Endptr;
//	while (N--)
//	{
//		unsigned char LValue = strtol(LToken, &Endptr, 10);
//		unsigned char HValue = strtol(HToken, &Endptr, 10);
//		unsigned char MValue = strtol(MToken, &Endptr, 10);
//		Result += Check_Internal(LValue, HValue, MValue);
//
//		LToken = strtok(LToken + End + 1, "-");
//		HToken = strtok(HToken + End + 1, "-");
//		MToken = strtok(MToken + End + 1, "-");
//	}
//	return Result;
//}
//
//int main()
//{
//	int T;
//	scanf("%d", &T);
//	
//	int N;
//	char Low[2000000];
//	char High[2000000];
//	char Mid[2000000];
//	while (T--)
//	{
//		scanf("%d", &N);
//		
//		scanf("%s", Low);
//		scanf("%s", High);
//		scanf("%s", Mid);
//		
//		/* 출력 */
//		printf("%d\n", Check(Low, High, Mid, N));
//	}
//
//	return 0;
//}
