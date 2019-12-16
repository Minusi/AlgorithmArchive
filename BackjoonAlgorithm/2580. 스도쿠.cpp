//#include <iostream>
//#include <algorithm>
//#include <vector>
//using namespace std;
//
////#define DEBUG
//#ifdef DEBUG
//#include <chrono>
//#include "Utility.h"
//chrono::system_clock::time_point Start;
//#endif
//
//
//
//bool CheckRow[9][10];
//bool CheckCol[9][10];
//bool Check3x3[9][10];
//
//int NonRowBlank[9] = { 0, 0, 0, 0, 0, 0, 0, 0, 0 };
//int NonColBlank[9] = { 0, 0, 0, 0, 0, 0, 0, 0, 0 };
//int Non3x3Blank[9] = { 0, 0, 0, 0, 0, 0, 0, 0, 0 };
//
//
//
//struct Blank
//{
//	Blank(int R, int C, int* HintR, int* HintC, int* Hint3)
//		: Row(R), Col(C), TxT((R / 3) * 3 + (C /3))
//		, MaxHint(max(max(*HintR, *HintC), *Hint3))
//	{
//	}
//
//	bool operator>(const Blank& rhs) const
//	{
//		return MaxHint > rhs.MaxHint;
//	}
//	bool operator<(const Blank& rhs) const
//	{
//		return MaxHint < rhs.MaxHint;
//	}
//
//
//
//	/* 행 */
//	int Row;
//	/* 열 */
//	int Col;
//	/* 3x3 */
//	int TxT;
//
//	/* 주변 행 또는 열 또는 3x3 삼각형에서 얻을 수 있는 힌트 중 가장 큰 수 */
//	int MaxHint;
//};
//
//
//
//bool SolveSudoku(int(&Array)[9][9], vector<Blank>& Blanks)
//{
//	if (Blanks.size() == 0)
//	{
//		for (int i = 0; i < 9; ++i)
//		{
//			for (int j = 0; j < 9; ++j)
//			{
//				cout << Array[i][j] << " ";
//			}
//			cout << "\n";
//		}
//		cout << "\n";
//		return true;
//	}
//	bool bSuccess = false;
//	
//	Blank Target = Blanks[Blanks.size() - 1];
//	bool CheckFlag;
//	/* 숫자 점검 */
//	for (int i = 1; i <= 9; ++i)
//	{
//		CheckFlag = true;
//
//		if(!CheckRow[Target.Row][i] && !CheckCol[Target.Col][i] && !Check3x3[Target.TxT][i])
//		{
//			CheckRow[Target.Row][i] = true;
//			CheckCol[Target.Col][i] = true;
//			Check3x3[Target.TxT][i] = true;
//			Array[Target.Row][Target.Col] = i;
//			Blanks.pop_back();
//
//			bSuccess = SolveSudoku(Array, Blanks);
//			if (bSuccess == true)
//			{
//				return true;
//			}
//
//			CheckRow[Target.Row][i] = false;
//			CheckCol[Target.Col][i] = false;
//			Check3x3[Target.TxT][i] = false;
//			Array[Target.Row][Target.Col] = 0;
//			Blanks.push_back(Target);
//		}
//	}
//
//
//	return bSuccess;
//}
//
//
//int main()
//{
//	ios::sync_with_stdio(false);
//
//	int Sudoku[9][9];
//	vector<Blank> Blanks;
//	Blanks.reserve(82);
//	for (int i = 0; i < 9; ++i)
//	{
//		for (int j = 0; j < 9; ++j)
//		{
//			cin >> Sudoku[i][j];
//		}
//	}
//
//#ifdef DEBUG
//	Start = chrono::system_clock::now();
//#endif // DEBUG
//
//
//
//	/* Blank 정보 수집 */
//	for (int i = 0; i < 9; ++i)
//	{
//		for (int j = 0; j < 9; ++j)
//		{
//			if (Sudoku[i][j] != 0)
//			{
//				CheckRow[i][Sudoku[i][j]] = true;
//				CheckCol[j][Sudoku[i][j]] = true;
//				Check3x3[3 * (i / 3) + (j / 3)][Sudoku[i][j]] = true;
//
//
//				NonRowBlank[i]++;
//				NonColBlank[j]++;
//				Non3x3Blank[3 * (i / 3) + (j / 3)]++;
//			}
//		}
//	}
//
//
//	/* Blank에 정보 등록 */
//	for (int i = 0; i < 9; ++i)
//	{
//		for (int j = 0; j < 9; ++j)
//		{
//			if (Sudoku[i][j] == 0)
//			{
//				Blanks.push_back(Blank(i, j, &NonRowBlank[i], &NonColBlank[j], &Non3x3Blank[3 * (i / 3) + (j / 3)]));
//			}
//		}
//	}
//
//	/* 풀기 쉬운 문제부터 풀도록 정렬함(벡터 연산 특성상 역순으로 정렬). */
//	sort(Blanks.begin(), Blanks.end());
//
//	SolveSudoku(Sudoku, Blanks);
//
//	
//
//
//#ifdef DEBUG
//	chrono::nanoseconds Time = chrono::system_clock::now() - Start;
//	cout << "경과 시간 : " << Time.count() / 1000000000.0 << "\n";
//#endif // DEBUG
//
//	return 0;
//}


