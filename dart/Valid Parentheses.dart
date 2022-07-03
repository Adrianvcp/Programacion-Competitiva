/*
Write a function that takes a string of parentheses, and determines if the order of the parentheses is valid. 
The function should return true if the string is valid, and false if it's invalid.

Examples
"()"              =>  true
")(()))"          =>  false
"("               =>  false
"(())((()())())"  =>  true
Constraints
0 <= input.length <= 100

()(())
Along with opening (() and closing ()) parenthesis, input may contain any valid ASCII characters. Furthermore, the input string may be empty and/or not contain any parentheses at all. Do not treat other forms of brackets as parentheses (e.g. [], {}, <>).
 */


import "package:test/test.dart";

//version 1
bool isValid(String expression){

  String newExpression = expression.replaceAll('()','');
  if (expression == newExpression){
    if(expression == "()" || expression == '') return true;
    else return false;
  }
  else {
    if(isValid(newExpression)){
      return true;
    }else{
      return false;
    }
  }
}

bool validParentheses(String braces) {
  return isValid(braces);
}

void tester(String str, bool exp) => test("Testing for '$str'", () => expect(validParentheses(str), equals(exp)));
void main() {
  group('Basic tests', () {
    tester("()()((()", false);
    tester("()", true);
    tester("()()", true);
    tester("(())", true);
    tester(")", false);
    tester("", true);
    tester("())", false);
    tester("((((()))))", true);
    tester("()))", false);
    tester("()()()())", false);
    tester("(()()()())(())", true);
    tester("((((((((", false);
    tester("(())((()((()))))", true);
    tester("())(", false);
    tester(")()()()(", false);
    tester("(()()))(", false);
    tester(")()(", false);
    tester("())(()", false);
  });
}