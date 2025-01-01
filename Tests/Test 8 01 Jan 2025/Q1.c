#include <stdio.h>
#include <string.h>

void checkValidation(int savedOtp)
{
    int otp;
    printf("Your OTP is %d\n", savedOtp);
    printf("Enter 4 Digit num displayed above\n");
    scanf("%d", &otp);
    if (otp == savedOtp)
    {
        printf("Login successfully...!\n");
    }
    else
    {
        printf("Verification Failed...!!!\n");
    }
}

int main()
{

    int userid, savedUID = 2128585, count = 0, savedOtp = 2578, otp;
    char password[20], savedPassword[20] = "1234Arjun";
    printf("Enter user id\n");
    scanf("%d", &userid);

    if (userid == savedUID)
    {
        printf("Enter Password\n");
        scanf("%s", password);
    }
    else
    {
        printf("User not found!!!\n");
        return 0;
    }

    if (strcmp(password, savedPassword) == 0)
    {
        checkValidation(savedOtp);
    }
    else
    {
        while (password[0] != '0')
        {
            printf("Press 0 to exit\n");
            printf("Enter Valid password\n");
            scanf("%s", password);
            if (strcmp(password, savedPassword) == 0)
            {
                checkValidation(savedOtp);
            }
            else if (count == 1)
            {
                printf("Account blocked...!\n");
                break;
            }
            else
            {
                printf("Wrong Password Retry...!!!\n");
                count++;
            }
        }
    }

    return 0;
}