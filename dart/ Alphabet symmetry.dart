/*
  Consider the word "abode". We can see that the letter a is in position 1 and b is in position 2. In the alphabet, a and b are also in positions 1 and 2. 
  Notice also that d and e in abode occupy the positions they would occupy in the alphabet, which are positions 4 and 5.

Given an array of words, return an array of the number of letters that occupy their positions in the alphabet for each word. For example,

solve(["abode","ABc","xyzD"]) = [4, 3, 1]
See test cases for more examples.

Input will consist of alphabet characters, both uppercase and lowercase. No spaces.

Good luck!

If you like this Kata, please try:

Last digit symmetry

Alternate capitalization
*/



import "package:test/test.dart";

// version 1

List<int> solve(List<String> arr) {
  //RegExp exp = new RegExp(r'[a]');
  List<int> result = [];

  for (var item in arr) {
    
    List<String> strToArray = item.toLowerCase().split('');
    int cont =  0;

    for (var i = 0; i < strToArray.length ; i++) {
      var valueCharacterOnPosition = String.fromCharCode(i + 97);
      if(strToArray[i] == valueCharacterOnPosition) cont++;
    }
    result.add(cont);
  }


  return result;
}

void main() {
  group("Fixed tests", () {
    test('Testing for ["abode", "ABc", "xyzD"]', () {
      expect(solve(["abode", "ABc", "xyzD"]), equals([4, 3, 1]));
    });
    test('Testing for ["abide", "ABc", "xyz"]', () {
      expect(solve(["abide", "ABc", "xyz"]), equals([4, 3, 0]));
    });
    test('Testing for ["IAMDEFANDJKL", "thedefgh", "xyzDEFghijabc"]', () {
      expect(solve(["IAMDEFANDJKL", "thedefgh", "xyzDEFghijabc"]), equals([6, 5, 7]));
    });
    test('Testing for ["encode", "abc", "xyzD", "ABmD"]', () {
      expect(solve(["encode", "abc", "xyzD", "ABmD"]), equals([1, 3, 1, 3]));
    });
    test('Testing for []', () {
      expect(solve([]), equals([]));
    });
  });
}