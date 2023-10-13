#include <stdio.h>
#include <stdbool.h>
#include <string.h>

int main() {
    char name[5][10] = {"Ahmed", "Mohamed", "Mostafa", "Yousef", "Moaz"};
    int password[5] = {1, 2, 3, 4, 5};
    printf("Will you register or login : ");
    char type[10];
    scanf("%s", type);
    if (strcmp(type, "login") == 0) {
        char name1[10];
        printf("Enter your name : ");
        scanf("%s", name1);
        bool flag1 = false;
        for (int i = 0; i < 5; i++) {
            if (strcmp(name[i], name1) == 0) {
                flag1 = true;
            }
        }
        int password1;
        printf("Enter your password : ");
        scanf("%d", &password1);
        bool flag2 = false;
        for (int i = 0; i < 5; i++) {
            if (password[i] == password1) {
                flag2 = true;
            }
        }
        if (flag1 && flag2) {
            printf("login successful");
        } else {
            printf("login fail..please check your name or password");
        }
    } else {
        char name2[10];
        int password2;
        printf("Enter your name please: ");
        scanf("%s", name2);
        printf("Enter your password please: ");
        scanf("%d", &password2);
        printf("Register successful ");
    }
    return 0;
}