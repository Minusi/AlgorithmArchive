	//#include <iostream>
	//using namespace std;

	////#define DEBUG
	//#ifdef DEBUG
	//#include <algorithm>
	//#include <chrono>
	//#include "Utility.h"

	//chrono::system_clock::time_point Start;
	//chrono::nanoseconds Time;
	//#endif



	//int main()
	//{
	//	ios::sync_with_stdio(false);
	//	cin.tie(NULL);

	//	int A, B, N, W;
	//#ifdef DEBUG
	//	A = GenerateSingleTestData<int>(2, 5);
	//	B = GenerateSingleTestData<int>(5, 15);
	//	N = GenerateSingleTestData<int>(10, 15);
	//	W = GenerateSingleTestData<int>(A*N, B*N);
	//	cout << A << " " << B << " " << N << " " << W << "\n";
	//#else
	//	cin >> A >> B >> N >> W;
	//#endif // DEBUG


	//	int NumSheep;
	//	int NumGoats;

	//	int UniqueSheep;
	//	int UniqueGoats;
	//	bool bAnswer = false;
	//	bool bLoop = false;
	//	for (int i = 1; i <= N - 1; ++i)
	//	{
	//		NumSheep = N - i;
	//		NumGoats = i;

	//		if (W == NumSheep * A + NumGoats * B)
	//		{
	//			if (bAnswer == false)
	//			{
	//				bAnswer = true;
	//				UniqueSheep = NumSheep;
	//				UniqueGoats = NumGoats;
	//			}
	//			else
	//				bLoop = true;
	//		}

	//		if (bLoop)
	//			break;
	//	}

	//	if (bLoop == true || bAnswer == false)
	//		cout << -1 << "\n";
	//	else
	//		cout << UniqueSheep << " " << UniqueGoats << "\n";

	//	return 0;
	//}