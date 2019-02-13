int main()
{
	int n,k;
	scanf("%d%d",&n,&k);
	int a[200],b[200],i,j;
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		if(a[i]%2==0)
		{}
		else
		{
			b[j]=a[i];
			j++;
		}
	}
	printf("%d",b[k-1]);
}
