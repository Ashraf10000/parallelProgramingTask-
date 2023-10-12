#include <stdio.h>
int main() {
    char name[20] = {'\0'},password[30] = {'\0'},passwordConfirm[30] = {'\0'};
    printf("Enter Your Name: ");
    scanf("%s",name);
    printf("Enter Your password: ");
    scanf("%s",password);
    printf("confirm password: ");
    scanf("%s",passwordConfirm);
    for(int i = 0;i<sizeof(password)/sizeof(password[0]);i++)
        if(password[i] != passwordConfirm[i]){
            printf("password doesn't match!");
            return 0;
        }
    printf("user name:%s\nPassword:%s",name,password);
    return 0;
}
