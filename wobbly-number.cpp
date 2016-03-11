/* 
Roy is looking for Wobbly Numbers.

An 
N
N-length wobbly number is of the form "ababababab..." and so on of length 
N
N, where 
a
!
=
b
a!=b.

A 3-length wobbly number would be of form "aba". 
Eg: 
101
,
121
,
131
,
252
,
646
101,121,131,252,646 etc
But 
111
,
222
,
999
111,222,999 etc are not 
3
3-length wobbly number, because here 
a
!
=
b
a!=b condition is not satisfied.
Also 
010
010 is not a 
3
3-length wobbly number because it has preceding 
0
0. So 
010
010 equals 
10
10 and 
10
10 is not a 
3
3-length wobbly number.

A 
4
4-length wobbly number would be of form "abab". 
Eg: 
2323
,
3232
,
9090
,
1414
2323,3232,9090,1414 etc

Similarly we can form a list of 
N
N-length wobbly numbers.

Now your task is to find 
K
K
t
h
th wobbly number from a lexicographically sorted list of 
N
N-length wobbly numbers. If the number does not exist print 
−
1
−1 else print the 
K
K
t
th wobbly number. See the sample test case and explanation for more clarity.

Input:
First line contains 
T
T - number of test cases 
Each of the next 
T
T lines contains two space separated integers - 
N
N and 
K
K.

Output:
For each test case print the required output in a new line.
*/

#include <iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;
    for(int i = 0; i < t; i++){
    	int n, k;
    	cin >> n >> k;
    	k--;
    	if(k <= 80){
			for(int j=0; j < n; j++){
				if(j%2 == 0)
					cout << k/9 + 1;
				else{
					if(k%9 >= k/9 + 1)
						cout << k%9 + 1;
					else
						cout << k%9;
				}
			}
    	}
    	else
    		cout << -1;
    	cout << endl;
    }
    return 0;
}
