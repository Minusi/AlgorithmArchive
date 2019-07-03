## Dynamic Programming

__피보나치__

```cpp
int fib(int n)
{
	if( n == 1 || n == 2)
		return 1;
	else
		return fib(n-2) + fib(n-1);
}
```

많은 계산이 중복되는 문제가 있다.  
　    

__Memoization__

 - 중간 계산 결과를 caching함으로써 중복 계산을 피함

```cpp
int fib(int n)
{
	if (n== 1 || n==2)
		return 1;
	else if (f[n] > -1)			// 이미 계산된 값이 있는 경우
		return f[n];
	else					// 새로운 값을 Memorization
		f[n] = fib(n-2) + fib(n-1);
		return f[n];
}
```



__bottom-up 방식__

- 주어진 값을 위에서 재귀로 내려오는 것이 아닌 bottom-up 방식으로 중복 계산을 피함

```cpp
int fib(int n)
{
	f[1] = f[2] = 1;
	for (int i=3; i<=n; ++i)
		f[n] = f[n-1] + f[n-2];
	return f[n];
}
```



__이항 계수(Binomial Coefficient)__

- nCk = n! / { (n-k)!k! } (n개 중에서 k를 선택하는 경우의 수)
- 재귀적으로 프로그래밍한다면 역시 많은 계산이 중복됨

```cpp
int binomial(int n, int k)
{
	if (n==k || k==0)
		return 1;
	else
		return binomial(n-1, k) + binomial(n-1, k-1);
}
```



__Memoization__   

```cpp
int binominal(int n, int k)
{
	if (n==k || k== 0)
		return 1;
	else if (binom[n][k] > -1)
		return binom[n][k];
	else
	{
		binom[n][k] = binomial(n-1, k) + binomial(n-1, k-1);
		return binom[n][k];
	}
}
```



__bottom-up 방식(Dynamic Programming)__

```cpp
int binomial(int n, int k)
{
	for (int i=0; i<=n; ++i)
		for (int j=0; j<=k && j<=i; j++)
		{
			if (j==0 || j==k)
				binom[i][j] = 1;
			else
				binom[i][j] = binom[i-1][j-1] + binom[i-1][j];
		}
	return binom[n][k];
}
```



__Memoization vs Dynamic Programming __

- 순환식의 값을 계산하는 기법들이다
- 둘 다 동적계획법의 일종으로 보기도 한다
- Momoization은 top-down방식이며, 실제로 필요한subproblem만을 푼다. (but, recursion overhead 있음)
- 동적계획법은 bottom-up 방식이며, recursion에 수반되는 overhead가 없다.



　  

　  

　  

###Basic Example
---

__행렬 경로 문제__

- 정수들이 저장된 n x n 행렬의 좌상단에서 우하단까지 이동한다. 단 오른쪽이나 아래쪽 방향으로만 이동할 수 있다.
- 방문한 칸에 있는 정수들의 합이 최소화되도록 하라.  
_Key Observation_  :

- (i,j)에 도달하기 위해서는 (i, j-1) 혹은 (i-1, j)를 거쳐야 한다. 또한 (i, j-1) 혹은 (i-1,j)까지는 최선의 방법으로 이동해야 한다.
- L[i,j] : (1,1)에서 (i,j)까지 이르는 최소합
   - = m~ij~				(if i = 1 and j = 1)
   - = L[i-1,j] + m~ij~			(if j=1)
   - = L[i,j-1] + m~ij~			(if i=1)
   - = min(L[i-1,j], L[i,j-1]) + m~ij~ 	(otherwise)


