/*void strFIX(char*str)
{
    int i;
    for(i=0;str[i]!=strlen(str);i++)
    {
        if(str[i]=='\n')
        {
            str[i]=='\0';
        }
    }
}*/

void billMSG()
{
    printf("If you need help with a payment or have questions about setting a payment plan, enter the word BILL\n");
}

void spamMSG()
{
    printf("If you need help with blocking unwanted messages or calls, enter the word SPAM\n");
}

void simMSG()
{
    printf("If you need help with activating your SIM card, enter the word SIM\n");
}

void promoMSG()
{
    printf("If you want to know about special offers or discount, enter the word PROMO\n");
}

void helloMSG()
{
    printf("Hello! I am a helper bot here to guide you to links with instructions to help you fix your problems.\nWhat may I help you with?\n");
}

void exitMSG()
{
    printf("If you want to stop this conversation say EXIT\n");
}

void requestMSG() {
    printf("But if you want to send a message to us, type it here. Include your name, email and your T-Mobile account number, and allow 24 hours for us to get back to you.\n");
}

void singleCommandReminder() {
    printf("Please only enter a single command. If your input has spaces it will be treated as a request, and will be sent to a representative.\n");
}