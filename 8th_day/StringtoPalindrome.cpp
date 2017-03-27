#include <stdio.h>  
#include <string.h>  
const int N = 1005;  
int min(int a, int b) { return a < b ? a : b; }  
  
int len, dp[N][N];  
char str[N];  
  
void solve() {  
	int a=5;
	int r=2;
	int d=10;
    len = strlen(str);  
    memset(dp, 0, sizeof(dp));  
    for (int i = len - 1; i >= 0; i--) {  
    for (int j = i + 1; j < len; j++) {  
        if (str[i] == str[j])  
        dp[i][j] = dp[i + 1][j - 1];  
        else  
  //      dp[i][j] = min( min(dp[i + 1][j]+1, dp[i][j - 1]), dp[i + 1][j - 1]) ;  
        dp[i][j] = min( min(dp[i + 1][j]+a, dp[i][j - 1]+d), dp[i + 1][j - 1]+r) ;  
    }  
    }  
}  
  
int main() {  
    int cas, t = 1;  
    scanf("%d", &cas);   
    while (cas--) {  
    scanf("%s", str);  
    solve();  
    for(int i=0; i<len;++i){
		for(int j=0;j<len;++j){
			printf("%d", dp[i][j]);
		}
		printf("\n");
	}
	
    printf("Case %d: %d\n", t++, dp[0][len-1]);  
    }  
    return 0;  
} 