```cpp
// Recursive Algorithm
int mat(int i, int j)
{
	if (i==1 && j==1)
		return m[i][j];
	else if (i==1)
		return mat(1, j-1) + m[i][j];
	else if (j==1)
		return mat(i-1, j) + m[i][j];
	else
		return Math.min(mat(i-1, j), mat(i, j-1)) + m[i][j];
}

// Memoization
int mat(int i, int j)
{
	if (i==1 && j==1)
		L[i][j] = m[i][j];
	else if (i==1)
		L[i][j] = mat(1, j-1) + m[i][j];
	else if (j==1)
		L[i][j] = mat(i-1, j) + m[i][j];
	else
		L[i][j] = Math.min(mat(i-1, j), mat(i, j-1)) + m[i][j];
	return L[i][j];
}

// Bottom-up
int mat()
{
	for (int i = 0; i <= n; ++i)
		for (int j = 0; j <= n; ++j)
		{
			if (i==1 && j==1)
				L[i][j] = m[i][j];
			else if (i==1)
				L[i][j] = L[1][j-1] + m[i][j];
			else if (j==1)
				L[i][j] = L[i-1][j] + m[i][j];
			else
				L[i][j] = Math.min( L[i-1][j], L[i][j-1] ) + m[i][j];
		}
	return L[n][n];
}

// 배열의 0인덱스를 무한으로 만들어 간결하게 만들어낸 Bottom-up
int mat()
{
	/* L 배열에 대해 L[0][j] = L[i][0] = INF로 초기화 */

	for (int i = 0; i <= n; ++i)
		for (int j = 0; j <= n; ++j)
		{
			if (i==1 && j==1)
				L[i][j] = m[i][j];
			else
				L[i][j] = Math.min( L[i-1][j], L[i][j-1] ) + m[i][j];
		}
	return L[n][n];
}

/* 시간복잡도 T(n) = O(n^2) */
```

_경로 구하기_

- 또다른 배열 P를 생성하여 이동 경로를 저장한다.

```cpp
int mat()
{
	/* L 배열에 대해 L[0][j] = L[i][0] = INF로 초기화 */

	for (int i = 0; i <= n; ++i)
		for (int j = 0; j <= n; ++j)
		{
			if (i==1 && j==1)
				L[i][j] = m[i][j];
				p[i][j] = '-';
			else
			{
				if (L[i-1][j] < L[i][j-1])
				{
					L[i][j] = L[i-1][j] + m[i][j];
					p[I][J] = '
				}
				
		}
	return L[n][n];
}

// 경로를 구하는 함수
void printPath()
{
}
```



　  

　  

　  

Optimal Substructure
---

__동적계획법 정리__

- 일반적으로 최적화문제(optimisation problem) 혹은 카운팅(counting) 문제에 적용됨 (일반적으로 최적화문제는 최솟값 또는 최댓값을 구하는 문제를 일컬음)
- 주어진 문제에 대한 순환식(recurrence equation)을 정의한다.
- 순환식을 memozation 혹은 bottom-up 방식으로 푼다.
- __subproblem들을 풀어서__ 원래 문제를 푸는 방식. 그런 의미에서 분할정복법과 공통성이 있음
- 분할정복법에서는 분할된 문제들이 서로 __disjoint__하지만 동적계획법에서는 그렇지 않음
- 즉, 서로 __overlapping하는 subproblem들을 해결__함으로써 원래 문제를 해결



__Optimal Substructure__

- 어떤 문제의 최적해가 그것의 __subproblem들의 최적해__로부터 효율적으로 구해질 수 있을 때 그 문제는 __optimal substructure__를 가진다고 할 수 있다.
- 분할정복법, 탐욕적기법, 동적계획법은 모두 문제가 가진 이런 특성을 이용한다.



__Optimal Substructure를 확인하는 질문__

- __"최적해의 일부분이 그 부분에 대한 최적해인가?"__

- 최단 경로(shortest-path) 문제
  - 이 경로가 s에서 u까지의 최단경로라면 이 경로는 s에서 v까지의 최단경로이다.
- 순환식은 optimal substructure를 표현한다
  - d[u] = min(d[v] + w(v,u))	(엄밀히 말하자면, 이 식은 base case 등의 부재를 이유로 좀더 보강되어야 한다.)



