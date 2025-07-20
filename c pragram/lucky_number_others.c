 #include <stdio.h>
int main()
{
int x, y, num, found = 1;
scanf("%d %d", &x, &y);
for (int i = x; i <= y; i++)
{
num = i;
int lucky = 1;
while (num > 0)
{
int dig = num % 10;
if (dig != 4 && dig != 7)
{
lucky = 0;
}
num /= 10;
}
if (lucky == 1)
{
found = 0;
printf("%d ", i);
}
}
if (found == 1)
{
printf("-1");
}
return 0;
}