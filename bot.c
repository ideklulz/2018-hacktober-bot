#include <stdio.h>
#include <string.h>
#include <windows.h>
#define SIZE 200
#ifndef KEYWORDS_H
    #define KEYWORDS_H
    #include "keywords.h"
#endif

int main()
{
    FILE* request;
    char chat[SIZE];
    helloMSG();
    singleCommandReminder();
    while (1)
    {
        billMSG();
        spamMSG();
        simMSG();
        promoMSG();
        requestMSG();
        exitMSG();
        printf("> ");
        fgets(chat, SIZE, stdin);
        if (strstr(chat, " ") != NULL) {
            request = fopen("request.txt", "a");
            fprintf(request, "REQUEST: %s\n", chat);
            printf("Thank you for sending your request. A representative will contact you shortly.\n");
            printf("Have a nice day.\n");
            fclose(request);
            break;
        } else {
            chat[strlen(chat)-1] = '\0';
            if(strcmp(chat,"BILL")==0)
            {
                //opens link to BILL information
                system("start https://support.t-mobile.com/docs/DOC-1723");
            }
            else if(strcmp(chat,"SPAM")==0)
            {
                //opens link to SPAM information
                system("start https://support.t-mobile.com/docs/DOC-2747");
            }
            else if(strcmp(chat,"SIM")==0)
            {
                //opens link to SIM information
                system("start https://support.t-mobile.com/docs/DOC-10162");
            }
            else if(strcmp(chat,"PROMO")==0)
            {
                //opens link to PROMO information
                system("start https://www.t-mobile.com/offers/deals-hub");
            }
            else if(strcmp(chat,"EXIT")==0)
            {
                printf("Have a nice day.\n");
                break;
            }
            else printf("Unrecognized command\n");
        }
    }
}

