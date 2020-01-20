//#include <iostream>
//#include <vector>
//#include <cmath>
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
///* ���� :
//	An = nũ�� ���� ���� ������ ũ���� ������ �ٸ� ��տ� ���� ��� ���� �ø��� �ּ����� �̵� ��
//	��� �� ��,
//	
//	n = 0, A0 = 0
//	n = 1, A1 = 2
//	n = 2, A2 = 6
//	n = 3, A3 = 14�� ���� ����Ǿ�, An = 2^(n+1) - 2�̴�.
//	
//	���ϰ��� �ϴ� ������ Bn�̶�� �ϸ�, ������ ������ �����ؾ� �Ѵ� :
//	- N-1ũ�� ������ 3�� ������� ������(An)
//	- Nũ�� ���� ������ 2�� ������� �̵���(1)
//	- N-1ũ�� ������ 3������ 2�� ������� ������(An)
//	- Nũ�� �� ������ 3�� ������� �̵���(1)
//	- N-1ũ�� ������ 2������ 1�� ������� ������(An)
//	- Nũ�� ���� ������ 2������ 3�� ������� �̵���(1)
//	- N-1ũ�� ������ 1������ 3�� ������� ������(An)
//	= (An + 1 + An) + 1 + (An + 1 + An)
//
//	�̸� �����ϸ� ���������� ������ ���� : 
//	= 2^(n+2) - 5
//*/
//
//long long ModularPow(int Lhs, int Rhs, long long mod)
//{
//	vector<int> Storage;
//	for (int i = 0; pow(Lhs, i) < mod; ++i)
//		Storage.push_back(pow(Lhs, i));
//	
//	if (Rhs <= Storage.size() - 1)
//		return pow(Lhs, Rhs);
//
//	int NumOp = static_cast<int>(Rhs / (Storage.size() - 1));
//	int NumRemainder = static_cast<int>(Rhs % (Storage.size() - 1));
//
//	long long Result = 1;
//	for (int i = 0; i < NumOp; ++i)
//		Result = (Result * Storage.back()) % mod;
//	Result = (Result * Storage[NumRemainder]) % mod;
//
//	return Result;
//}
//
//
//int main()
//{
//	ios::sync_with_stdio(false);
//	cin.tie(NULL);
//
//	int N;
//	cin >> N;
//
//	int Mod = static_cast<int>(pow(10, 9) + 7);
//	long long Answer = (ModularPow(2, N + 2, Mod) - 5) % Mod; 
//
//	cout << Answer << "\n";
//	return 0;
//}