/*
A bookseller has lots of books classified in 26 categories labeled A, B, ... Z. 
Each book has a code c of 3, 4, 5 or more characters. 
-->The 1st character of a code is a capital letter which defines the book category.

In the bookseller's stocklist each code c is followed by a space and by a positive integer n (int n >= 0) which indicates the quantity of books of this code in stock.

For example an extract of a stocklist could be:

L = {"ABART 20", "CDXEF 50", "BKWRK 25", "BTSQZ 89", "DRTYM 60"}.
or
L = ["ABART 20", "CDXEF 50", "BKWRK 25", "BTSQZ 89", "DRTYM 60"] or ....
You will be given a stocklist (e.g. : L) and a list of categories in capital letters e.g :

M = {"A", "B", "C", "W"} 
or
M = ["A", "B", "C", "W"] or ...
and your task is to find all the books of L with codes belonging to each category of M and to sum their quantity according to each category.

For the lists L and M of example you have to return the string (in Haskell/Clojure/Racket a list of pairs):

(A : 20) - (B : 114) - (C : 50) - (W : 0)
where A, B, C, W are the categories, 20 is the sum of the unique book of category A, 114 the sum corresponding to "BKWRK" and "BTSQZ", 50 corresponding to "CDXEF" and 0 to category 'W' since there are no code beginning with W.

If L or M are empty return string is "" (Clojure and Racket should return an empty array/list instead).

Note:
In the result codes and their values are in the same order as in M.

 */


import 'dart:math' as math;
import "package:test/test.dart";

//version 1
// String stockSummary(List<String> lstOfArt, lstOf1stLetter) {
//     // your code
//     if(lstOfArt.length == 0) return '';
//     var letterWithSumatorie = Map();
//     for (var item in lstOfArt) {
//       String firstLetter = item[0];
//       if(!letterWithSumatorie.containsKey(firstLetter)){
//         int value = int.parse(item.split(' ')[1]);
//         final newKey = <String, int>{item[0]:value};
//         letterWithSumatorie.addEntries(newKey.entries);
//       }else{
//         int valueOld = letterWithSumatorie[firstLetter];
//         int valueNew = int.parse(item.split(' ')[1]);
//         letterWithSumatorie[firstLetter] = valueOld + valueNew;
//       }
//     }
//     String result = "";
//     for (var item in lstOf1stLetter) {
//       letterWithSumatorie.containsKey(item) ? null: letterWithSumatorie.addAll({item:0});

//       result += "($item : ${letterWithSumatorie[item]})";
//       if(item != lstOf1stLetter.last){ result += " - ";}
//     }


//     print(result);
//     return result;
// }

//version2 

String stockSummary(List<String> lstOfArt, lstOf1stLetter) {
    // your code
    if(lstOfArt.length == 0 || lstOf1stLetter == 0) return '';
    var letterWithSumatorie = Map();
    for (var item in lstOfArt) {
      String firstLetter = item[0];
      int valueNew = int.parse(item.split(' ')[1]);
      if(!letterWithSumatorie.containsKey(firstLetter)){
        letterWithSumatorie.addAll({item[0]:valueNew});
      }else{
        int valueOld = letterWithSumatorie[firstLetter];
        letterWithSumatorie[firstLetter] = valueOld + valueNew;
      }
    }

    return lstOf1stLetter.map((element) => 
      "(${element} : ${letterWithSumatorie[element] == null ? 0:letterWithSumatorie[element]})"
    ).join(" - ");
}


void main() {
  dotest(List<String> lstOfArt, lstOf1stLetter, String exp) {
    test("Testing for: \n$lstOfArt\n$lstOf1stLetter", () =>
      expect(stockSummary(lstOfArt, lstOf1stLetter), equals(exp)));
  }
  group("fixed tests", () {
    // m x n 
    // m + n
    var b = ["BBAR 150", "CDXE 515", "BKWR 250", "BTSQ 890", "DRTY 600"]; 
    var c = ["A", "B", "C", "D"];
    dotest(b, c, "(A : 0) - (B : 1290) - (C : 515) - (D : 600)");
    
    b = ["ABAR 200", "CDXE 500", "BKWR 250", "BTSQ 890", "DRTY 600"];
    c = ["A", "B"];
    dotest(b, c, "(A : 200) - (B : 1140)");

  });
}
