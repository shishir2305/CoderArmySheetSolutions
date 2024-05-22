// Integer to roman

// algorithm 1 -> the intuition says if there is 3542, then we can simply write
// it as 3000 + 500 + 40 + 2 and using this we can store different integers
// along with their roman equivalents and use it.
// t.c -> O(N)
// s.c -> O(1)

// algorithm 2 -> we can preprocess and store all the integers of ones, tens,
// hundreds and thousands place at ones and use the division and modulo operator
// to evaluate the given number and based on the result pick the roman
// equivalent.
// t.c -> O(1)
// s.c -> O(1)

#include <bits/stdc++.h>
using namespace std;

string intToRoman(int num) {
  string ans = "";
  vector<int> divisors = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
  vector<string> romans = {"M",  "CM", "D",  "CD", "C",  "XC", "L",
                           "XL", "X",  "IX", "V",  "IV", "I"};

  int i = 0;
  while (num) {
    if (num >= divisors[i]) {
      ans += romans[i];
      num -= divisors[i];
    } else {
      i++;
    }
  }
  return ans;
}

// optimized
string intToRoman(int num) {
  string ones[] = {"", "I", "II", "III", "IV", "V", "VI", "VII", "VIII", "IX"};
  string tens[] = {"", "X", "XX", "XXX", "XL", "L", "LX", "LXX", "LXXX", "XC"};
  string hrns[] = {"", "C", "CC", "CCC", "CD", "D", "DC", "DCC", "DCCC", "CM"};
  string ths[] = {"", "M", "MM", "MMM"};

  return ths[num / 1000] + hrns[(num % 1000) / 100] + tens[(num % 100) / 10] +
         ones[num % 10];
}

int main() { return 0; }