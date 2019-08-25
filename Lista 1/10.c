 #include<stdio.h>
int main()
{

  float i=0,aux=0, sub=0, mult=0,menor;
  float a,aux_a,sub_a,mult_a;
  float b,aux_b,sub_b,mult_b;
  int x;


  printf("Digite um valor:\n");
  scanf("%d", &x);

  menor=x;

  for(i=0;i<=menor;i+=0.1)
  {
      mult = i * i * i;

      sub = (x - mult);

      if(sub<0){
          sub*=(-1);
      }

      if(sub<menor){
          menor=sub;
          sub=menor;
          aux=i;
      }

  }

 if(aux!=0){
   a= (aux+0.1);
   b= (aux-0.1);

   mult_a=(a*a*a);
   mult_b=(b*b*b);

   sub_a=(x-mult_a);
   sub_b=(x-mult_b);

   if(sub_a<0){
          sub_a*=(-1);
      }

   if(sub_b<0){
          sub_b*=(-1);
      }

 if(sub_a<menor){
          menor=sub_a;
          sub_a=menor;
          aux_a=i;
      }

 if(sub_b<menor){
          menor=sub_b;
          sub_b=menor;
          aux_b=i;
      }

 }

 if(sub<sub_a && sub<sub_b){
   printf("%.1f\n",aux);
 }

 if(sub_a<sub && sub_a<sub_b){
   printf("%.1f\n",aux_a);
 }

 if(sub_b<sub && sub_b<sub_a){
   printf("%.1f\n",aux_b);
 }


  return 0;
}
