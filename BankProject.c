#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {

    char firstname[50];
    char lastname[50];
    char cardnumber[17];
    int expirationmonth;
    int expirationyear;
    int cvv2;
    int pin;
    int balance;
    int currentaccount;
    char cardnumberentered[17];
    int choice1;
    int choice2;
    int amount;
    int transactions[10];
    int transactioncount = 0;
    int choice3;
    int expirationmonthofarrival;
    int expirationyearofarrival;
    int cvv2ofentry;
    int destinationcardnumber;
    int choice4;

    int passwordentered;
    int newpin;
    int d, t;
    int codecounting;
    int enteredcardnumber;
    int transactiontype[10];
    int cardnumberequality;

    printf("\t\t\t                 Welcome to Code Star ATM\n");
    printf("1.Please insert your card and then press the number.\n");
    printf("2. Please create an account if you don't have one.\n");
    printf("please select the desired option:");

    int c;
    scanf("%d", &c);

    if (c == 1) {

        int existingaccounts;
        char firstname[6] = "Mahdi";
        char lastname[7] = "Nazari";
        char cardnumber[17] = "1234567891234567";
       

        currentaccount = 1;
        balance = 500000;

        expirationmonth = 12;
        expirationyear = 2026;
        cvv2 = 123;

        if (currentaccount == 0) {
            printf("no active account found\n");
            printf("please recheck bank account\n");
        } else {
            printf("Enter card number: ");
            scanf("%s", cardnumberentered);
        }

         cardnumberequality = 1;
        for (int i = 0; i < 16; i++) {
            if (cardnumberentered[i] != cardnumber[i]) {
                cardnumberequality = 0;
                break;
            }
        }

        if (cardnumberequality == 0) {
            printf("\nThere is no active account for the card number entered\n");
            return 0;
        }

        pin = 1234;

        for (codecounting = 1; codecounting <= 3; codecounting++) {

            printf("Please enter your card password:");
            scanf("%d", &passwordentered);

            t = passwordentered;
            d = 0;

            while (t > 0) {
                d = d + 1;
                t = t / 10;
            }

            if (d != 4)
                printf("The password must be 4 digits.\n");

            if (pin == passwordentered)
                break;
            else
                printf("The password is incorrect.\n");

            if (codecounting == 3 && passwordentered != pin) {
                printf("You made many mistakes.The program ended.");
                return 0;
            }
        }
        while (1) {
    printf("\t\t  Select service type\n");
    printf("1. account details\t\t\t");
    printf("2.deposit\n");
    printf("3.withdrawal\t\t\t\t");
    printf("4.found transfer\n");
    printf("5.buy recharge\t\t\t\t");
    printf("6.show last 10 transactions\n");
    printf("7.change password\t\t\t");
    printf("8.Exit\n\n");

    int ch;
    printf("please select the desired option:");
    scanf("%d", &ch);

    switch (ch) {

        case 1:

            if (cardnumberequality == 1) {

                printf("\nAn active bank account.\n");
                printf("1. view account information");
                printf("\nchoice:");

                scanf("%d", &choice1);

                if (choice1 == 1) {
                    printf("\nFirst Name: %s\n", firstname);
                    printf("Last Name: %s\n", lastname);
                    printf("Card Number: %s\n", cardnumber);
                    printf("pin:%d\n", pin);
                    printf("Balance: %d\n", balance);
                    printf("cvv2:%d\n", cvv2);
                    printf("Expiration Month:%d\n", expirationmonth);
                    printf("Expiration Year:%d\n", expirationyear);
                    printf("Account status: Active\n");
                } else {
                    printf("This account does not belong to you\n");
                    printf("Only one account can be created at this branch\n");
                }

            } else {
                printf("There is no active account at this branch.\n");
            }

            break;
            case 2:

    if (currentaccount == 0) {
        printf("no active account found\n");
        printf("please recheck bank account\n");
    } 
    else {
        printf("please enter the desired amount\n");
        printf("1. 50,000\n");
        printf("2. 100,000\n");
        printf("3. 200,000\n");
        printf("4. 500,000\n");
        printf("5. 1,000,000\n");
        printf("6. enter amount\n");
        printf("choise:");
        scanf("%d", &choice2);

        switch (choice2) {
            case 1:
                amount = 50000;
                break;
            case 2:
                amount = 100000;
                break;
            case 3:
                amount = 200000;
                break;
            case 4:
                amount = 500000;
                break;
            case 5:
                amount = 1000000;
                break;
            case 6:
                scanf("%d", &amount);
                break;
            default:
                printf("\nthe desired option was not found\n");
                amount = 0;
                break;
        }

        if (amount <= 0) {
            printf("The amount must be greater than zero\n");
        } 
        else {
            balance = balance + amount;

            if (transactioncount < 10) {
                transactions[transactioncount] = amount;
                transactiontype[transactioncount] = 1;
                transactioncount++;
            } 
            else {
                for (int i = 0; i < 9; i++) {
                    transactions[i] = transactions[i + 1];
                    transactiontype[i] = transactiontype[i + 1];
                }
                transactions[9] = amount;
                transactiontype[9] = 1;
            }

            printf("The operation was successful\n");
            printf("Current balance = %d\n", balance);
        }
    }

    break;
    case 3:

    if (currentaccount == 0) {
        printf("no active account found\n");
        printf("please recheck bank account\n");
    } 
    else {
        printf("please enter the desired amount\n");
        printf("1. 50,000\n");
        printf("2. 100,000\n");
        printf("3. 200,000\n");
        printf("4. 500,000\n");
        printf("5. 1,000,000\n");
        printf("6. enter amount\n");
        printf("choise:");
        scanf("%d", &choice3);

        switch (choice3) {
            case 1:
                amount = 50000;
                break;
            case 2:
                amount = 100000;
                break;
            case 3:
                amount = 200000;
                break;
            case 4:
                amount = 500000;
                break;
            case 5:
                amount = 1000000;
                break;
            case 6:
                printf("\nenter amount: ");
                scanf("%d", &amount);
                break;
            default:
                printf("\nthe desired option was not found\n");
                amount = 0;
                break;
        }

        if (amount <= 0) {
            printf("The amount must be greater than zero\n");
        } 
        else if (amount > 10000000) {
            printf("ATM usage restriction\n");
        } 
        else if (balance - amount < 20000) {
            printf("Your account balance is not sufficient\n");
        } 
        else {
            balance = balance - amount;

            if (transactioncount < 10) {
                transactions[transactioncount] = -amount;
                transactiontype[transactioncount] = 2;
                transactioncount++;
            } 
            else {
                for (int i = 0; i < 9; i++) {
                    transactions[i] = transactions[i + 1];
                    transactiontype[i] = transactiontype[i + 1];
                }
                transactions[9] = -amount;
                transactiontype[9] = 2;
            }

            printf("the operation was successful\n");
            printf("current balanced: %d\n", balance);
        }
    }

    break;
    case 4:

    if (currentaccount == 0) {
        printf("no active acccount found\n");
        printf("please create a bank account\n");
    } 
    else {

        printf("Enter card expiration month: ");
        scanf("%d", &expirationmonthofarrival);

        printf("Enter card expiration year: ");
        scanf("%d", &expirationyearofarrival);

        printf("Enter cvv2: ");
        scanf("%d", &cvv2ofentry);

         cardnumberequality = 1;

        if (expirationmonthofarrival != expirationmonth ||
            expirationyearofarrival != expirationyear ||
            cvv2ofentry != cvv2) 
        {
            cardnumberequality = 0;
            break;
        }

        if (cardnumberequality == 0) {
            printf("the card information entered is incorrect\n");
        } 
        else {

            printf("Enter destination card number: ");
            scanf("%s", destinationcardnumber);

            printf("\nEnter the amount:");
            scanf("%d", &amount);

            if (amount <= 0) {
                printf("The amount must be greater than zero\n");
            } 
            else if (amount > 10000000) {
                printf("ATM usage restriction\n");
            } 
            else if (balance - amount < 20000) {
                printf("Your account balance is not sufficient\n");
            } 
            else {

                balance = balance - amount;

                if (transactioncount < 10) {
                    transactions[transactioncount] = -amount;
                    transactiontype[transactioncount] = 3;
                    transactioncount++;
                } 
                else {
                    for (int i = 0; i < 9; i++) {
                        transactions[i] = transactions[i + 1];
                        transactiontype[i] = transactiontype[i + 1];
                    }
                    transactions[9] = -amount;
                    transactiontype[9] = 3;
                }

                printf("the operation was successful\n");
                printf("current balanced: %d\n", balance);
            }
        }
    }

    break;
    case 5:

    if (currentaccount == 0) {
        printf("no active acccount found\n");
        printf("please create a bank account\n");
    } 
    else {

        printf("Enter card expiration month: ");
        scanf("%d", &expirationmonthofarrival);

        printf("Enter card expiration year: ");
        scanf("%d", &expirationyearofarrival);

        printf("Enter cvv2: ");
        scanf("%d", &cvv2ofentry);

         cardnumberequality = 1;

        if (expirationmonthofarrival != expirationmonth ||
            expirationyearofarrival != expirationyear ||
            cvv2ofentry != cvv2) 
        {
            cardnumberequality = 0;
            break;
        }

        if (cardnumberequality == 0) {
            printf("the card information entered is incorrect\n");
        } 
        else {

            int phonenumber;
            printf("please enter the desired phonenumber:");
            scanf("%d", &phonenumber);

            printf("\nselect the charge amount\n");
            printf("1.10,000\n");
            printf("2.20,000\n");
            printf("3.50,000\n");
            printf("4.Desired amount\n");
            printf("choice:");
            scanf("%d", &choice4);

            switch (choice4) {
                case 1:
                    amount = 10000;
                    break;
                case 2:
                    amount = 20000;
                    break;
                case 3:
                    amount = 50000;
                    break;
                case 4:
                    printf("\nEnter amount: ");
                    scanf("%d", &amount);
                    break;
                default:
                    printf("\nthe desired option was not found\n");
                    amount = 0;
                    break;
            }

            if (amount <= 0) {
                printf("The amount must be greater than zero\n");
            } 
            else if (amount > 10000000) {
                printf("ATM usage restriction\n");
            } 
            else if (balance - amount < 20000) {
                printf("Your account balance is not sufficient\n");
            } 
            else {

                balance = balance - amount;

                if (transactioncount < 10) {
                    transactions[transactioncount] = -amount;
                    transactiontype[transactioncount] = 4;
                    transactioncount++;
                } 
                else {
                    for (int i = 0; i < 9; i++) {
                        transactions[i] = transactions[i + 1];
                        transactiontype[i] = transactiontype[i + 1];
                    }
                    transactions[9] = -amount;
                    transactiontype[9] = 4;
                }

                printf("the operation was successful\n");
                printf("current balanced: %d\n", balance);
            }
        }
    }

    break;
    case 6:

    if (transactioncount == 0) {
        printf("no transactions found\n");
    } 
    else {
        int start = 0;
        if (transactioncount > 10)
            start = transactioncount - 10;

        printf("Last transactions:\n");

        for (int i = start; i < transactioncount; i++) {
            switch (transactiontype[i]) {
                case 1:
                    printf("Deposit: +%d\n", transactions[i]);
                    break;
                case 2:
                    printf("Withdrawal: -%d\n", transactions[i]);
                    break;
                case 3:
                    printf("Transfer: -%d\n", transactions[i]);
                    break;
                case 4:
                    printf("Recharge: -%d\n", transactions[i]);
                    break;
            }
        }
    }

    break;
    case 7:

    if (currentaccount == 0) {
        printf("no active account found\n");
        printf("please recheck bank account\n");
    } 
    else {
        printf("Please enter the card number you want to change the password for: ");
        scanf("%s", cardnumberentered);
    }

     cardnumberequality = 1;
    for (int i = 0; i < 16; i++) {
        if (cardnumberentered[i] != cardnumber[i]) {
            cardnumberequality = 0;
            break;
        }
    }

    if (cardnumberequality == 0) {
        printf("\nThere is no active account for the card number entered\n");
    } 
    else {
        printf("Enter the current card password : ");
        scanf("%d", &passwordentered);
    }

    if (passwordentered != pin) {
        printf("The card password is incorrect\n");
    } 
    else {
        printf("Enter new PIN: ");
        scanf("%d", &newpin);

        if (newpin == pin) {
            printf("The new PIN cannot be the same as the previous password\n");
        } 
        else {
            d = 0;
            t = newpin;

            while (t > 0) {
                t = t / 10;
                d++;
            }

            if (d != 4) {
                printf("The new PIN must be 4 digits.\n");
            } 
            else {
                pin = newpin;
                printf("your PIN has been changed successfully\n");
            }
        }
    }

    break;
    case 8:
    printf("\nThank you for using Code Star ATM\n");
    printf("Goodbye \n");
    return 0;
    break;

default:
    printf("The desired option is not defined.\n");
    break;
}
}

} else if (c == 2) {

    printf("Enter First Name:\n");
    scanf("%s", firstname);

    printf("Enter Last Name:\n");
    scanf("%s", lastname);

    printf("Enter the desired card number, it must be 16 digits:\n");
    scanf("%s", cardnumber);

    printf("Enter the desired card number 4 digits:\n");
    scanf("%d", &pin);

    printf("Enter the month:\n");
    scanf("%d", &expirationmonth);

    printf("Enter a date 4 years from now:\n");
    scanf("%d", &expirationyear);

    printf("Enter optional cvv2:\n");
    scanf("%d", &cvv2);

    printf("Enter Initial Balance:\n");
    scanf("%d", &balance);

    currentaccount = 1;
    cardnumberequality = 1;

    while (1) {

        printf("\t\t  Select service type\n");
        printf("1. account details\t\t\t");
        printf("2.deposit\n");
        printf("3.withdrawal\t\t\t\t");
        printf("4.found transfer\n");
        printf("5.buy recharge\t\t\t\t");
        printf("6.show last 10 transactions\n");
        printf("7.change password\t\t\t");
        printf("8.Exit\n\n");

        int ch;
        printf("please select the desired option:");
        scanf("%d", &ch);

        switch (ch) {

            case 1:

                if (cardnumberequality == 1) {

                    printf("\nAn active bank account.\n");
                    printf("1. view account information");
                    printf("\nchoice:");

                    scanf("%d", &choice1);

                    if (choice1 == 1) {
                        printf("\nFirst Name: %s\n", firstname);
                        printf("Last Name: %s\n", lastname);
                        printf("Card Number: %s\n", cardnumber);
                        printf("pin:%d\n", pin);
                        printf("Balance: %d\n", balance);
                        printf("cvv2:%d\n", cvv2);
                        printf("Expiration Month:%d\n", expirationmonth);
                        printf("Expiration Year:%d\n", expirationyear);
                        printf("Account status: Active\n");
                    } 
                    else {
                        printf("This account does not belong to you\n");
                        printf("Only one account can be created at this branch\n");
                    }

                } 
                else {
                    printf("There is no active account at this branch.\n");
                }

                break;
                case 2:

    if (currentaccount == 0) {
        printf("no active account found\n");
        printf("please recheck bank account\n");
    }
    else {
        printf("please enter the desired amount\n");
        printf("1. 50,000\n");
        printf("2. 100,000\n");
        printf("3. 200,000\n");
        printf("4. 500,000\n");
        printf("5. 1,000,000\n");
        printf("6. enter amount\n");
        printf("choise:");
        scanf("%d", &choice2);

        switch (choice2) {
            case 1:
                amount = 50000;
                break;
            case 2:
                amount = 100000;
                break;
            case 3:
                amount = 200000;
                break;
            case 4:
                amount = 500000;
                break;
            case 5:
                amount = 1000000;
                break;
            case 6:
                scanf("%d", &amount);
                break;
            default:
                printf("\nthe desired option was not found\n");
                amount = 0;
                break;
        }

        if (amount <= 0) {
            printf("The amount must be greater than zero\n");
        }
        else {
            balance = balance + amount;

            if (transactioncount < 10) {
                transactions[transactioncount] = amount;
                transactiontype[transactioncount] = 1;
                transactioncount++;
            }
            else {
                for (int i = 0; i < 9; i++) {
                    transactions[i] = transactions[i + 1];
                    transactiontype[i] = transactiontype[i + 1];
                }
                transactions[9] = amount;
                transactiontype[9] = 1;
            }

            printf("The operation was successful\n");
            printf("Current balance = %d\n", balance);
        }
    }

    break;
    case 3:

    if (currentaccount == 0) {
        printf("no active account found\n");
        printf("please recheck bank account\n");
    } 
    else {
        printf("please enter the desired amount\n");
        printf("1. 50,000\n");
        printf("2. 100,000\n");
        printf("3. 200,000\n");
        printf("4. 500,000\n");
        printf("5. 1,000,000\n");
        printf("6. enter amount\n");
        printf("choise:");
        scanf("%d", &choice3);

        switch (choice3) {
            case 1:
                amount = 50000;
                break;
            case 2:
                amount = 100000;
                break;
            case 3:
                amount = 200000;
                break;
            case 4:
                amount = 500000;
                break;
            case 5:
                amount = 1000000;
                break;
            case 6:
                printf("\nenter amount: ");
                scanf("%d", &amount);
                break;
            default:
                printf("\nthe desired option was not found\n");
                amount = 0;
                break;
        }

        if (amount <= 0) {
            printf("The amount must be greater than zero\n");
        } 
        else if (amount > 10000000) {
            printf("ATM usage restriction\n");
        } 
        else if (balance - amount < 20000) {
            printf("Your account balance is not sufficient\n");
        } 
        else {
            balance = balance - amount;

            if (transactioncount < 10) {
                transactions[transactioncount] = -amount;
                transactiontype[transactioncount] = 2;
                transactioncount++;
            } 
            else {
                for (int i = 0; i < 9; i++) {
                    transactions[i] = transactions[i + 1];
                    transactiontype[i] = transactiontype[i + 1];
                }
                transactions[9] = -amount;
                transactiontype[9] = 2;
            }

            printf("the operation was successful\n");
            printf("current balanced: %d\n", balance);
        }
    }

    break;
    case 4:

    if (currentaccount == 0) {
        printf("no active acccount found\n");
        printf("please create a bank account\n");
    } 
    else {

        printf("Enter card expiration month: ");
        scanf("%d", &expirationmonthofarrival);

        printf("Enter card expiration year: ");
        scanf("%d", &expirationyearofarrival);

        printf("Enter cvv2: ");
        scanf("%d", &cvv2ofentry);

         cardnumberequality = 1;

        if (expirationmonthofarrival != expirationmonth ||
            expirationyearofarrival != expirationyear ||
            cvv2ofentry != cvv2) 
        {
            cardnumberequality = 0;
            break;
        }

        if (cardnumberequality == 0) {
            printf("the card information entered is incorrect\n");
        } 
        else {

            printf("Enter destination card number: ");
            scanf("%s", destinationcardnumber);

            printf("\nEnter the amount:");
            scanf("%d", &amount);

            if (amount <= 0) {
                printf("The amount must be greater than zero\n");
            } 
            else if (amount > 10000000) {
                printf("ATM usage restriction\n");
            } 
            else if (balance - amount < 20000) {
                printf("Your account balance is not sufficient\n");
            } 
            else {

                balance = balance - amount;

                if (transactioncount < 10) {
                    transactions[transactioncount] = -amount;
                    transactiontype[transactioncount] = 3;
                    transactioncount++;
                } 
                else {
                    for (int i = 0; i < 9; i++) {
                        transactions[i] = transactions[i + 1];
                        transactiontype[i] = transactiontype[i + 1];
                    }
                    transactions[9] = -amount;
                    transactiontype[9] = 3;
                }

                printf("the operation was successful\n");
                printf("current balanced: %d\n", balance);
            }
        }
    }

    break;
  
    case 5:

    if (currentaccount == 0) {
        printf("no active acccount found\n");
        printf("please create a bank account\n");
    } 
    else {

        printf("Enter card expiration month: ");
        scanf("%d", &expirationmonthofarrival);

        printf("Enter card expiration year: ");
        scanf("%d", &expirationyearofarrival);

        printf("Enter cvv2: ");
        scanf("%d", &cvv2ofentry);

        int cardnumberequality = 1;

        if (expirationmonthofarrival != expirationmonth ||
            expirationyearofarrival != expirationyear ||
            cvv2ofentry != cvv2) 
        {
            cardnumberequality = 0;
            break;
        }

        if (cardnumberequality == 0) {
            printf("the card information entered is incorrect\n");
        } 
        else {

            int phonenumber;
            printf("please enter the desired phonenumber:");
            scanf("%d", &phonenumber);

            printf("\nselect the charge amount\n");
            printf("1.10,000\n");
            printf("2.20,000\n");
            printf("3.50,000\n");
            printf("4.Desired amount\n");
            printf("choice:");
            scanf("%d", &choice4);

            switch (choice4) {
                case 1:
                    amount = 10000;
                    break;
                case 2:
                    amount = 20000;
                    break;
                case 3:
                    amount = 50000;
                    break;
                case 4:
                    printf("\nEnter amount: ");
                    scanf("%d", &amount);
                    break;
                default:
                    printf("\nthe desired option was not found\n");
                    amount = 0;
                    break;
            }

            if (amount <= 0) {
                printf("The amount must be greater than zero\n");
            } 
            else if (amount > 10000000) {
                printf("ATM usage restriction\n");
            } 
            else if (balance - amount < 20000) {
                printf("Your account balance is not sufficient\n");
            } 
            else {

                balance = balance - amount;

                if (transactioncount < 10) {
                    transactions[transactioncount] = -amount;
                    transactiontype[transactioncount] = 4;
                    transactioncount++;
                } 
                else {
                    for (int i = 0; i < 9; i++) {
                        transactions[i] = transactions[i + 1];
                        transactiontype[i] = transactiontype[i + 1];
                    }
                    transactions[9] = -amount;
                    transactiontype[9] = 4;
                }

                printf("the operation was successful\n");
                printf("current balanced: %d\n", balance);
            }
        }
    }

    break;
    case 6:

    if (transactioncount == 0) {
        printf("no transactions found\n");
    } 
    else {
        int start = 0;
        if (transactioncount > 10)
            start = transactioncount - 10;

        printf("Last transactions:\n");

        for (int i = start; i < transactioncount; i++) {
            switch (transactiontype[i]) {
                case 1:
                    printf("Deposit: +%d\n", transactions[i]);
                    break;
                case 2:
                    printf("Withdrawal: -%d\n", transactions[i]);
                    break;
                case 3:
                    printf("Transfer: -%d\n", transactions[i]);
                    break;
                case 4:
                    printf("Recharge: -%d\n", transactions[i]);
                    break;
            }
        }
    }

    break;
    case 7:

    if (currentaccount == 0) {
        printf("no active account found\n");
        printf("please recheck bank account\n");
    } 
    else {
        printf("Please enter the card number you want to change the password for: ");
        scanf("%s", cardnumberentered);
    }

     cardnumberequality = 1;
    for (int i = 0; i < 16; i++) {
        if (cardnumberentered[i] != cardnumber[i]) {
            cardnumberequality = 0;
            break;
        }
    }

    if (cardnumberequality == 0) {
        printf("\nThere is no active account for the card number entered\n");
    }
    else {
        printf("Enter the current card password : ");
        scanf("%d", &passwordentered);
    }

    if (passwordentered != pin) {
        printf("The card password is incorrect\n");
    } 
    else {
        printf("Enter new PIN: ");
        scanf("%d", &newpin);

        if (newpin == pin) {
            printf("The new PIN cannot be the same as the previous password\n");
        } 
        else {
            d = 0;
            t = newpin;

            while (t > 0) {
                t = t / 10;
                d++;
            }

            if (d != 4) {
                printf("The new PIN must be 4 digits.\n");
            } 
            else {
                pin = newpin;
                printf("your PIN has been changed successfully\n");
            }
        }
    }

    break;
    case 8:
    printf("\nThank you for using Code Star ATM\n");
    printf("Goodbye \n");
    return 0;
    break;

default:
    printf("The desired option is not defined.\n");
    break;
        }
    }
}
else
    printf("the desired option was not found");

return 0;
}