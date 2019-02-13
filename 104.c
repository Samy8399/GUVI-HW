int main()
{
	int a,b,i,power=1;
	printf("enter the number");
	scanf("%d %d",&a,&b);
	for(i=0;i<b;i++)
	{
	power=power*a;

	}
	printf("%d",power);
	return 0;
}
