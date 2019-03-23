#include<iostream>
int main()
{
	int a[100],i=0,b=0,c=0,n=0;
    char st[12];
    scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		gets(st);
		getchar();
		for(b=0;b<12;b++)
		{
			if(st[b]=='T')
				a[i]=(b+3)%4;
		}
	}
	for(i=0;i<n;i++)
		printf("%d ",a[i]);
	return 0;
}
