int main()
{
	int l,b,w,a,v;
	scanf("%d%d%d",&l,&b,&w);
	v=l*b*w;
	a=((2*(l*b))+(2*(l*w))+(2*(w*b)));
	printf("%d\n%d",a,v);
	return 0;
	}
