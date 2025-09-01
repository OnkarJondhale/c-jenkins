#include<stdio.h>

int main()
{
    printf("This code is fetched from a github repository \n(adding a new line character) \n");
    printf("This commit is for triggering the poll SCM \n");
    printf("This line does not have semicolon to fail the jenkins build so that it can send the email notification about it");
    return 0;
}