#include<stdio.h>
#include<conio.h>

int penjumlahan (int a, int b);
int pengurangan (int a, int b);
int pembagian (int a, int b);
int perkalian (int a, int b);

int main (void)
{
int a,b,c,op;
printf("pilih operasi\n(1)penjumlahan\n(2)pengurangan\n(3)pembagian\n(4)perkalian\noperasi ");
scanf("%d",&op);
printf("masukan bilangan pertama : ");
scanf("%d",&a);
printf("masukan bilangan kedua : ");
scanf("%d",&b);
switch (op)
{
case 1:
    c=penjumlahan(a,b);
    printf("\n%d+%d=%d",a,b,c); break;
case 2:
    c=pengurangan (a,b);
    printf("\n%d-%d=%d",a,b,c); break;
case 3:
    c=pembagian (a,b);
    printf("\n%d/%d=%d",a,b,c); break;
case 4:
    c=perkalian (a,b);
    printf("\n%d*%d=%d",a,b,c); break;
default :
    printf("\noperasi tidak ditemukan");
break;
}
getch ();
}
int penjumlahan (int a, int b)
{
    int c;
    c=a+b;
    return (c);
}
int pengurangan (int a, int b)
{
    int c;
    c=a-b;
    return (c);
}
int pembagian (int a, int b)
{
    int c;
    c=a/b;
    return (c);
}
int perkalian (int a, int b)
{
    int c;
    c=a*b;
    return (c);
}
