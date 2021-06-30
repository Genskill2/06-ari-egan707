#include <stdio.h>
#include <assert.h>
#include <string.h>
#include <cs50.h>
#include <math.h>
#include <ctype.h>

string ari(string s)
{
float ch,word,sen,result;
ch=0.0;
word=0.0;
sen=0.0;
for(int i=0;s[i]!='\0';i++)
{
  if(isalnum(s[i]))
  {
    ch++;
  }
  
  if(s[i]=='!' || s[i] == '.' || s[i] == '?')
  {
    sen++;
  }
  
   if(s[i]==' ')
   {
    word++;
   }
}

result=4.71*ch/word+0.5*word/sen-21.43;
int x=ceil(result);
string w;

switch(x)
{
  case 1: w= "Kindergarden";
          break;
  case 2: w="First/Second Grade";
          break;
  case 3:w="Third Grade";
         break;
  case 4:w="Fourth Grade";
         break;
  case 5:w="Fifth Grade";
         break;
  case 6:w="Sixth Grade";
         break;
  case 7:w="Seventh Grade";
         break;
  case 8:w="Eigth Grade";
         break;
  case 9:w="Ninth Grade";
         break;
  case 10:w="Tenth Grade";
         break;
  case 11:w="Tenth Grade";
         break;
  case 12:w="Twelfth Grade";
         break;
  case 13:w="Third Grade";
         break;
  case 14:w="Professor";
         break;
       default:break;
}
return w;
}
