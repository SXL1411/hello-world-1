#include <stdio.h>
int main() {
	int n,t;
	int ans[20],cnt;
	scanf("%d",&t);
	for(int i = 1 ; i <= t ; ++i) {
		cnt = 0;
		scanf("%d",&n);
		for(int j = 2 ; j <= n ; ++ j) {
			while((n%j)==0 && n!=1) {
				ans[++cnt] = j;
				n/=j;
			}
		}
		for(int j = 1 ; j < cnt ; ++j) printf("%d*",ans[j]);
		printf("%d\n",ans[cnt]);
	}
}

