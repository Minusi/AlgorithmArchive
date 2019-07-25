/////////////////////////////////////////////////////////////////////////////////////////////
// 기본 제공코드는 임의 수정해도 관계 없습니다. 단, 입출력 포맷 주의
// 아래 표준 입출력 예제 필요시 참고하세요.
// 표준 입력 예제
// int a;
// float b, c;
// double d, e, f;
// char g;
// char var[256];
// long long AB;
// cin >> a;                            // int 변수 1개 입력받는 예제
// cin >> b >> c;                       // float 변수 2개 입력받는 예제 
// cin >> d >> e >> f;                  // double 변수 3개 입력받는 예제
// cin >> g;                            // char 변수 1개 입력받는 예제
// cin >> var;                          // 문자열 1개 입력받는 예제
// cin >> AB;                           // long long 변수 1개 입력받는 예제
/////////////////////////////////////////////////////////////////////////////////////////////
// 표준 출력 예제
// int a = 0;                            
// float b = 1.0, c = 2.0;               
// double d = 3.0, e = 0.0; f = 1.0;
// char g = &apos;b&apos;;
// char var[256] = &quot;ABCDEFG&quot;;
// long long AB = 12345678901234567L;
// cout << a;                           // int 변수 1개 출력하는 예제
// cout << b << &quot; &quot; << c;               // float 변수 2개 출력하는 예제
// cout << d << &quot; &quot; << e << &quot; &quot; << f;   // double 변수 3개 출력하는 예제
// cout << g;                           // char 변수 1개 출력하는 예제
// cout << var;                         // 문자열 1개 출력하는 예제
// cout << AB;                          // long long 변수 1개 출력하는 예제
/////////////////////////////////////////////////////////////////////////////////////////////


//#pragma warning(disable:4996)

