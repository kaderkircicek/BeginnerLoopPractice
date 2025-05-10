printf("Hello world!\n");
    int i=0;
    int sayi;
    int ikibsayi=0;
    int birbsayi=0;
    while(1)
    {printf("Sayi:");
     scanf("%d",&sayi);
     if(sayi/10>=10)
     {break;}
    else if (sayi/10<=9)
    {ikibsayi=ikibsayi+1;}
    else
   {birbsayi=birbsayi+1;}

    i++;
    }
    printf("%d tane sayidan; %d tanesi tek basamakli, %d tanesi iki basanakli sayidir.",i,birbsayi,ikibsayi);
