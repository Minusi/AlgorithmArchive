	//#include <iostream>
	//#include <iomanip>
	//#include <cmath>
	//using namespace std;
	//#define TEST
	//#undef TEST

	//#ifdef TEST
	//#include <cstdlib>
	//#include <ctime>
	//#endif // TEST


	//int main()
	//{
	//	int T;
	//	cin >> T;
	//
	//	srand(time(NULL));
	//	for (int tc = 1; tc <= T; ++tc)
	//	{
	//		int X1, Y1, X2, Y2;
	//		unsigned int R1, R2;

	//#ifdef TEST
	//		X1 = (rand() % 20001) - 10000;
	//		Y1 = (rand() % 20001) - 10000;
	//		X2 = (rand() % 20001) - 10000;
	//		Y2 = (rand() % 20001) - 10000;
	//		R1 = rand() % 10000 + 1;
	//		R2 = rand() % 10000 + 1;
	//		cout << X1 << " " << Y1 << " " << R1 << " " << X2 << " " << Y2 << " " << R2 << endl;
	//#else
	//		cin >> X1 >> Y1 >> R1;
	//		cin >> X2 >> Y2 >> R2;
	//#endif // TEST


	//		/* 유효성 검사 */
	//		if (abs(X1) > 10000
	//			|| abs(Y1) > 10000
	//			|| abs(X2) > 10000
	//			|| abs(Y2) > 10000
	//			|| R1 > 10000
	//			|| R2 > 10000)
	//		{
	//			return -1;
	//		}



	//		int NumIntersection = -2;
	//		/* 두 원이 동심원일 경우 */
	//		if (X1 == X2 && Y1 == Y2)
	//		{
	//			/* 관측 거리가 같으면 접점이 무한 개라 -1 */
	//			if (R1 == R2)
	//			{
	//				NumIntersection = -1;
	//			}
	//			/* 관측 거리가 다르면 접점이 0개 */
	//			else
	//			{
	//				NumIntersection = 0;
	//			}
	//		}
	//		/* 두 원이 동심원이 아닌 경우 */
	//		else
	//		{
	//			double Distance = sqrt(pow(abs(X2 - X1), 2) + pow(abs(Y2 - Y1), 2));
	//#ifdef TEST
	//			cout << "Distance : " << Distance << endl;
	//#endif // TEST

	//			/* 두 원의 반지름의 차가 두 원의 중심의 거리보다 크면 겹치지만 교점이 없는 원이 형성됨 */
	//			if (Distance < abs((int)R2 - (int)R1))
	//			{
	//				NumIntersection = 0;
	//			}
	//			/* 두 원의 반지름의 차가 두 원의 중심의 거리와 같으면 내접하는 원이 형성됨 */
	//			else if (Distance == abs((int)R2 - (int)R1))
	//			{
	//				NumIntersection = 1;
	//			}
	//			/* 두 원의 반지름의 차가 두 원의 중심의 거리보다 작지만,
	//				두 원의 반지름의 합이 두 원의 중심의 거리보다 크면, 교점이 2개인 원이 형성됨 */
	//			else if (Distance > abs((int)R2 - (int)R1) &&
	//				Distance < (R1 + R2))
	//			{
	//				NumIntersection = 2;
	//			}
	//			/* 두 원의 반지름의 합이 두 원의 중심의 거리와 같으면 외접하는 원이 형성됨 */
	//			else if (Distance == R1 + R2)
	//			{
	//				NumIntersection = 1;
	//			}
	//			/* 두 원의 반지름의 합이 두 원의 중심의 거리보다 작으면 만나지 않는 원이 형성됨 */
	//			else if (Distance > (R1 + R2))
	//			{
	//				NumIntersection = 0;
	//			}
	//		}

	//		cout << NumIntersection << endl;
	//	}
	//}