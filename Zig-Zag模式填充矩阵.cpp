
#include <stdio.h>
int n,m,x,y,nowd = 0,tot;
int digit_[233][233];
int main() {
	x = 1;
	y = 1;
	digit_[1][1] = ++tot;
	scanf("%d%d",&n,&m);
	for(int i = 1 ; i <= n ; ++i)
		for(int j = 1 ; j <= m ; ++j) {
			if(!nowd) {
				if(y+1>m) {
					x++;
					nowd^=1;
				} else if(x-1<1) {
					y++;
					nowd^=1;
				} else {
					x--;
					y++;
				}
			} else {
				if(x+1>n) {
					y++;
					nowd^=1;
				} else if(y-1<1) {
					x++;
					nowd^=1;
				} else {	
					y--;
					x++;
				}
			}
			digit_[x][y] = ++tot;
		}
	for(int i = 1 ; i <= n ; ++i) {
		for(int j = 1 ; j <= m ; ++j) printf("%d ",digit_[i][j]);
		printf("\n");
	}
}


