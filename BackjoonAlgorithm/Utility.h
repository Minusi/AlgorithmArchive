#pragma once
#include <vector>
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
using namespace std;

#define TEST



/* 랜덤 라이브러리를 초기화하는 데 사용되는 플래그 */
static bool bInitRand = false;






/* 배열을 출력하는 함수입니다. */
template<typename T>
void Print(T* Array, unsigned int Start, unsigned int Size, unsigned int Line = 10)
{
#ifdef TEST
	unsigned int Count = 0;
	for (unsigned int i = Start; i < Size; ++i)
	{
		cout << Array[i] << " ";

		Count++;
		if (Count % Line == 0 && Count != Size)
		{
			cout << endl;
		}
	}
	cout << endl;
#endif // TEST
}



/* 단일 테스트데이터를 생성하는 함수입니다. */
template<typename T>
T GenerateSingleTestData(T Floor, T Ceil)
{
#ifdef TEST
	if (bInitRand == false)
	{
		srand((unsigned int)time(NULL));
		bInitRand = true;
	}

	if (Floor > Ceil) return Floor;

	T Data = rand() % (Ceil - Floor + 1) + Floor;
	return Data;
#endif // TEST
}



/* 원하는 수들 중에서 하나를 생성하는 이산적인 테스트데이터를 생성하는 함수입니다. */
template<typename T>
T GenerateDiscreteSingleTestData(const vector<T>& Elements)
{
#ifdef TEST
	if (bInitRand == false)
	{
		srand((unsigned int)time(NULL));
		bInitRand = true;
	}


	if (Elements.size() == 1)
	{
		return Elements[0];
	}
	else
	{
		size_t Index = rand() % Elements.size() - 1;
		return Elements[Index];
	}
#endif // TEST
}



/* 테스트데이터를 생성하는 함수입니다. */
template<typename T>
void GenerateTestData(unsigned int NumData, T Floor, T Ceil, vector<T>& Output)
{
#ifdef TEST
	if (bInitRand == false)
	{
		srand((unsigned int)time(NULL));
		bInitRand = true;
	}

	if (Floor > Ceil)	return;

	T SingleData;
	for (unsigned int i = 0; i < NumData; ++i)
	{
		SingleData = rand() % (Ceil - Floor + 1) + Floor;
		Output.push_back(SingleData);
	}
#endif // TEST
}

void GenerateTestString(unsigned int NumData, unsigned int MinLength, unsigned int MaxLength, vector<string>& Output);