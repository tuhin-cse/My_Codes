
main()
{
    int a=1,b=0;
    for( ;a<100; )
    {
        if(a%2==0)
            continue;

        b=b+a;
        a++;
    }
    printf("%d",b);
}
