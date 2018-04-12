#include<stdio.h>
struct na{
char a[100];
};
main(){
    struct na arr[3]={"Shubham" ,"Manik", "Devanshu"};
int n,acno[3]={1001,1002,1003};
int p,acpin[3]={111,222,333};
int i,sum,t;
int m,money[3]={1000,100000,400};
printf("WELCOME TO AP BANK\n");
printf("Enter your account Number: ");
scanf("%d",&n);
for(i=0;i<3;i++){
    if(acno[i]==n){printf("Welcome %s Enter your pin: ",arr[i].a);
}

    }
    scanf("%d",&p);
 for(i=0;i<3;i++){
    if(acpin[i]==p){ printf("Enter the amount you want to withdraw: ");
    t=i;}

 }
 scanf("%d",&m);
 sum=money[t]-m;
 if(sum>0)
    printf("Your account has been successfully debited with %d Rs\nYour current balance: %d\n",m,sum);
    else
        printf("You are poor guy\n");



}
















