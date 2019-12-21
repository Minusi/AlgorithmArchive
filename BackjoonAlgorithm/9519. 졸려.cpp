//#include <iostream>
//#include <string>
//using namespace std;
//
////#define DEBUG
//#ifdef DEBUG
//#include <chrono>
//#include "Utility.h"
//
//chrono::system_clock::time_point Start;
//chrono::nanoseconds Time;
//#endif
//
//
//
///* Ʋ�� ���� : ��� ������ ����Ŭ�� ���� �� - 1�� �ƴ� 
// * ex)	len = 6, cycle = 5
// *		len = 9, expected = 8, cycle = 4 
// *		len = 999, expected = 998, cycle = 998
// *		len = 1000, expected = 9999, cycle = 150 */
//int main()
//{
//	ios::sync_with_stdio(false);
//	cin.tie(NULL);
//
//	int X;
//	cin >> X;
//
//	string Word;
//	cin >> Word;
//
//	//{
//	//	int TestLen;
//	//	cin >> TestLen;
//
//	//	Word = GenerateSingleTestString(TestLen, TestLen);
//	//	cout << Word << "\n";
//	//}
//
//
//
//	/* ���� �ܾ� ��ġ�� ���� ��ȯ �� �̵��ϰ� �� ��ġ�� ������ ���̺� */
//	int NextTable[1001];
//	NextTable[0] = 0;
//
//	/* ���̺� ���� ���� */
//	bool reverse = true;
//	int index = 1;
//	int rindex = Word.size();
//	for (int i = 1; i <= Word.size(); ++i, reverse = !reverse)
//	{
//		if (reverse)
//		{
//			NextTable[i] = index;
//			index++;
//		}
//		else
//		{
//			NextTable[i] = rindex;
//			rindex--;
//		}
//	}
//
////#ifdef DEBUG
////	for (int i = 0; i <= Word.size(); ++i)
////		cout << i << " : " << NextTable[i] << "\t";
////#endif // DEBUG
//
//
//
//	/* 2��° �ܾ��� ��ȯ�� ���ؼ� ��Ŭ�� �� �ֱ����� Ȯ�� */
//	int Period = 0;
//	int Index = 2;
//	do
//	{
//		Index = NextTable[Index];
//		Period++;
//	} while (Index != 2);
//
//
//
//	int Count = X % Period;
//	string Answer = Word;
//	for (int i = 1; i < Answer.size(); ++i)
//	{
//		/* NextTable�� �ε����� 1���� �����ϹǷ� ��ȯ�մϴ�. */
//		int Pos_Internal = i + 1;
//		for (int j = 0; j < Count; ++j)
//			Pos_Internal = NextTable[Pos_Internal];
//
//		Answer[Pos_Internal - 1] = Word[i];
//	}
//	cout << Answer << "\n";
//
//	return 0;
//}