//#include <iostream>
//#include <cmath>
//#include <string>
//#include <vector>
//
//using namespace std;
//#define TEST
//#ifdef TEST
//#define print(x) cout << x << "\n";
//#else
//#define print(x)
//#endif // TEST
//
//
//
//class BigInteger
//{
//public:
//	BigInteger()
//	{
//		ints = "0";
//		bPositive = true;
//	}
//	BigInteger(string in, bool positive)
//	{
//		ints = in;
//		bPositive = positive;
//	}
//	BigInteger(string in)
//	{
//		ints = in;
//		bPositive = true;
//	}
//	BigInteger(int in)
//	{
//		ints = to_string(in);
//		bPositive = true;
//	}
//
//	string Add(const string& lhs, const string& rhs)
//	{
//		// cout << "lhs : " << lhs << ", rhs : " << rhs << endl;
//		string res = "";
//
//		auto it = lhs.rbegin();
//		auto jt = rhs.rbegin();
//
//		int ldigit;
//		int rdigit;
//
//		char pch1;
//		char pch2;
//
//		int result = 0;
//		int carry = 0;
//
//		bool lend = false;
//		bool rend = false;
//		while (it != lhs.rend() || jt != rhs.rend())
//		{
//			if (it == lhs.rend())
//			{
//				ldigit = 0;
//			}
//			else
//			{
//				pch1 = *it;
//				// cout << "pch1 : " << pch1 << endl;
//				ldigit = pch1 - 0x30;
//				// cout << "ldigit : " << ldigit << endl;
//			}
//
//			if (jt == rhs.rend())
//			{
//				rdigit = 0;
//			}
//			else
//			{
//				pch2 = *jt;
//				// cout << "pch2 : " << pch2 << endl;
//				rdigit = pch2 - 0x30;
//				// cout << "ldigit : " << ldigit << endl;
//			}
//
//
//			result = ldigit + rdigit + carry;
//			// cout << "reslut : " << result << ", ldigit : " << ldigit << ", rdigit : " << rdigit << ", carry : " << carry << endl;
//
//			if (result >= 10)
//			{
//				carry = 1;
//				result -= 10;
//			}
//			else
//			{
//				carry = 0;
//			}
//
//			char buf[2];
//			sprintf(buf, "%d", result);
//			res.insert(res.begin(), *buf);
//
//			if (it != lhs.rend())
//			{
//				it++;
//			}
//			else
//			{
//				lend = true;
//			}
//			if (jt != rhs.rend())
//			{
//				jt++;
//			}
//			else
//			{
//				rend = true;
//			}
//		}
//
//		if (carry == 1)
//		{
//			res.insert(res.begin(), '1');
//		}
//		return res;
//	}
//
//	string Sub(const string& big, const string& small)
//	{
//		string res = "";
//
//		auto it = big.rbegin();
//		auto jt = small.rbegin();
//
//		char lch;
//		char rch;
//		int ldigit;
//		int rdigit;
//
//		int result = 0;
//		int debt = 0;
//		int test = 0;
//		while (it != big.rend() || jt != small.rend())
//		{
//
//			if (it == big.rend())
//			{
//				ldigit = 0;
//			}
//			else
//			{
//				lch = *it;
//				ldigit = lch - 0x30;
//			}
//
//			if (jt == small.rend())
//			{
//				rdigit = 0;
//			}
//			else
//			{
//				rch = *jt;
//				rdigit = rch - 0x30;
//			}
//
//
//			result = ldigit - rdigit - debt;
//			// cout << "Result : " << result << ", ldigit : " << ldigit << ", rdigit : " << rdigit << ", debt : " << debt << endl;
//
//			if (result < 0)
//			{
//				debt = 1;
//				result += 10;
//			}
//			else
//			{
//				debt = 0;
//			}
//
//			char buf[2];
//			sprintf(buf, "%d", result);
//			res.insert(res.begin(), *buf);
//
//			if (it != big.rend())
//			{
//				it++;
//			}
//			if (jt != small.rend())
//			{
//				jt++;
//			}
//		}
//
//		return res;
//	}
//
//	string _Mul(const string& lhs, const char ch)
//	{
//		string res = "0";
//		string temp = lhs;
//		for (int i = 0; i < ch - 0x30; ++i)
//		{
//			res = Add(res, temp);
//		}
//
//		return res;
//	}
//
//	string Mul(const string& lhs, const string& rhs)
//	{
//		vector<string> res;
//		string temp = lhs;
//		string mid_res;
//		string final_res = "0";
//
//		auto jt = rhs.rbegin();
//
//		while (jt != rhs.rend())
//		{
//			mid_res = _Mul(temp, *jt);
//			res.push_back(mid_res);
//			temp.append("0");
//
//			++jt;
//		}
//
//
//		for (const auto& it : res)
//		{
//			final_res = Add(final_res, it);
//		}
//		return final_res;
//	}
//
//	BigInteger& operator+(const BigInteger& rhs)
//	{
//		if ((bPositive == true && rhs.IsPositive() == true)
//			|| bPositive == false && rhs.IsPositive() == false)
//		{
//			ints = Add(ints, rhs.GetInts());
//		}
//		else
//		{
//			switch (AbsBiggerThan(rhs))
//			{
//			case -1:
//				ints = Sub(rhs.GetInts(), ints);
//				bPositive = !bPositive;
//				break;
//			case 0:
//				ints.clear();
//				ints = "0";
//				bPositive = true;
//				break;
//			case 1:
//				ints = Sub(ints, rhs.GetInts());
//				break;
//			default:
//				cout << "????" << "\n";
//			}
//		}
//
//		return *this;
//	}
//
//	BigInteger& operator-(const BigInteger& rhs)
//	{
//		if ((bPositive == true && rhs.IsPositive() == false)
//			|| bPositive == false && rhs.IsPositive() == true)
//		{
//			ints = Add(ints, rhs.GetInts());
//		}
//		else
//		{
//			switch (AbsBiggerThan(rhs))
//			{
//			case -1:
//				ints = Sub(rhs.GetInts(), ints);
//				bPositive = !bPositive;
//				break;
//			case 0:
//				ints.clear();
//				ints = "0";
//				bPositive = true;
//				break;
//			case 1:
//				ints = Sub(ints, rhs.GetInts());
//				break;
//			}
//		}
//
//		if (ints.front() == '0' && ints.size() > 1)
//		{
//			ints.erase(ints.begin());
//		}
//		return *this;
//	}
//
//	BigInteger& operator*(const BigInteger& rhs)
//	{
//		if ((bPositive == true && rhs.IsPositive() == true)
//			|| bPositive == false && rhs.IsPositive() == false)
//		{
//			bPositive = true;
//		}
//		else
//		{
//			bPositive = false;
//		}
//
//		ints = Mul(ints, rhs.GetInts());
//
//		return *this;
//	}
//
//	int IsBiggerThan(const BigInteger& rhs)
//	{
//		if (bPositive == true && rhs.IsPositive() == false)
//		{
//			return 1;
//		}
//		else if (bPositive == false && rhs.IsPositive() == true)
//		{
//			return -1;
//		}
//		else
//		{
//			if (ints.size() > rhs.GetInts().size())
//			{
//				return 1;
//			}
//			else if (ints.size() < rhs.GetInts().size())
//			{
//				return -1;
//			}
//			else
//			{
//				for (auto it = ints.begin(), jt = rhs.GetInts().begin(); it != ints.end(); ++it, ++jt)
//				{
//					int ldigit = static_cast<int>(*it);
//					int rdigit = static_cast<int>(*jt);
//
//					if (ldigit > rdigit)
//					{
//						if (bPositive == true && rhs.IsPositive())
//						{
//							return 1;
//						}
//						else
//						{
//							return -1;
//						}
//					}
//					else if (ldigit < rdigit)
//					{
//						if (bPositive == true && rhs.IsPositive() == true)
//						{
//							return -1;
//						}
//						else
//						{
//							return 1;
//						}
//					}
//
//					continue;
//				}
//
//				return 0;
//			}
//		}
//	}
//
//	int AbsBiggerThan(const BigInteger& rhs)
//	{
//		if (ints.size() > rhs.GetInts().size())
//		{
//			return 1;
//		}
//		else if (ints.size() < rhs.GetInts().size())
//		{
//			return -1;
//		}
//		else
//		{
//
//			char lch, rch;
//			auto it = ints.begin();
//			auto jt = rhs.GetIntsConst().begin();
//			while (it != ints.end() && jt != rhs.GetIntsConst().end())
//			{
//				lch = *it;
//				rch = *jt;
//
//				int ldigit = lch - 0x30;
//				int rdigit = rch - 0x30;
//
//				if (ldigit > rdigit)
//				{
//					return 1;
//				}
//				else if (ldigit < rdigit)
//				{
//					return -1;
//				}
//
//				++it;
//				++jt;
//			}
//			return 0;
//		}
//	}
//
//	bool IsPositive() const
//	{
//		return bPositive;
//	}
//
//	string GetInts() const
//	{
//		return ints;
//	}
//
//	const string& GetIntsConst() const
//	{
//		return ints;
//	}
//
//	void PrintLine() const
//	{
//		if (bPositive == false)
//		{
//			cout << "-";
//		}
//
//		cout << ints << "\n";
//	}
//
//	void Print() const
//	{
//		if (bPositive == false)
//		{
//			cout << "-";
//		}
//
//		cout << ints;
//	}
//
//private:
//	string ints;
//	bool bPositive;
//};
//
//int main(int argc, char** argv)
//{
//	int test_case;
//	int T;
//	/*
//	아래의 freopen 함수는 input.txt 를 read only 형식으로 연 후,
//	앞으로 표준 입력(키보드) 대신 input.txt 파일로부터 읽어오겠다는 의미의 코드입니다.
//	//여러분이 작성한 코드를 테스트 할 때, 편의를 위해서 input.txt에 입력을 저장한 후,
//	freopen 함수를 이용하면 이후 cin 을 수행할 때 표준 입력 대신 파일로부터 입력을 받아올 수 있습니다.
//	따라서 테스트를 수행할 때에는 아래 주석을 지우고 이 함수를 사용하셔도 좋습니다.
//	freopen 함수를 사용하기 위해서는 #include <cstdio>, 혹은 #include <stdio.h> 가 필요합니다.
//	단, 채점을 위해 코드를 제출하실 때에는 반드시 freopen 함수를 지우거나 주석 처리 하셔야 합니다.
//	*/
//	//freopen("sample_input.txt", "r", stdin);
//	cin >> T;
//	/*
//	여러 개의 테스트 케이스가 주어지므로, 각각을 처리합니다.
//	*/
//	for (test_case = 1; test_case <= T; ++test_case)
//	{
//		int floor;
//
//		cin >> floor;
//
//
//		BigInteger lValue, rValue;
//
//		BigInteger a, b, c;
//
//		a = (BigInteger(2)*BigInteger(floor)*BigInteger(floor));
//		b = (BigInteger(4)*BigInteger(floor));
//		c = a - b;
//		lValue = c + BigInteger(3);
//
//
//		c = (BigInteger(2)*BigInteger(floor)*BigInteger(floor));
//		rValue = c - BigInteger(1);
//
//		cout << "#" << test_case << " ";
//		lValue.Print();
//		cout << " ";
//		rValue.PrintLine();
//
//
//		long long lvalue, rvalue;
//		lvalue = 2 * floor * floor - 4 * floor + 3;
//		rvalue = 2 * floor * floor - 1;
//		// 2 * f * f - 4 * f + 3
//		// 2 * f * f - 1
//		//cout << '#' << test_case << ' ';
//		//cout << lvalue << ' ' << rvalue << '\n';
//	}
//
//	return 0;//정상종료시 반드시 0을 리턴해야합니다.
//}