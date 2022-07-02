/*Definition
Strong number is the number that the sum of the factorial of its digits is equal to number itself.

For example, 145 is strong, since 1! + 4! + 5! = 1 + 24 + 120 = 145.

145 -> 5 -> t:n

5*4*3*2*1  -> t:m

Task
Given a number, Find if it is Strong or not and return either "STRONG!!!!" or "Not Strong !!".

Notes
Number passed is always Positive.
Return the result as String
 */
import "package:test/test.dart";

//3 ->. 3* [2] - > 2* [1] -> 1* [0]
// => 3* [2] - > 2* [1] -> 1* 1
// => 3* [2] - > 2* 1
// => 3* 2 = 6
int factorial(int n) {
  return n == 0 ? 1 : n * factorial(n - 1);
}

String strong(int n) {
  int sumTotal = n
      .toString()
      .split('')
      .map((element) => factorial(int.parse(element)))
      .fold(0, (start, end) => start + end);
  return sumTotal == n ? "STRONG!!!!" : "Not Strong !!";
}

void main() {
  group("Fixed tests", () {
    test("Testing for 1", () {
      expect(strong(1), equals("STRONG!!!!"));
    });
    test("Testing for 2", () {
      expect(strong(2), equals("STRONG!!!!"));
    });
    test("Testing for 145", () {
      expect(strong(145), equals("STRONG!!!!"));
    });
    test("Testing for 7", () {
      expect(strong(7), equals("Not Strong !!"));
    });
    test("Testing for 93", () {
      expect(strong(93), equals("Not Strong !!"));
    });
    test("Testing for 185", () {
      expect(strong(185), equals("Not Strong !!"));
    });
  });
}
