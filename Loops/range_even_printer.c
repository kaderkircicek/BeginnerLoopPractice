int baslangic;
    int bitis;
    printf("Baslangic degerini giriniz:");
    scanf("%d",&baslangic);
    printf ("Bitis degerini giriniz:");
    scanf("%d",&bitis);
    printf("Sayilar sunlardir: ");

    for ( int i=baslangic ; i<=bitis; i++)
  {

           if(i%2==0)
           {printf("%d ",i);}
  }
