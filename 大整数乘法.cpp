#include <stdio.h>
#include <string.h>
char a[503],b[503],d[503];
char c[1003];
int main() {
	int T;
	scanf("%d",&T);
	while(T--) {
		memset(c,0,sizeof(c));
		scanf("%s",a);
		scanf("%s",b);
		int lena = strlen(a);
		int lenb = strlen(b);
		for(int i = 0 ; i < lena ; ++i) d[lena-i-1] = a[i]-'0';
		for(int i = 0 ; i < lena ; ++i) a[i] = d[i];
		for(int i = 0 ; i < lenb ; ++i) d[lenb-i-1] = b[i]-'0';
		for(int i = 0 ; i < lenb ; ++i) b[i] = d[i];
		for(int i = 0 ; i < lena ; ++i)
			for(int j = 0 ; j < lenb ; ++j) {
				int now = i+j;
				c[now] += a[i]*b[j];
				c[now+1] += c[now]/10;
				c[now] %= 10;
			}
		for(int i = 0 ; i < 1000 ; ++i)
			if(c[i]>9) {
				c[i+1] += c[i]/10;
				c[i] %= 10;
			}
		int lenc;
		for(int i = 1000 ; i >= 0 ; --i)
			if(c[i]>0) {
				lenc = i;
				break;
			}
		for(int i = lenc ; i >= 0 ; --i) printf("%c",c[i]+'0');
		printf("\n");
	}
}