__최장경로(Longest-Path) 문제__

- 노드를 중복 방문하지 않고 가는 가장 긴 경로
- optimal substructure를 가지는가

- __모든 문제가 최적해의 일부분이 그 부분에 대한 최적해인 것은 아니다__ 
  - d[u] != max(d[v] + w(v,u))

- 하지만 다른 순환식을 세운다면 optimal substructure를 만족할 수 있다.
  - d(v,A) : s에서 집합 A에 속한 어떤 노드도 지나지 않고 U까지 가는 경로들 중에서 최장 경로의 길이
  - d(v,A) = -INF																					if v가 A에 속할 때
  - d(v,A) = 0																						 if v = s
  - d(v,A) = max~u~ adjacent to v{d(u, A union {v}) + w(u,v) }		   otherwise







## Matrix-Chain Multiplication

p x q 행렬 A와 q x r 행렬 B 곱하기

```cpp
void product(int A[][], int B[][], int C[][])
{
    for (int i=0; i<p; ++i)
    {
        for (int j=0; i<r; ++j)
        {
            C[i][j] = 0;						// 초기화
            for (int k=0; k<q; ++k)
                C[i][j] += A[i][k] * B[k][j];
        }
    }
}

// 곱셈연산의 횟수 = p*q*r
```

- 행렬 A는 10x100, B는 100x5, C는 5x50라고 가정하자.

- 세 행렬의 곱 ABC는 두가지 방법으로 계산가능 (결합법칙이 성립)

  - (AB)C : 7,500번의 곱셈 (10x100x5 + 10x5x50)
  - A(BC) : 75,000번의 곱셈 (10x5x50 + 10x100x50)

- 즉 곱하는 순서에 따라서 연산량이 다름

- n개의 행렬의 곱 A~1~ A~2~ A~3~ ...A~n~을 계산하는 최적의 순서는? (여기서 A~i~는 p~k-1~ x p~k~  행렬이다)

- 순환식 :

  - m[i,j] : A~i~...A~j~를 곱하는 최소곱셈 횟수

    m[i,j] = 0			(if i = j)

    m[i,j] = min~i<=k<=j-1~(m[i,k] + m[k+1,j] + p~i-1~p~k~p~j~)			(if i < j)



```cpp
// 2차원 배열을 좌상단-우하단 순으로 행렬을 계산하는 방식
int matrixChain(int n)
{
    for (int i=1; i<=n; ++i)
        m[i][i] = 0;
    
    // i : 행, j : 열
    for (int r=1; r<=n-1; ++r) 	// 대각선 한 라운드(round)
    {
        for (int i=1; i<=n-r; ++i)
        {
            /*	행은 라운드에 관계없이 1부터 시작하지만, 
            	열은 라운드가 올라갈수록 인덱스가 증가하므로 i+r */
            int j = i + r;
            
            // k = i일 때 m[i,i] + m[i+1,j] + p[i-1]*p[i]*p[j]이고 m[i,i] = 0이므로
            m[i][j] = m[i+1][j] + p[i-1]*p[i]*p[j];
            
            for (int k=i+1; k<=j-1; ++k)
            {
                if (m[i][j] > m[i][k] + m[k+1][j] + p[i-1]*p[k]*p[j])
                    m[i][j] = m[i][k] + m[k+1][j] + p[i-1]*p[k]*p[j];
            }
        }
    }
    
    return m[1][n];
}
```

> 시간복잡도 T(n) =  θ(n^3^)







### Longest Common Subsequence(LCS)

---

- \<bcdb>는 문자열 <a__bc__b__d__a__b__>의 __subsequence__이다.

- \<bca>는 문자열 <a__bc__bd__a__b>와 <__b__d__ca__ba>의 common subsequence이다.

