    printf("Hello world!\n");
    int tekSayi=0;
    int ttoplam=0;
    int ctoplam=0;
    int sayi ;
    int ciftSayi=0;
    for( int i=1; i<=10; i++)
    {
        printf("Lutfen bir sayi giriniz: ");
        scanf("%d",&sayi);

        if(sayi%2==1)
         {tekSayi=tekSayi+1;
         ttoplam=ttoplam+sayi;}

          else
         {ciftSayi=ciftSayi+1;
         ctoplam=ctoplam+sayi;}
}

 printf("%d tane tek sayi girdiniz.\n ",tekSayi);
 printf("Girdiginiz tek sayilarin ortalamasi:%d'dir.\n",(ttoplam/tekSayi));
 printf("%d tane cift sayi girdiniz.\n ",ciftSayi);
 printf("Girdiginiz cift sayilarin ortalamasi:%d'dir.\n",(ctoplam/ciftSayi));







