int main()
{
    int num, i;


    scanf("%d",&num);
    printf(" 1  %d",num);

    for(i=1; i <= num; ++i)
    {
        if (num%i == 0)
        {
            printf("%d ",i);
        }
    }

    return 0;
}
