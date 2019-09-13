//#include <iostream>
//#include <functional>
//#include <cstdlib>
//#include <cmath>
//#include <algorithm>
//using namespace std;
////#define TEST
//
//
//
///* 미팅 일정과 관련된 구조체 */
//struct Meeting
//{
//	unsigned int TimeStart = 0;
//	unsigned int TimeEnd = 0;
//	
//	bool operator>(const Meeting& Rhs) const
//	{
//		if (TimeEnd > Rhs.TimeEnd)	return true;
//		else if (TimeEnd == Rhs.TimeEnd && TimeStart > Rhs.TimeStart)	return true;
//		else return false;
//	}
//	bool operator>=(const Meeting& Rhs) const
//	{
//		if (TimeEnd >= Rhs.TimeEnd)	return true;
//		else if (TimeEnd == Rhs.TimeEnd && TimeStart >= Rhs.TimeStart)	return true;
//		else return false;
//	}
//	bool operator<(const Meeting& Rhs) const
//	{
//		if (TimeEnd < Rhs.TimeEnd)	return true;
//		else if (TimeEnd == Rhs.TimeEnd && TimeStart < Rhs.TimeStart)	return true;
//		else return false;
//	}
//	bool operator<=(const Meeting& Rhs) const
//	{
//		if (TimeEnd < Rhs.TimeEnd)	return true;
//		else if (TimeEnd == Rhs.TimeEnd && TimeStart <= Rhs.TimeStart)	return true;
//		else return false;
//	}
//
//	void Reset()
//	{
//		TimeStart = 0xFFFFFFFF;
//		TimeEnd = 0xFFFFFFFF;
//	}
//};
//
//
//
//void Print(const Meeting* Meetings, int N)
//{
//#ifdef TEST
//	for (int i = 0; i < N; ++i)
//	{
//		cout << Meetings[i].TimeStart << "\t" << Meetings[i].TimeEnd << endl;
//	}
//	cout << endl;
//#endif // TEST
//}
//
//
//
//
//int main()
//{
//	/* 회의의 수 */
//	unsigned int N;
//	cin >> N;
//
//
//
//	/* 유효성 검사 */
//	if (N > 100000)
//	{
//		return -1;
//	}
//
//	/* 각 회의 시간에 대한 정보(오름차순) */
//	Meeting* Meetings = new Meeting[100000];
//
//	for (unsigned int i = 0; i < N; ++i)
//	{
//		cin >> Meetings[i].TimeStart;
//		cin >> Meetings[i].TimeEnd;
//
//		/* 입력 유효성 검사 */
//		if (Meetings[i].TimeStart > 0xFFFFFFFF
//			|| Meetings[i].TimeEnd > pow(2,32) - 1)
//		{
//			return -1;
//		}
//	}
//
//	
//
//	sort(Meetings, Meetings + N);
//	Print(Meetings, N);
//
//
//
//	int NumContains = 0;
//	Meeting LastMeeting;
//
//	/*
//	 *	회의가 끝나는 시간을 오름차순으로 정렬하면, 0번째 인덱스는 무조건 회의를 진행해야 한다.
//	 *	0번째 인덱스를 빼는 것은 어떠한 경우에서도 득이 되지 않기 때문.
//	 *	이후, 탐욕 알고리즘을 적용하여 추가할 수 있는 것들을 몽땅 추가한다.
//	 */
//	for (unsigned int i = 0; i < N; ++i)
//	{
//		if (Meetings[i].TimeStart >= LastMeeting.TimeEnd)
//		{
//#ifdef TEST
//			cout << Meetings[i].TimeStart << "\t" << Meetings[i].TimeEnd << endl;
//#endif // TEST
//
//			LastMeeting = Meetings[i];
//			NumContains++;
//		}
//	}
//
//	cout << NumContains << endl;
//	return 0;
//}
