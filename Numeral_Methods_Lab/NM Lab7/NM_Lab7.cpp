#include<stdio.h>
#include<math.h>
#define f1(m,n,o,p,q) (100+n)/10
#define f2(m,n,o,p,q) (130+m+2*o)/15
#define f3(m,n,o,p,q) (162+n+p)/20
#define f4(m,n,o,p,q) (184+q+o)/25
#define f5(m,n,o,p,q) (202+p)/30

int main()
{
 float m0=0, n0=0, o0=0, p0=0, q0=0, m1, n1, o1, p1, q1, e1, e2, e3, e4, e5, e;
 int count=1;
 printf("Enter tolerable error:\n");
 scanf("%f", &e);
 printf("\n\tx1\tx2\tx3\tx4\tx5\n");
 do
 {
  m1 = f1(m0,n0,o0,p0,q0);
  n1 = f2(m1,n0,o0,p0,q0);
  o1 = f3(m1,n1,o0,p0,q0);
  p1 = f4(m1,n1,o1,p0,q0);
  q1 = f5(m1,n1,o1,p1,q0);
  printf("%d\t%0.4f\t%0.4f\t%0.4f\t%0.4f\t%0.4f\n",count, m1,n1,o1,p1,q1);
  e1 = fabs(m0-m1);
  e2 = fabs(n0-n1);
  e3 = fabs(o0-o1);
  e4 = fabs(p0-p1);
  e5 = fabs(q0-q1);
  count++;
  m0 = m1;
  n0 = n1;
  o0 = o1;
  p0 = p1;
  q0 = q1;
 }while(e1>e && e2>e && e3>e && e4>e && e5>e);
 printf("\nSolution: x1=%0.3f, x2=%0.3f, x3= %0.3f, x4=%0.3f, x5=%0.3f\n",m1,n1,o1,p1,q1);
 return 0;
}