//#include <iostream>
//#include <string>
//#include <cmath>
//#include <deque>
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
//void CheckGearPolarity(const deque<int>(&Gear)[5], int (&DesiredRot)[5], int SrcNum, int SrcRot, int DestNum = -1)
//{
//	if (DestNum == -1)
//	{
//		DesiredRot[SrcNum] = SrcRot;
//		CheckGearPolarity(Gear, DesiredRot, SrcNum, SrcRot, SrcNum + 1);
//		CheckGearPolarity(Gear, DesiredRot, SrcNum, SrcRot, SrcNum - 1);
//		return;
//	}
//
//	if (SrcNum < 1 || DestNum < 1 || SrcNum > 4 || DestNum > 4)
//		return;
//
//	int SrcPolar, DestPolar;
//	if (SrcNum < DestNum)
//	{
//		SrcPolar = Gear[SrcNum].at(2);
//		DestPolar = Gear[DestNum].at(6);
//	}
//	else if (SrcNum > DestNum)
//	{
//		SrcPolar = Gear[SrcNum].at(6);
//		DestPolar = Gear[DestNum].at(2);
//	}
//
//	if (SrcPolar != DestPolar && SrcRot != 0)
//		DesiredRot[DestNum] = -SrcRot;
//	else
//		DesiredRot[DestNum] = 0;
//
//	SrcNum > DestNum ?
//		CheckGearPolarity(Gear, DesiredRot, DestNum, DesiredRot[DestNum], DestNum - 1) :
//		CheckGearPolarity(Gear, DesiredRot, DestNum, DesiredRot[DestNum], DestNum + 1);
//}
//
//void RotateGear(deque<int>(&Gear)[5], const int(&DesiredRot)[5])
//{
//	for (int i = 1; i <= 4; ++i)
//	{
//		/* 반시계 방향 */
//		if (DesiredRot[i] == -1)
//		{
//			Gear[i].push_back(Gear[i].front());
//			Gear[i].pop_front();
//		}
//		/* 회전 금지 */
//		else if (DesiredRot[i] == 0)
//		{
//			continue;
//		}
//		/* 시계 방향 */
//		else if(DesiredRot[i] == 1)
//		{
//			Gear[i].push_front(Gear[i].back());
//			Gear[i].pop_back();
//		}
//	}
//}
//
//int main()
//{
//	ios::sync_with_stdio(false);
//	cin.tie(NULL);
//
//	deque<int> Gear[5];
//	int DesiredRot[5];
//	string Buffer;
//	for (int i = 1; i <= 4; ++i)
//	{
//		cin >> Buffer;
//		for (int j = 0; j < 8; ++j)
//			Gear[i].push_back(Buffer[j] - '0');
//	}
//
//	int K, TgtGear, RotateDir;
//	cin >> K;
//
//	for (int i = 0; i < K; ++i)
//	{
//		cin >> TgtGear >> RotateDir;
//		CheckGearPolarity(Gear, DesiredRot, TgtGear, RotateDir);
//		RotateGear(Gear, DesiredRot);
//	}
//
//	int Answer = 0;
//	for (int i = 1; i <= 4; ++i)
//	{
//		
//		if (Gear[i].front() == 1)
//			Answer += pow(2, i - 1);
//	}
//
//	cout << Answer << "\n";
//	return 0;
//}