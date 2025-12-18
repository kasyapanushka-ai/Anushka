#include<stdio.h>
#include<math.h>
int main()
{
    double a ,b,c,d,root1,root2,realpart,imagepart;
    printf("Enter the coeffecients of a,b and c");
    scanf("%f %f %f,&a,&b,&c");
    d=b*b-4*a*c;
    if(d>0){
        root1=(-b+sqrt(d)/(2*a));
        root2=(-b-sqrt(d)/(2*a));
        printf("roots are real and distinct: %.21f and %.21f\n",root1,root2);
    }
    else if (d==0)
    {
        root1=root2=(-b/(2*a));
        printf("roots are real and equal:%.21f\n",root1);
    }
    else
    {
        realpart=-b/(2*a);
        imagepart=sqrt(-d)/(2*a);
        printf("roots are complex:%21f+%21f and %21f-%21f\n",realpart,imagepart,realpart,imagepart);
    }
    return 0;
}