// O(n) Time && O(1) Space

bool isPalindrome(string str) {
  int len = str.length();
  int first = 0;
  int last = len-1;
  while(first<last)
    {
      if(str[first]!=str[last])
      {
        return false;
      }
      first++;
      last--;     
    }
  return true;
}