// 이게 정답
//#include <iostream>
//#include <algorithm>
//#include <set>
//#include <vector>
//#include <utility>
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
//bool CheckRow[9][10] = { false, };
//bool CheckCol[9][10] = { false, };
//bool Check3x3[9][10] = { false, };
//
//bool SolveSudoku(int(&Sudoku)[9][9], vector<pair<int,int>>& Blanks)
//{
//	if (Blanks.empty())
//		return true;
//	
//	pair<int, int> Blank = Blanks.back();
//
//	int Row = Blank.first;
//	int Col = Blank.second;
//	int Box = 3 * (Row / 3) + (Col / 3);
//
//	bool bSuccess = false;
//	for (int i = 1; i <= 9; ++i)
//	{
//		if (CheckRow[Row][i] == false && CheckCol[Col][i] == false && Check3x3[Box][i] == false)
//		{
//			//cout << "Row : " << Row << ", Col : " << Col << ", Value : " << i << "\n";
//			CheckRow[Row][i] = true;
//			CheckCol[Col][i] = true;
//			Check3x3[Box][i] = true;
//			Sudoku[Row][Col] = i;
//			Blanks.pop_back();
//
//			bSuccess = SolveSudoku(Sudoku, Blanks);
//			if (bSuccess == true)
//				return true;
//			Blanks.push_back({ Row, Col });
//			CheckRow[Row][i] = false;
//			CheckCol[Col][i] = false;
//			Check3x3[Box][i] = false;
//			Sudoku[Row][Col] = 0;
//		}
//	}
//
//	return bSuccess;
//}
//
//int main()
//{
//	ios::sync_with_stdio(false);
//	cin.tie(NULL);
//
//	int Sudoku[9][9];
//	vector< pair<int, int>> Blanks;
//	for (int i = 0; i < 9; i++)
//	{
//		for (int j = 0; j < 9; j++)
//		{
//			cin >> Sudoku[i][j];
//			if (Sudoku[i][j] != 0)
//			{
//				CheckRow[i][Sudoku[i][j]] = true;
//				CheckCol[j][Sudoku[i][j]] = true;
//				Check3x3[3 * (i / 3) + (j / 3)][Sudoku[i][j]] = true;
//			}
//			else
//				Blanks.emplace_back(i, j);
//
//		}
//	}
//
//	reverse(Blanks.begin(), Blanks.end());
//	SolveSudoku(Sudoku, Blanks);
//	for (int i = 0; i < 9; ++i)
//	{
//		for (int j = 0; j < 9; j++)
//		{
//			cout << Sudoku[i][j] << " ";
//		}
//		cout << "\n";
//	}
//	
//
//	return 0;
//}