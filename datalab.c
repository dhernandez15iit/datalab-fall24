#include <stdio.h>

/*
Performs the bitwise NOR operation: ~(x | y)
Allowed operators: ~, &
Max operators: 8
Example: bitNor(0x6, 0x5) = 0xFFFFFFF8
*/
int bitNor(int x, int y) {
  return 2;
}

/*
Returns the max two’s complement integer, which is 0x7FFFFFFF (2147483647)
Allowed operators: !, ~, &, ^, |, +, <<, >>
Max operators: 4
*/
int tmax() {
  return 2;
}

/*
Returns -x
Allowed operators: !, ~, &, ^, |, +, <<, >>
Max operators: 5
Example: negate(1) = -1
*/
int negate(int x) {
  return 2;
}

/*
Swaps (changes the place of) byte n and byte m. Byte, not bit
Assume that 0 <= n <= 3, and 0 <= m <= 3
Allowed operators: !, ~, &, ^, |, +, <<, >>
Max operators: 25
Example: byteSwap(0x12345678, 1, 3) = 0x56341278
Example: byteSwap(0xDEADBEEF, 0, 2) = 0xDEEFBEAD
*/
int byteSwap(int x, int n, int m) {
  return 2;
}

/*
Returns 1 if any even-index bit is 1
Even-index meaning bit 0 (right-most bit), bit 2, bit 4, etc.
Allowed operators: !, ~, &, ^, |, +, <<, >>
Max operators: 12
Example: anyEvenBit(0xA) = 0
Example: anyEvenBit(0xE) = 1
*/
int anyEvenBit(int x) {
  return 2;
}

/*
Rotates integer x to the left by n bits
The bits on the left side move to the right side
Assume that 0 <= n <= 31
Allowed operators: !, ~, &, ^, |, +, <<, >>
Max operators: 25
Example: rotateLeft(0x87654321, 4) = 0x76543218
*/
int rotateLeft(int x, int n) {
  return 2;
}

/*
Replaces byte n in integer x with c
Assume that 0 <= n <= 3 and 0 <= c <= 0xFF (255)
Allowed operators: !, ~, &, ^, |, +, <<, >>
Max operators: 10
Example: replaceByte(0x12345678, 1, 0xAB) = 0x1234AB78
*/
int replaceByte(int x, int n, int c) {
  return 2;
}

/*
Returns 1 if x > y, otherwise returns 0
Allowed operators: !, ~, &, ^, |, +, <<, >>
Max operators: 24
Example: isGreater(4, 5) = 0
Example: isGreater(5, 4) = 1
*/
int isGreater(int x, int y) {
  return 2;
}

/*
Returns how many bits are 1 in x
Allowed operators: !, ~, &, ^, |, +, <<, >>
Max operators: 40
Example: bitCount(5) = 2
Example: bitCount(7) = 3
*/
int bitCount(int x) {
  return 0;
}

/*
Returns 1 if x has an odd number of zeroes, or 0 if x has an even number of zeroes
Allowed operators: !, ~, &, ^, |, +, <<, >>
Max operators: 20
Example: bitParity(5) = 0
Example: bitParity(7) = 1
*/
int bitParity(int x) {
  return 2;
}

int main() {
  int output;
  int correct;
  int total = 0;
  
  printf("Checking bitNor output\n");
  printf("bitNor(0x6, 0x5) = 0xFFFFFFF8\n");
  output = bitNor(0x6, 0x5);
  correct = output == 0xFFFFFFF8;
  total += correct;
  printf("Output: %x\n", output);
  printf(correct ? "Correct\n" : "Incorrect\n");
  
  printf("\nChecking tmax output\n");
  printf("tmax() = 0x7FFFFFFF\n");
  output = tmax();
  correct = output == 0x7FFFFFFF;
  total += correct;
  printf("Output: %x\n", output);
  printf(correct ? "Correct\n" : "Incorrect\n");
  
  printf("\nChecking negate output\n");
  printf("negate(1) = -1\n");
  output = negate(1);
  correct = output == -1;
  total += correct;
  printf("Output: %d\n", output);
  printf(correct ? "Correct\n" : "Incorrect\n");
  
  printf("\nChecking byteSwap output\n");
  printf("byteSwap(0x12345678, 1, 3) = 0x56341278\n");
  output = byteSwap(0x12345678, 1, 3);
  correct = output == 0x56341278;
  total += correct;
  printf("Output: %x\n", output);
  printf(correct ? "Correct\n" : "Incorrect\n");
  printf("byteSwap(0xDEADBEEF, 0, 2) = 0xDEEFBEAD\n");
  output = byteSwap(0xDEADBEEF, 0, 2);
  correct = output == 0xDEEFBEAD;
  total += correct;
  printf("Output: %x\n", output);
  printf(correct ? "Correct\n" : "Incorrect\n");
  
  printf("\nChecking anyEvenBit output\n");
  printf("anyEvenBit(0xA) = 0\n");
  output = anyEvenBit(0xA);
  correct = output == 0;
  total += correct;
  printf("Output: %d\n", output);
  printf(correct ? "Correct\n" : "Incorrect\n");
  printf("anyEvenBit(0xE) = 1\n");
  output = anyEvenBit(0xE);
  correct = output == 1;
  total += correct;
  printf("Output: %d\n", output);
  printf(correct ? "Correct\n" : "Incorrect\n");
  
  printf("\nChecking rotateLeft output\n");
  printf("rotateLeft(0x87654321, 4) = 0x76543218\n");
  output = rotateLeft(0x87654321, 4);
  correct = output == 0x76543218;
  total += correct;
  printf("Output: %x\n", output);
  printf(correct ? "Correct\n" : "Incorrect\n");
  
  printf("\nChecking replaceByte output\n");
  printf("replaceByte(0x12345678, 1, 0xAB) = 0x1234AB78\n");
  output = replaceByte(0x12345678, 1, 0xAB);
  correct = output == 0x1234AB78;
  total += correct;
  printf("Output: %x\n", output);
  printf(correct ? "Correct\n" : "Incorrect\n");
  
  printf("\nChecking isGreater output\n");
  printf("isGreater(4, 5) = 0\n");
  output = isGreater(4, 5);
  correct = output == 0;
  total += correct;
  printf("Output: %d\n", output);
  printf(correct ? "Correct\n" : "Incorrect\n");
  printf("isGreater(5, 4) = 1\n");
  output = isGreater(5, 4);
  correct = output == 1;
  total += correct;
  printf("Output: %d\n", output);
  printf(correct ? "Correct\n" : "Incorrect\n");
  
  printf("\nChecking bitCount output\n");
  printf("bitCount(5) = 2\n");
  output = bitCount(5);
  correct = output == 2;
  total += correct;
  printf("Output: %d\n", output);
  printf(correct ? "Correct\n" : "Incorrect\n");
  printf("bitCount(7) = 3\n");
  output = bitCount(7);
  correct = output == 3;
  total += correct;
  printf("Output: %d\n", output);
  printf(correct ? "Correct\n" : "Incorrect\n");
  
  printf("\nChecking bitParity output\n");
  printf("bitParity(5) = 0\n");
  output = bitParity(5);
  correct = output == 0;
  total += correct;
  printf("Output: %d\n", output);
  printf(correct ? "Correct\n" : "Incorrect\n");
  printf("bitParity(7) = 1\n");
  output = bitParity(7);
  correct = output == 1;
  total += correct;
  printf("Output: %d\n", output);
  printf(correct ? "Correct\n" : "Incorrect\n");
  
  printf("\nTotal points: %d\n", total);
}
