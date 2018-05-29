#include <iostream>
using namespace std;

string encrypt (char str[], int i) {
  for(i = 0; (i < 100 && str[i] != '\0'); i++)
  str[i] = str[i] + 2;

  return str;
}

string decrypt (char str[], int i) {
  for(i = 0; (i < 100 && str[i] != '\0'); i++)
  str[i] = str[i] - 2;

  return str;
}

int main()
{
   int i, x;
   char str[100];

   cout << "|||____________________________________________|||\n";
   cout << "|||__________Welcome To Encrypt.cpp____________|||\n";
   cout << "|||____________________________________________|||\n";
   cout << "\nEnter a string:\t";
   cin >> str;
   cout << "\nEnter '1' to encrypt the message.\n";
   cout << "Enter '2' to decrypt the message.\n\n";
   cin >> x;

   if (x == 1) {
      encrypt(str,i);

      cout << "\nEncrypted key:\t" << str << endl;
    }
    else if (x == 2) {
      decrypt(str,i);

      cout << "\nDecrypted key: " << str << endl;
    } else {
      cout << "Your input is invalid!";
   }
   return 0;
}
