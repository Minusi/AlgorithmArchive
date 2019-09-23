//#include <cstdlib>
//#include <iostream>
//#include <vector>
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
//int Max = -2000000000;
//int Min = 2000000000;
//
//int Calculate(int Lhs, int Operator, int Rhs)
//{
//	enum Op
//	{
//		ADD = 0,
//		SUB = 1,
//		MUL = 2,
//		DIV = 3
//	};
//	
//
//// 인자 디버깅
//#ifdef DEBUG
//	cout << Lhs << ", " << Operator << ", " << Rhs << endl;
//#endif // DEBUG
//
//
//	switch (Operator)
//	{
//	case ADD:
//		return Lhs + Rhs;
//	case SUB:
//		return Lhs - Rhs;
//	case MUL:
//		return Lhs * Rhs;
//	case DIV:
//		return Lhs / Rhs;
//	default:
//		exit(-1);
//	}
//}
//
//
//
//void InsertOps(const vector<int>& Operands, vector<int>& Operators, vector<int> Indices)
//{
//	if (Indices.size() > Operands.size() - 1)
//		return;
//
//	/* 계산 수행 */
//	if (Indices.size() == Operands.size() - 1)
//	{
//		int ReturnValue = Operands[0];
//		for (int i = 0; i < Operands.size() - 1; ++i)
//		{
//			ReturnValue = Calculate(ReturnValue, Indices[i], Operands[i + 1]);
//		}
//
//		if (ReturnValue > Max) Max = ReturnValue;
//		if (ReturnValue < Min) Min = ReturnValue;
//	}
//	
//	int OperatorIndex = -1;
//	for (int i = 1; i <= Operators.back(); ++i)
//	{
//		if (Operators[0] >= i)
//		{
//			//cout << i << "인덱스 : " << Operators[1] << "+\n";
//			OperatorIndex = 0;
//		}
//		else if (Operators[1] >= i - Operators[0])
//		{
//			//cout << i << "인덱스 : " << Operators[1] << "-\n";
//			OperatorIndex = 1;
//		}
//		else if (Operators[2] >= i - Operators[0] - Operators[1])
//		{
//			//cout << i << "인덱스 : " << Operators[1] << "*\n";
//			OperatorIndex = 2;
//		}
//		else if (Operators[3] >= i - Operators[0] - Operators[1] - Operators[2])
//		{
//			//cout << i << "인덱스 : " << Operators[1] << "/\n";
//			OperatorIndex = 3;
//		}
//		else
//			exit(-1);
//
//		
//		Indices.push_back(OperatorIndex);
//		Operators[OperatorIndex]--;
//		Operators.back()--;
//		
//		InsertOps(Operands, Operators, Indices);
//
//		Operators.back()++;
//		Operators[OperatorIndex]++;
//		Indices.pop_back();
//	}
//}
//
//
//
//int main()
//{
//	ios::sync_with_stdio(false);
//
//	int N;
//	cin >> N;
//
//	/* 피연산자들 */
//	vector<int> Operands;
//
//	/* 피연산자 등록 */
//	Operands.reserve(N);
//	Operands.resize(N);
//	for (int i = 0; i < N; ++i)
//	{
//		cin >> Operands[i];
//	}
//
//	/* 0 : 덧셈 개수, 1 : 뺄셈 개수, 2 : 곱셈 개수, 3 : 나눗셈 개수, 4 : 연산자 개수(mutable) */
//	vector<int> Operators;
//
//	/* 연산자 등록 */
//	Operators.reserve(5);
//	Operators.resize(5);
//	for (int i = 0; i < Operators.size() - 1; ++i)
//	{
//		cin >> Operators[i];
//	}
//	Operators[4] = N - 1;
//
////#ifdef DEBUG
////	for (const auto& it : Operators)
////	{
////		cout << it << " ";
////	}
////	cout << "\n";
////#endif // DEBUG
//
//
//
//	vector<int> Indices;
//	Indices.reserve(N - 1);
//	InsertOps(Operands, Operators, Indices);
//
//	cout << Max << "\n";
//	cout << Min << "\n";
//	return 0;
//}