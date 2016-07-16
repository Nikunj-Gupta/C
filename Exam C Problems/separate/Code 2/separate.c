#include<stdio.h>
int main(int argc , char * arg[])
{
FILE *vowel,*consonant;
vowel = fopen("vowel.dat","w");
consonant = fopen("consonant.dat","w");
int j;
char c;
for (j=1;j<argc;j++)
{
c = *arg[j];
if (c=='a' ||c=='e' ||c=='i'||c=='o' ||c=='u')
{
fprintf(vowel,"%c ",c);
}
else
{
fprintf(consonant,"%c ",c);
}
}
fclose(vowel);
fclose(consonant);
return 0;
}
