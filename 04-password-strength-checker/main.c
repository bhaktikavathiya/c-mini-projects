#include <stdio.h>
#include <string.h>

int main(){
    printf("===============================\n");
    printf("\n   PASSWORD STRENGTH CHECKER\n");
    printf("\n===============================\n");
    printf("\nINSTRUCTION:\n"
            "1. The password should be of at least 8 characters.\n"
            "2. The password should at least have one Uppercase letter.\n"
            "3. The password should at least have one Lowercase letter.\n"
            "4. The password should at least have one Number.\n");
    
    int i;
    int hasNumber = 0;
    int hasLowercase = 0; 
    int hasUppercase =0;
    int passwordLength;
    char password[100];
    
    printf("\nEnter your password: ");
    scanf("%s", password);

    passwordLength = strlen(password);

    for(i=0; i<passwordLength; i++){
        char currentCharacter = password[i];
        if(currentCharacter >= '0' && currentCharacter <= '9'){
            hasNumber = 1;
        }
        if(currentCharacter >= 'A' && currentCharacter <= 'Z'){
            hasUppercase = 1;
        }
        if(currentCharacter >= 'a' && currentCharacter <= 'z'){
            hasLowercase = 1;
        }
    }

    if(hasNumber && hasUppercase && hasLowercase && passwordLength >= 8){
        printf("\nStrong Password\n");
    } else {
        printf("\nWeak Password\n");
    }

    return 0;
}