#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
  char s[20],s1[20,t[20],i,j=0;
  clrscr();
  printf("\n Enter a string");
  scanf("%s",s1);
  s=strrev(s1);
  for(i = 0; s[i] != '\0'; i++)
  {
    if(check_vowel(s[i]) == 0)
    {   
      t[j] = s[i];
      j++;
    }
  }
  t[j] = '\0';
  strcpy(s, t); 
  printf("String after deleting vowels: %s\n", s);
  return 0;
}
int check_vowel(char c)
{
  switch(c) {
    case 'a':
    case 'A':
    case 'e':
    case 'E':
    case 'i':
    case 'I':
    case 'o':
    case 'O':
    case 'u':
    case 'U':
      return 1;
    default:
      return 0;
  }
}
