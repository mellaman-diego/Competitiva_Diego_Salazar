#include<stdio.h>
int main()
{
int i,j,k,a,b,h,hd[100000],n,p,pd[150],tc,t,s;
while(scanf("%d",&tc)==1) //se ingresa la camtidad de casos de prueba
{
for(i=0;i<tc;i++) // ciclo para que se cumplan la cantidad de casos
    {
    h=0;
    s=0;
    scanf("%d",&n);//cantidad de dias en los que se realizara la simulacion
    scanf("%d",&p);//cantidad de partidos  politicos
    for(j=0;j<p;j++)
    scanf("%d",&pd[j]);//se asignan el parametro hartal para cada partido politic
    for(j=0;j<p;j++)
        for(k=pd[j];k<=n;k+=pd[j])
            if(k%7!=0 && k%7!=6)
                {
                h++;
                hd[h-1]=k;
                }
    for(a=1;a<h;a++)
        for(b=h-1;b>=a;b--)
            if(hd[b-1]>hd[b])
                {
                t=hd[b-1];
                hd[b-1]=hd[b];
                hd[b]=t;
                }
    for(t=1;t<h;t++)
    if(hd[t]==hd[t-1])
    s++;
    printf("%d\n",h-s);//se imprimen los dias de trabajo perdido
    }
}
}