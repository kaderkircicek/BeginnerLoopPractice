int n,x;
  printf("n degerini giriniz ");
  scanf("%d",&n);
  int ctoplam=0;
  int ttoplam=0;
  int csayi=1;
  int tsayi=1;
  printf("x degerini giriniz ");
  scanf("%d",&x);

  for(int i =1; i<=n ; i++){

    if(i%2==0)
    {for(int k=1 ; k<=n ; k++)
     {csayi=csayi*x;
     ctoplam=csayi/n;}}



    if(i%2==1)
     {for(int k=1 ; k<=n ; k++)
     {tsayi=((tsayi*x)*-1);
      ttoplam=tsayi/n;}}

  }


    printf("T=%d",1-(ctoplam+ttoplam));



