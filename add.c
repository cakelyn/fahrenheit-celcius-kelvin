#include <stdio.h>

int main()
{
  float mile;
  float endMile;
  float increment;
  int a = 0;

  printf("Welcome to Mile-to-Kilometer!\n");
  printf("Please enter a starting mile: ");
  scanf("%f", &mile);
  printf("Please enter an ending mile: ");
  scanf("%f", &endMile);
  printf("Please enter how much I should increment: ");
  scanf("%f", &increment);
  printf("Here is your Mile-to-Kilometer table!\n\n");
  printf("   Mile\t\tKilometer\n");

  while (mile <= endMile)
  {
    /*if (temp > 98.6 && a == 0)
    {
      printf("%6.2f degrees F = %6.2f degrees C\n",
        98.6, (98.6 - 32.0) * 5.0 / 9.0);
      a = 1;
    }*/
    printf("%6.2f miles = %6.2f kilometers\n",
      mile, (mile * 1.6));
    mile += increment;
  }
  return 0;
}