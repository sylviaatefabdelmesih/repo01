#include <stdio.h>
char *my_strcpy(char *t, char *s)
{
char *p = t;
while (*t++ = *s++);
return p;
}
int my_strlen(char *s)
{
char *p = s;
while (*p)
++p;
return (p - s);
}
int main(void)
{
int i;
char p1[32];
char *s[] = {
"Git tutorials",
"Tutorials Points"
};
for (i = 0; i < 2; ++i)
printf("string lenght of %s = %d\n", s[i], my_strlen(s[i]));
printf("%s\n", my_strcpy(p1, "Hello, World !!!"));
return 0;
}
