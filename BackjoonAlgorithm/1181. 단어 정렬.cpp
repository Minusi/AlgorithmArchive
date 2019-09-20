//#include <iostream>
//#include <string.h>
//using namespace std;
//
////#define DEBUG
//#ifdef DEBUG
//#include <chrono>
//#include "Utility.h"
//#endif // DEBUG
//
//
//
//struct UWord
//{
//#define MAX_STRING 51
//private:
//	int Length = 0;
//	void SetLength()
//	{
//		for (int i = 0; i < MAX_STRING; ++i)
//		{
//			if (Msg[i] == '\0')
//			{
//				Length = i;
//				break;
//			}
//		}
//	}
//
//public:
//	char Msg[MAX_STRING];
//
//	/* 기본 생성자 */
//	UWord() = default;
//
//	/* 복사 생성자 */
//	UWord(const UWord& rhs)
//	{
//		Length = rhs.Length;
//		strcpy(Msg, rhs.Msg);
//	}
//
//	/* 대입 연산자 */
//	UWord& operator=(const UWord& rhs)
//	{
//		if (this != &rhs)
//		{
//			Length = rhs.Length;
//			//cout << "왼쪽 : " << Msg << '\n';
//			//cout << "오른쪽 : " << rhs.Msg << '\n';
//			strcpy(Msg, rhs.Msg);
//		}
//
//		return *this;
//	}
//
//	int GetLength()
//	{
//		if (Length == 0)
//		{
//			SetLength();
//		}
//		return Length;
//	}
//
//public:
//	bool operator>(UWord& rhs)
//	{
//		if (GetLength() > rhs.GetLength())
//		{
//			return true;
//		}
//		else if (GetLength() == rhs.GetLength())
//		{
//			for (int i = 0; i < GetLength(); ++i)
//			{
//				if (Msg[i] > rhs.Msg[i])			return true;
//				else if (Msg[i] == rhs.Msg[i])		continue;
//				else								return false;
//			}
//			return false;
//		}
//		else										return false;
//
//	}
//
//	bool operator<(UWord& rhs)
//	{
//		if (GetLength() < rhs.GetLength())			return true;
//		else if (GetLength() == rhs.GetLength())
//		{
//			for (int i = 0; i < GetLength(); ++i)
//			{
//				if (Msg[i] < rhs.Msg[i])			return true;
//				else if (Msg[i] == rhs.Msg[i])		continue;
//				else								return false;
//			}
//			return false;
//		}
//		else										return false;
//
//	}
//
//	bool operator==(UWord& rhs)
//	{
//		if (GetLength() != rhs.GetLength())			return false;
//		else if (GetLength() == rhs.GetLength())
//		{
//			for (int i = 0; i < GetLength(); ++i)
//			{
//				if (Msg[i] != rhs.Msg[i])			return false;
//			}
//			return true;
//		}
//		else										return false;
//	}
//};
//
//
//
//void QuickSort(UWord(&Array)[20000], int Start, int End)
//{
//	if (Start > End) return;
//
//	UWord Pivot = Array[(Start + End) / 2];
//	int i = Start;
//	int j = End;
//	UWord Temp;
//
//	do
//	{
//		while (Array[i] < Pivot)
//			i++;
//		
//		while (Array[j] > Pivot)
//			j--;
//
//		if (i <= j)
//		{
//
//			Temp = Array[i];
//			Array[i] = Array[j];
//			Array[j] = Temp;
//			//cout << "i : " << i << ", " << Array[i].Msg << '\n';
//			//cout << "j : " << j << ", " << Array[j].Msg << '\n';
//			//cout << "Temp : " << Temp.Msg << '\n';
//			i++;
//			j--;
//		}
//	} while (i <= j);
//
//	if (Start < j)
//		QuickSort(Array, Start, j);
//	if (i < End)
//		QuickSort(Array, i, End);
//}
//
//
//int main()
//{
//	ios::sync_with_stdio(false);
//
//	int N;
//	cin >> N;
//	if (N <= 0 || N > 20000)	return -1;
//
//	
//	UWord Words[20000];
//
//#ifdef DEBUG
//	vector<string> Datas;
//	GenerateTestString(N, 5, 5, Datas);
//
//	for (int i = 0; i < N; ++i)
//	{
//		strcpy_s(Words[i].Msg, sizeof(Words[i].Msg), Datas[i].c_str());
//	}
//
//	for (int i = 0; i < N; ++i)
//	{
//		cout << Words[i].Msg << '\n';
//	}
//	cout << '\n';
//#else
//	for (int i = 0; i < N; ++i)
//	{
//		cin >> Words[i].Msg;
//	}
//#endif // DEBUG
//
//	QuickSort(Words, 0, N-1);
//
//	char Buffer[51];
//	for (int i = 0; i < N; ++i)
//	{
//		if (strcmp(Buffer, Words[i].Msg) != 0)
//		{
//			cout << Words[i].Msg << '\n';
//			strcpy(Buffer, Words[i].Msg);
//		}
//	}
//	return 0;
//}
