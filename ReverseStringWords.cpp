#include <bits/stdc++.h>

void reverseWords(std::string s){
     
  std::vector<std::string> tmp;
  std::string str = "";
  
  for(int i = 0; i < s.length(); i++){

    if(s[i] == ' '){
      tmp.push_back(str);
      str = "";
    }
    
    else{
      str += s[i];
    }
  
  }

  tmp.push_back(str);
 
  int i;
  for(i = tmp.size() - 1; i > 0; i--){
    std::cout << tmp[i] << " ";
  }
  std::cout << tmp[0] << "\n";

}
 
int main(){

  std::string s;
  
  std::cout << "Enter a string: ";
  getline(std::cin, s);
  std::cin.clear();

  reverseWords(s);
  
  return 0;

}