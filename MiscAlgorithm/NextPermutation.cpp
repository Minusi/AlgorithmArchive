//#include <vector>
//#include <iostream>     // std::cout
//#include <algorithm>    // std::next_permutation, std::sort
//
//
//using namespace std;
//
//int main()
//{
//	vector<int> myints = { 1, 2, 3, 4, 5 };
//
//	std::sort(myints.begin(), myints.end());
//
//	// next_permutation의 핵심 로직 공간
//	do
//	{
//		for (const auto it : myints)
//		{
//			cout << it << " ";
//		}
//		cout << endl;
//	} while (std::next_permutation(myints.begin(), myints.end()));
//
//	std::cout << "After loop: " << myints[0] << ' ' << myints[1] << ' ' << myints[2] << '\n';
//
//	return 0;
//}