#include <stdio.h>
double factorial(int m);
int main()
{
    double result;
    int num;
    printf("Enter a real number\n");
    scanf("%d",&num);
    result = factorial(num);
    printf("Factorial of %d is %lf",num,result);
}
    double factorial(int m){
    unsigned int n;
    double total=m;
    if(m==0)
        return 1;
    else if(m<0){
        m=-1*m;
        for(n=(m-1);n>=1;n--)
            total=total*n;
        return total;
    }
    else{
        for(n=m-1;n>=1;n--)
            total=total*n;
        return total;
    }
}
