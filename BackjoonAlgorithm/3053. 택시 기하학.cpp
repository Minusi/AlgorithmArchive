//#include <iostream>
//#include <iomanip>
//#define M_PI       3.14159265358979323846
//
//using namespace std;
//
//
//
//int main()
//{
//	unsigned int Radius;
//	cin >> Radius;
//
//	/* 유효성 검사 */
//	if (Radius > 10000)
//		return -1;
//
//
//	/* 택시 기하학의 원의 넓이는 길이와 높이가 Radius인 직각삼각형 4개의 넓이와 같다 */
//	long double EuclideArea = M_PI *  Radius * Radius;
//	long double TaxiArea = 2 * Radius * Radius;
//	
//	cout << fixed << setprecision(6) << EuclideArea << endl;
//	cout << TaxiArea << endl;
//
//	return 0;
//}