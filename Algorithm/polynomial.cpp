//#include <iostream>
//#include <cmath>
//#include <vector>
//#include <initializer_list>
//using namespace std;
//
//template<typename T>
//class polynomial
//{
//public:
//	polynomial() = default;
//	polynomial(initializer_list<T> list) : coef{list}{ }
//	polynomial(vector<T> vec) : coef(vec){ }
//	// get solution from polynomial
//
//	// get max exponent
//	size_t max_exponent()
//	{
//		return coef.size() - 1;
//	}
//
//	// get coefficient matching with exponent
//	void get_coefficient(size_t exp, T& out)
//	{
//		if (coef.size() <= exp)
//			return;
//
//		out = coef[exp];
//	}
//
//	// insert specified exponent's coefficient
//	void insert_term(T new_coef, size_t new_exp)
//	{
//		if (coef.size() - 1 < new_exp)
//		{
//			size_t diff = new_exp - coef.size() + 1;
//			for (int i = 0; i < diff; ++i)
//				coef.push_back(0);
//			coef[new_exp] = new_coef;
//		}
//		else
//		{
//			coef[new_exp] = new_coef;
//		}
//	}
//
//	// delete specified exponent's coefficient
//	void delete_term(size_t del_exp)
//	{
//		if (coef.size() - 1 > del_exp)
//		{
//			coef[del_exp] = 0;
//		}
//		else if (coef.size() - 1 == del_exp)
//			coef.pop_back();
//	}
//
//	// apply four fundamental arithmetic operation to target coef
//	void operation_term(size_t exp, char op, T rhs)
//	{
//		if (coef.size() <= exp)
//			return;
//		switch (op)
//		{
//		case '+':
//			coef[exp] = coef[exp] + rhs;
//			break;
//		case '-':
//			coef[exp] = coef[exp] - rhs;
//			break;
//		case '*':
//			coef[exp] = coef[exp] * rhs;
//			break;
//		case '/':
//			coef[exp] = coef[exp] / rhs;
//			break;
//		}
//	}
//
//	friend polynomial<T> operator+(const polynomial<T>& lhs, const polynomial<T>& rhs)
//	{
//		vector<T> returns;
//		for (int i = 0; i < (lhs.coef.size() <= rhs.coef.size() ? lhs.coef.size() : rhs.coef.size()); ++i)
//			returns.push_back(lhs.coef[i] + rhs.coef[i]);
//
//		return returns;
//	}
//	friend polynomial<T> operator-(const polynomial<T>& lhs, const polynomial<T>& rhs)
//	{
//		vector<T> returns;
//		for (int i = 0; i < (lhs.coef.size() <= rhs.coef.size() ? lhs.coef.size() : rhs.coef.size()); ++i)
//			returns.push_back(lhs.coef[i] - rhs.coef[i]);
//
//		return returns;
//	}
//	friend polynomial<T> operator*(const polynomial<T>& lhs, const polynomial<T>& rhs)
//	{
//		vector<T> returns;
//		returns.resize((lhs.coef.size() - 1) * (rhs.coef.size() - 1) + 1);
//		for (int i = 0; i < lhs.coef.size(); ++i)
//			for (int j = 0; j < rhs.coef.size(); ++j)
//				returns[i + j] += lhs.coef[i] * rhs.coef[j];
//
//		return returns;
//	}
//
//	void print_polynomial() const
//	{
//		if (coef[coef.size() - 1] < 0)
//			cout << " - ";
//		cout << abs(coef[coef.size() - 1]) << "x^" << coef.size() - 1;
//		for (int i = coef.size() - 2; i > 0; --i)
//			cout << (coef[i] >= 0 ? " + " : " - ") << abs(coef[i]) << "x^" << i;
//		cout << (coef[0] >= 0 ? " + " : " - ") << abs(coef[0]) << "\n";
//	}
//
//private:
//	vector<T> coef;
//};
//
//// test polynomial adt 1
////int main()
////{
////	polynomial<int> A = { 1,2,3,4 };
////	polynomial<int> B = { 2,2,2,2 };
////
////	A.print_polynomial();
////	B.print_polynomial();
////	polynomial<int> C = A + B;
////	C.print_polynomial();
////
////	A.insert_term(1, 6);
////	A.print_polynomial();
////	A.operation_term(5, '-', 2);
////	A.print_polynomial();
////
////	polynomial<int> D = { 1,1,1 };
////	polynomial<int> E = { 1,1,1 };
////	(D * E).print_polynomial();
////	return 0;
////}
//
