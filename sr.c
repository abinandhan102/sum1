#include <stdio.h>
#include<string.h>
int main(void) {
	// your code goes here
	char str[1000],strr[1000];
	int i,l,k=0;
	scanf("%s",str);
	l=strlen(str);
	for(i=l;i>=0;i--)
	{
		strr[k]=str[i];
		k++;
	}
	for(i=0;i<k;i++)
	printf("%c",strr[i]);
	return 0;
}
