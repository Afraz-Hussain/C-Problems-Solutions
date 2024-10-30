class Solution {
public:

bool checkalpha(char ch){
  if((ch>='a'&&ch<='z')||(ch>='A'&&ch<='Z')||(ch>='0'&&ch<='9'))
  return true;
  else{
    return false;
  }
}
// Convert character to lowercase
char Tolower(char ch){
  if(ch>='a'&&ch<='z'){
  return ch;
  }
  else if (ch >= 'A' && ch <= 'Z') {
        return ch + ('a' - 'A');  // Convert uppercase to lowercase
    }
   return ch;
}
// check if a sting is palindrome or...
bool chekpalindrome(string str){
int st=0;
  int end= str.length()-1;
  while(st<=end){
    if(str[st]!=str[end]){
      return false;
    }
    else{
      st++;
      end--;
    }
  }
  return true;


}
    bool isPalindrome(string s) {
        string temp = \\;

for(int j=0;j<s.length();j++){
 if(checkalpha(s[j])){
  temp.push_back(s[j]);
 }

}
//lowercase()

for(int j=0;j<temp.length();j++){
  temp[j]=Tolower(temp[j]);
}
    return chekpalindrome(temp);
    }
};