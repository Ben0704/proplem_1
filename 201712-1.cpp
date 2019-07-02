#include<stdio.h>
#include<malloc.h>
typedef struct _array {
	int len;
	int array[];
}array;
int main() {
	int length=0;
	scanf("%d", length);
	array* p = (_array*)malloc(sizeof(array) + sizeof(int) * length);
	p->len = length;
	
}