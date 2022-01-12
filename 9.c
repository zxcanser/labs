#include <string.h>
#include <stdio.h>
#include <stdbool.h>

int palindrom(char s[])
{
    int l, i;
    l = strlen(s);
    for (i =0;i<l/2;i++)
    {
        if (s[i]!=s[l-1-i])
            return(false);
    }
    return(true);
}

int main()
{
   char str[50];
   char *str1;
   char *istr;

   printf("Enter string with some palindromes =) (В конце добавить пробел!): ");
   fgets(str, 50, stdin);
   istr = strtok (str," ");

   while (istr != NULL)
   {
      if (palindrom(istr))
      {
          if (strlen(istr)>strlen(str1))
              str1 = istr;
      }
      istr = strtok (NULL," ");
   }

   printf("The longest palindrome is %s\n", str1);
   return 0;
}