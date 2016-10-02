#include <bits/stdc++.h>
using namespace std;

void flip_bits(vector< vector<int> > &matrix, int x, int y) {
    for(int i = 1; i <= x; i++)
        for(int j = 1; j <= y; j++)
            matrix[i][j] ^= 1;
}

int main() {
	int t;
	cin >> t;
	while(t--) {
	    int n, m, res = 0;
	    cin >> n >> m;
	    vector< vector<int> > matrix(n+1, vector<int>(m+1));
	    for(int i = n; i >=1; i--) {
            for(int j = m-(n-i); j >= 1; j--) {
                if(matrix[i][j] == 0) {
                    flip_bits(matrix, i, j);
                    res++;
                }
            }
            for(int j = i-1; j >= 1; j--) {
                if(matrix[j][m-(n-i)] == 0) {
                    flip_bits(matrix, j, m-(n-i));
                    res++;
                }
            }
	    }
	    cout << res << endl;
	}
    return 0;
}
