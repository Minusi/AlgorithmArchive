//#include <iostream>
//#include <cassert>
//#include <string>
//using namespace std;
////#define TEST
//
//
//int main()
//{
//	string Expression;
//	cin >> Expression;
//
//	int Sum = 0;
//	
//	string Num;
//	Num.reserve(5);
//	/* Num이 양수인지 여부 */
//	bool bNumPositive = true;
//
//	/* 첫 번째 숫자인지 여부 */
//	bool bFirstNumeric = true;
//	/* 이전 문자가 숫자였는지 여부 */
//	bool bPrevIsNumeric = false;
//	
//
//
//	for (const auto& it : Expression)
//	{
//#ifdef TEST
//		cout << "it : " << it << endl;
//#endif // TEST
//
//		/* 문자가 숫자일 때 */
//		if (it >= '0' && it <= '9')
//		{
//			/* 이전 문자도 숫자일 때 */
//			if (bPrevIsNumeric == true)
//			{
//				Num += it;
//			}
//			/* 이전 문자가 숫자가 아닐 때 */
//			else
//			{
//				assert(Num.size() == 0);
//				Num = it;
//			}
//
//			bPrevIsNumeric = true;
//		}
//		/* 문자가 숫자가 아닐 때 */
//		else
//		{
//			/* 수를 총합에 더합니다. */
//			if (bNumPositive == true)
//			{
//				Sum += stoi(Num);
//			}
//			else
//			{
//				Sum -= stoi(Num);
//			}
//
//			if (it == '+')
//			{
//				assert(bPrevIsNumeric == true);				
//			}
//			else if (it == '-')
//			{
//				assert(bPrevIsNumeric == true);
//				bNumPositive = false;
//			}
//			else
//			{
//				return -1;
//			}
//
//			bPrevIsNumeric = false;
//			Num.clear();
//		}
//
//#ifdef TEST
//		cout << "Sum : " << Sum << endl;
//#endif // TEST
//
//	}
//
//	/* 마지막 숫자가 처리되지 않으므로 따로 처리해줍니다. 깔끔한 코드는 아니지만 귀찮습니다. */
//	assert(bPrevIsNumeric == true);
//	if (bNumPositive == true)
//	{
//		Sum += stoi(Num);
//	}
//	else
//	{
//		Sum -= stoi(Num);
//	}
//	bPrevIsNumeric = false;
//	Num.clear();
//
//	cout << Sum << endl;
//
//	return 0;
//}