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
///* 공식 :
//	An = n크기 원반 위에 놓여진 크기의 갯수를 다른 기둥에 색깔 상관 없이 올리는 최소한의 이동 수
//	라고 할 때,
//	
//	n = 0, A0 = 0
//	n = 1, A1 = 2
//	n = 2, A2 = 6
//	n = 3, A3 = 14에 의해 도출되어, An = 2^(n+1) - 2이다.
//	
//	구하고자 하는 문제를 Bn이라고 하면, 다음의 과정을 수행해야 한다 :
//	- N-1크기 원판이 3번 기둥으로 조립됨(An)
//	- N크기 레드 원판이 2번 기둥으로 이동함(1)
//	- N-1크기 원판이 3번에서 2번 기둥으로 조립됨(An)
//	- N크기 블랙 원판이 3번 기둥으로 이동함(1)
//	- N-1크기 원판이 2번에서 1번 기둥으로 조립됨(An)
//	- N크기 레드 원판이 2번에서 3번 기둥으로 이동함(1)
//	- N-1크기 원판이 1번에서 3번 기둥으로 조립됨(An)
//	= (An + 1 + An) + 1 + (An + 1 + An)
//
//	이를 정리하면 최종적으로 다음과 같다 : 
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