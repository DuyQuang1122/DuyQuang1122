#include<stdio.h>

main(){

  float a,b;
  printf("\nNhap he so a: ");
  scanf("%f",&a);
  printf("\nNhap he so b: ");
  scanf("%f",&b);
  if(a==0){      //n?u a==0 th�
    if(b==0){    //n?u b==0 th�
      printf("\nPhuong trinh vo so nghiem");
    }else{       //n?u kh�ng th� (n?u b!=0 th�)
      printf("\nPhuong trinh vo nghiem");
    }
  }else{         //n?u kh�ng th� (n?u a!=0 th�)
    printf("\nPhuong trinh co nghiem x=%g",-b/a);
  }

  return 0;
}
