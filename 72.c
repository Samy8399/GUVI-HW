int main()
{
	char a[100];
	int c=0,i;
	gets(a);
	for(i=0;a[i]!='\0';i++)
	{
	if((a[i]=='a')||(a[i]=='A'))
	 c++;
	 if((a[i]=='e')||(a[i]=='E'))
	 c++;
	 if((a[i]=='i')||(a[i]=='I'))
	 c++;
	 if((a[i]=='o')||(a[i]=='O'))
	 c++;
	 if((a[i]=='U')||(a[i]=='u'))
	 c++;
	}
	if(c!=0)
	printf("yes");
	else
	printf("no");
	return 0;
}
