//#include <iostream>
//#include <cstring>
//#include <cmath>
//#include <vector>
//using namespace std;
//
//
//
//int main()
//{
//	int N;
//	cin >> N;
//
//	/* 유효성 검사 */
//	if (N < 1 || N > 10000000)
//	{
//		return -1;
//	}
//
//	vector<int> Primes;
//	int Size = (int)ceil(sqrt(10000000)) + 1;
//	Primes.reserve(Size);
//
//	bool* CheckPrime = new bool[Size];
//	memset(CheckPrime, true, sizeof(bool) * Size);
//	CheckPrime[0] = CheckPrime[1] = false;
//	for (int i = 2; i <= Size; ++i)
//	{
//		int Temp;
//		if (CheckPrime[i] == true)
//		{
//			Primes.push_back(i);
//			Temp = i;
//			for (int j = i + Temp; j <= Size; j = j + Temp)
//			{
//				CheckPrime[j] = false;
//			}
//		}
//	}
//
//#ifdef TEST
//	int Count = 0;
//	for (int i = 1; i < Size; ++i)
//	{
//		cout << CheckPrime[i] << " ";
//		Count++;
//
//		if (Count % 10 == 0)
//		{
//			cout << endl;
//		}
//	}
//#endif // TEST
//
//	
//
//	int DividedN = N;
//	for (unsigned int i = 0; i < Primes.size(); ++i)
//	{
//		if (Primes[i] > DividedN)
//			break;
//
//		while((DividedN % Primes[i]) == 0)
//		{
//			DividedN = DividedN / Primes[i];
//			cout << Primes[i] << endl;
//		}
//	}
//	
//	if (DividedN > 1)
//	{
//		cout << DividedN << endl;
//	}
//	return 0;
//}