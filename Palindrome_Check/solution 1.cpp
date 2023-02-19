// O(n^2) Time && O(n) Space

bool isPalindrome(string str) {
  string rev = "";
  int len = str.length();
  for(int i=len-1;i>=0;i--)
    {
      rev = rev + str[i];
    }
  return str == rev;
}
