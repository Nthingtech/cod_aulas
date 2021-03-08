#include <stdio.h>

int main(void) {

    int a, b, c, d, e, f, g, h, i, j, k, l, m, n, o, p, q, r, s, t;
    a=6;
    c=15;
    b=10;
    d=20;
    e=25;
    f=30;
    g=35;
    h=40;
    i=45;
    j=50;
    k=55;
    l=60;
    m=65;
    n=70;
    o=75;
    p=80;
    q=85;
    r=90;
    s=100;
    t=110;

    c=b+a;
    printf("c=%d\n", c); //Operador de atribuição simples

    a+= 4; //a= a + 4;
    printf("a=%d\n", a);

    a-= 4; //a= a - 4;
    printf("a=%d\n", a);

    a*= 4; //a= a * 4;
    printf("a=%d\n", a);

    a/= 4; //a= a / 4;
    printf("a=%d\n", a);

    b%= 2; //b= b % 2;
    printf("b=%d\n", b);

    d<<= 2; //d= d << 2;
    printf("d=%d\n", d);

    h>>= 2; //h= h >> 2;
    printf("h=%d\n", h);

    i&= 6; //i= i & 6;
    printf("i=%d\n", i);

    j^= 2; //j= j ^ 2;
    printf("i=%d\n", j);

    k|= 2; //k= k | 2;
    printf("k=%d\n", k);

    return 0;
}
