/*
If we list all the natural numbers below 10 that are multiples of 3 or 5, we get 3, 5, 6 and 9. The sum of these multiples is 23.

Finish the solution so that it returns the sum of all the multiples of 3 or 5 below the number passed in.
Additionally, 
--> if the number is negative, return 0 (for languages that do have them).

--> Note: If the number is a multiple of both 3 and 5, only count it once.

Courtesy of projecteuler.net (Problem 1)

*/


import "package:test/test.dart";

//version 1
// int solution(int n) {
//   // your code here
//   int sumTotal = 0;
//   for (var i = 1; i < n ;i++) {
//     if(i % 3 == 0 && i % 5 == 0){
//       sumTotal += i;
//     }
//     else if(i % 3 == 0 || i % 5 == 0){
//       sumTotal += i;
//     }
//   }
//   return sumTotal;
// }

//version2
int solution(int n) {
  // your code here
  int sumTotal = 0;
  for (var i = 1; i < n ;i++) {
    sumTotal += i % 3 == 0 || i % 5 == 0 ? i : 0;
  }
  return sumTotal;
}

void tester(int n, int exp) => test("Testing for $n", () => expect(solution(n), equals(exp)));
void main() {
  group("Basic tests", () {
    tester(10, 23); 
    tester(20, 78); // 3,6,5,9,10,12,15(3-5),18
    tester(200, 9168);
  });
}