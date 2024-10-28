#include<iostream>
#include<stack>
#include<string>
using std::string;

// record: "ss" is for string (char *), 's' is for char, and the i the element of string is a char 
// as the s[i] operation on string is a addressing implicitly convert to char

bool isValid(string s) {
        std::stack<char> stack4p;

        for(int i=0;i<s.length();i++){

            if(s[i]=='(' || s[i]=='{' || s[i]=='[' ){
                stack4p.push(s[i]);
            }
            else {
                if(stack4p.empty()){
                    return false;
                }
                else if((s[i]==')' && stack4p.top()=='(') || (s[i]=='}' && stack4p.top()=='{') || (s[i]==']' && stack4p.top()=='[')){
                    stack4p.pop();
                }
                else{
                    return false;
                }

            }
        }
        if(stack4p.empty()){// here to notice that possible situation of "["
            return true;
        }
        else{
            return false;
        }

    
    }

int main(){
    std::string s="(";
    std::cout<<isValid(s)<<std::endl;
    return 0;
}