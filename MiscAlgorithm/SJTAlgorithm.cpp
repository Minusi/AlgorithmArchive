//#include <iostream>
//#include <vector>
//#include <algorithm>
//
//using namespace std;
//
//
//
//bool IsMobile(int, vector<int>&, const vector<int>&);
//
//// 각 요소들이 움직일 수 있는 지 검사합니다.
//bool CheckMobiles(vector<int>& Array, const vector<int>& Directions)
//{
//	for (int i = 0; i < Array.size(); ++i)
//	{
//		if (IsMobile(i, Array, Directions))
//		{
//			return true;
//		}
//	}
//	return false;
//}
//
//// 해당 요소가 움직일 수 있는지 검사합니다.
//bool IsMobile(int p, vector<int>& Array, const vector<int>& Directions)
//{
//	// 첫 번째 요소가 왼쪽으로 이동할 수 있다면 false입니다.
//	if (p == 0 && Directions[p] == 0)
//	{
//		return false;
//	}
//	// 마지막 요소가 오른쪽으로 이동할 수 있다면 false입니다.
//	else if (p == Array.size() - 1 && Directions[p] == 1)
//	{
//		return false;
//	}
//	else
//	{
//		// 왼쪽으로 움직일 수 있고, 왼쪽 요소보다 값이 크면 true입니다.
//		if (Directions[p] == 0)
//		{
//			if (Array[p] > Array[p - 1])
//			{
//				return true;
//			}
//		}
//		// 오른쪽으로 움직일 수 있고, 오른쪽 요소보다 값이 크면 true입니다.
//		else
//		{
//			if (Array[p] > Array[p + 1])
//			{
//				return true;
//			}
//		}
//	}
//
//	// 그 외의 경우, 전부 false입니다.
//	return false;
//}
//
//
//
//// 움직일 수 있는 수 중 가장 큰 수의 인덱스를 찾습니다.
//int FindLargest(vector<int>& Array, const vector<int>& Directions)
//{
//	vector<int> MobileNumbers;
//
//	// 움직일 수 있는 모든 수에 대한 인덱스를 찾습니다.
//	for (int i = 0; i < Array.size(); ++i)
//	{
//		if (IsMobile(i, Array, Directions))
//		{
//			// 조건을 만족하면 인덱스를 삽입합니다.
//			MobileNumbers.push_back(i);
//		}
//	}
//
//	int Largest = MobileNumbers[0];
//
//	// 비교 연산을 통해 움직일 수 있는 가장 큰 수의 인덱스를 찾습니다.
//	for (int p = 1; p < MobileNumbers.size(); ++p)
//	{
//		if (Array[MobileNumbers[p]] > Array[Largest])
//		{
//			Largest = MobileNumbers[p];
//		}
//	}
//
//	// 인덱스를 반환합니다.
//	return Largest;
//}
//
//
//
//// 메인 함수
//void SJTAlgorithm(vector<int>& Array)
//{
//	int k;
//	vector<int> Directions;
//
//	for (const auto it : Array)
//	{
//		Directions.push_back(0);
//	}
//
//	for (const auto it : Array)
//	{
//		cout << it << " ";
//	}
//	cout << endl;
//
//	// 배열에서 움직일 수 있는 요소가 없을 때까지 반복합니다.
//	while (CheckMobiles(Array, Directions))
//	{
//		// 가장 큰 수의 인덱스를 찾아서 왼쪽으로 움직일 수 있다면 스왑합니다.
//		k = FindLargest(Array, Directions);
//		if (Directions[k] == 0)
//		{
//			swap(Array[k], Array[k - 1]);
//			swap(Directions[k], Directions[k - 1]);
//			k = k - 1;
//		}
//		// 그 외의 경우, 오른쪽으로 스왑합니다.
//		else
//		{
//			swap(Array[k], Array[k + 1]);
//			swap(Directions[k], Directions[k + 1]);
//			k += 1;
//		}
//
//		for (int i = 0; i < Array.size(); ++i)
//		{
//			if (Array[i] > Array[k])
//			{
//				if (Directions[i] == 0)
//				{
//					Directions[i] = 1;
//				}
//				else
//				{
//					Directions[i] = 0;
//				}
//			}
//		}
//
//		for (const auto it : Array)
//		{
//			cout << it << " ";
//		}
//		cout << endl;
//	}
//}
//
//
//
//void main()
//{
//	vector<int> Array = { 1,2,3,4 };
//	SJTAlgorithm(Array);
//}