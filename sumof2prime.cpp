//Write a program to express a number as a sum of two prime numbers
#include <stdio.h>
int checkPrime(int n);
int main() {
  int n, i, flag = 0;
  printf("Enter a positive integer: ");
  scanf("%d", &n);

  for (i = 2; i <= n / 2; ++i) {
    // condition for i to be a prime number
    if (checkPrime(i) == 1) {
      // condition for n-i to be a prime number
      if (checkPrime(n - i) == 1) {
        printf("%d = %d + %d\n", n, i, n - i);
        flag = 1;
      }
    }
  }

  if (flag == 0)
    printf("%d cannot be expressed as the sum of two prime numbers.", n);

  return 0;
}

// function to check prime number
int checkPrime(int n) {
  int i, isPrime = 1;

  // 0 and 1 are not prime numbers
  if (n == 0 || n == 1) {
    isPrime = 0;
  }
  else {
    for(i = 2; i <= n/2; ++i) {
      if(n % i == 0) {
        isPrime = 0;
        break;
      }
    }
  }

  return isPrime;
}