- __Longest common subsequence(LCS)__
  - common subsequece들 중 가강 긴 것
  - \<bcba>는 \<abcbdab>와 \<bdcaba>의 LCS이다.
  - LCS의 subproblem은 원 문자열 x와 y의 부분 문자열에 대한 LCS이다.\
- 순환식 :
  - L[i,j] : 문자열 X=<x~1~...x~i~>와 Y=<y~1~ ...y~j~>의 LCS의 길이
  - L[i,j] = 0    (if i = 0 or j = 0)
  - L[i,j] = L[i-1, j-1] + 1    (if x~i~ =y~i~)
  - L[i,j] = max(L[i-1, j], L[i,j-1])    (otherwise)



```cpp
// m : 문자열 x의 길이, n : 문자열 y의 길이
int LCS(int m, int n)
{
    for (int i=0; i<=m; ++i)
        c[i][0] = 0;
    for (int j=0; i<=n; ++j)
        c[0][j] = 0;
    
    for (int i=0; i<=m; ++i)
        for (int j=0; j<=n; ++j)
        {
            if(x[i] == y[j])
                c[i][j] = c[i-1][j-1] + 1;
            else
                c[i][j] = max( c[i-1][j], c[i][j-1] );
        }
    
    return c[m][n];
}
```

> 시간복잡도 T(n) = θ(mn)







### Knapsack Problem

---

- n개의 아이템과 배낭

- 각각의 아이템은 무게 w~i~ 와 가격 v~i~ 를 가짐

- 배낭의 용량은 W

- 목적 : 배냉의 용량을 초과하지 않으면서 가격이 최대가 되는 부분집합을 구하는 것

- 예시(배낭의 용량 W = 11일 때 품목) : 

  |  i   | v~i~ | w~i~ |
  | :--: | :--: | :--: |
  |  1   |  1   |  1   |
  |  2   |  6   |  2   |
  |  3   |  18  |  5   |
  |  4   |  22  |  6   |
  |  5   |  28  |  7   |

  - {1,2,5}는 가격의 합이 35(1 + 6 + 28)
  - {3,4}는 가격의 합이 40(18+22)
  - {3,5}는 가격의 합이 46이지만 용량이 초과

- Greedy 방식을 접목했을 때 :

  - 가격이 높은 것부터 선택
  - 무게가 가벼운 것부터 선택
  - 단위 무게당 가격이 높은 것부터 선택
  - 최선의 결과를 도출하는 것은 아니다.

- 잘못된 순환식 :

  - OPT(i) : 아이템 1,...,i로 얻을 수 있는 최대 이득
  - case 1 : 아이템 i를 선택하지 않는 경우, OPT(i) = OPT(i-1)
  - case 2 : 아이템 i를 선택하는 경우, OPT(i) = ?

- 순환식 :

  - OPT(i,w) : 배냥 용량이 w일 때 아이템 1,...,i로 얻을 수 있는 최대 이득
  - case 1 : 아이템 i를 선택하지 않는 경우 , OPT(i,w) = OPT(i-1,w)
  - case 2 : 아이템 i를 선택하는 경우, OPT(i,w) = OPT(i-1,w-w~i~)

- 표현된 순환식 :
  - OPT(i,w) = 0    if i = 0
  - OPT(i-1, w)    if w~i~ > w
  - max{ OPT(i-1,w), v~i~ + OPT(i-1, w-w~i~)}    otherwise



```cpp
void Knapsack(n, W)
{
    for (int w=0; w<W; ++w)
        M[0,w] = 0;
    
    for (int i=1; i<n; ++i)
    	for (int w=1; w<=W; ++w)
        {
            if(w~)
        }
            
}
```

> 시간복잡도 : O(nW)

n은 입력 크기라고 할 수 있지만, W는 입력 크기가 아닌 단순 값이고 입력으로 치환하자면, W를 표현하기 위한 비트 수 k라 할 수 있다. k는 log~2~ w이므로 O(n * 2^k^)이므로 지수함수이다.