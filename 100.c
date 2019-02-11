int main()
{
	int a,b=1,r;
	scanf("%d",&a);
	while(a)
	{
		r=a%10;
		b=b*r;
		a=a/10;
	}
	printf("%d",b);
}
