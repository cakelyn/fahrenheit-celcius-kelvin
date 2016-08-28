#include <stdio.h>

int main()
{
  float temp;
  float endTemp;
  float celTemp;
  float increment;
  int i = 1;

  printf("Welcome to Fahrenheit-to-Celicus-to-Kelvin!\n");
  printf("Please enter a starting temperature: ");
  scanf("%f", &temp);
  printf("Please enter an ending temperature: ");
  scanf("%f", &endTemp);
  printf("Buy how much should I incremenet?: ");
  scanf("%f", &increment);
  printf("Thank you, and here is your table!\n\n");
  printf("    Fahrenheit\t\t Celcius\t\t  Kelvin\n");

  while(temp <= endTemp)
  {
    celTemp = (temp - 32.0) * 5.0/9.0;
    if (temp > 98.6 && i == 1)
    {
      printf("%7.2f degrees F = %7.2f degrees C = %7.2f degrees K\n", 98.6,
        celTemp, celTemp - 237.0);
      i = 0;
    }
    printf("%7.2f degrees F = %7.2f degrees C = %7.2f degrees K\n", temp,
      celTemp, celTemp - 273.0);
    temp += increment;
  }
  return 0;

}