#include <stdio.h>
#include <stdlib.h>

int
main ()
{


  int phoneNumber;
  int phoneNumber1;
  int phoneNumber2;


    //Asks for users phone number
    printf ("Enter a phone number: ");

      scanf ("%d", &phoneNumber);
    //if phonenumber = 0 the program will exit.

    //If user does not enter 0, the program will loop till vaild input.
while(phoneNumber==0) {
        while (9999999 < phoneNumber || 1999999 > phoneNumber) {

        printf ("Enter a phone number: ");
        scanf ("%d", &phoneNumber);
        }


// Divde by 10000 to get the first 3 digits of the phone number
  phoneNumber = phoneNumber / 10000;
// Mod by 10000 to get the last 4 digits of the phone number
  phoneNumber2 = phoneNumber % 10000;
// Prints both phone numbers with an added hyphen in the middle
  printf ("%d-%d", phoneNumber, phoneNumber2);
}
  return 0;
}
