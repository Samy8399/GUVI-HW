int main()
{
	int a,b,c,t;
	scanf("%d%d",&a,&b);
	if(a>b)
	{
		t=a;
		a=b;
		b=t;
	}
	c=b-a;
	printf("%d",c);
}
