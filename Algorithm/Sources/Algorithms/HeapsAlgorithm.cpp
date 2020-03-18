//#include <iostream>
//#include <vector>
//#include <algorithm>
//
//using namespace std;
//
//
//
//void HeapsAlgorithm(int Size, vector<int> Array)
//{
//	if (Size == 1)
//	{
//		for (const auto it : Array)
//		{
//			cout << it << " ";
//		}
//		cout << endl;
//		return;
//	}
//	else
//	{
//		HeapsAlgorithm(Size - 1, Array);
//
//		for (int i = 0; i < Size - 1; ++i)
//		{
//			if (Size % 2 == 1)
//			{
//				swap(Array[i], Array[Size - 1]);
//			}
//			else
//			{
//				swap(Array[0], Array[Size - 1]);
//			}
//
//			HeapsAlgorithm(Size - 1, Array);
//		}
//	}
//}
//
//int main()
//{
//	vector<int> Array = { 1,2,3,4 };
//	HeapsAlgorithm(Array.size(), Array);
//}