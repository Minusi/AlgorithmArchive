//#include <iostream>
//#include <queue>
//using namespace std;
//
//#ifdef DEBUG
//#include "Utility.h"
//#endif // DEBUG
//
//
//struct buckets
//{
//	buckets() = default;
//	buckets(int a, int b, int c) : data{ a,b,c }{ }
//	buckets(const buckets&) = default;
//	~buckets() = default;
//
//	bool operator=(const buckets& rhs) const
//	{
//		return (data[0] == rhs.data[0]) && (data[1] == rhs.data[1]) && (data[2] == rhs.data[2]);
//	}
//
//	int data[3];
//};
//int main()
//{
//	ios::sync_with_stdio(false);
//	cin.tie(NULL);
//
//	int bucketCapacity[3];
//	cin >> bucketCapacity[0] >> bucketCapacity[1] >> bucketCapacity[2];
//	
//
//
//	bool ans[201] = { 0 };
//	bool check[200][200][200] = { 0 };
//	queue<buckets> bQueue;
//
//	ans[bucketCapacity[2]] = true;
//	bQueue.emplace(0, 0, bucketCapacity[2]);
//	check[0][0][bucketCapacity[2]] = true;
//
//	while (bQueue.empty() == false)
//	{
//		buckets curr = bQueue.front();
//		bQueue.pop();
//
//		// i : bucket number to flow to j bucket
//		// j : bucket number to be filled by i bucket
//		for (int i = 0; i < 3; ++i)
//		{
//			// if bucket.data[i] is zero, then ignores operations below.
//			if (curr.data[i] == 0)	continue;
//			for (int j = 0; j < 3; ++j)
//			{
//				if (j == i)	continue;
//
//				int jCapacity = bucketCapacity[j] - curr.data[j];
//				
//				buckets next = curr;
//				next.data[j] += jCapacity > curr.data[i] ? curr.data[i] : jCapacity;
//				next.data[i] -= jCapacity > curr.data[i] ? next.data[i] : jCapacity;
//
//				// if already visits then ignores
//				if (check[next.data[0]][next.data[1]][next.data[2]] == true)
//					continue;
//				
//				// if a bucket is empty, register to answer array
//				if (next.data[0] == 0)
//					ans[next.data[2]] = true;
//				check[next.data[0]][next.data[1]][next.data[2]] = true;
//				bQueue.push(next);
//			}
//		}
//	}
//
//	// print answer 
//	for (int i = 0; i <= bucketCapacity[2]; ++i)
//		if (ans[i] == true)
//			cout << i << " ";
//	cout << "\n";
//	return 0;
//}