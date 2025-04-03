//#include<iostream>
//using namespace std;
//#include<stack>
//bool valid(string s)
//
//{
//    stack<char>st;
//    bool r=true;
//    for(int i=0;i<s.size();i++){
//        if(s[i]=='['|| s[i]=='{'|| s[i]=='('){
//            st.push(S[i]);
//
//        }
//        else if(s[i]==']'){
//            if(! st.empty()&& st.top()=='['){
//                st.pop();
//            }
//            else{
//                r=false
//                break;
//
//
//            }
//        }
//        else if(s[i]=='}'){
//            if(!st.empty()&& st.top()=='{'){
//                st.pop();
//            }
//            else{
//                r=false;
//                break;
//
//            }
//        }
//        else if(s[i]==')'){
//            if(!st.empty()&& st.top()=='(')
//            {
//                st.pop();
//
//            }
//            else{
//                r=false;
//                break;
//
//            }
//        }
//
//    }
//    if(!st.empty()){
//        return
//    }
//}
#include<iostream>
using namespace std;
#include<stack>
bool valid(string s)

{
    stack<char>st;
    bool r=true;
    for(int i=0;i<s.size();i++){
        if(s[i]=='['|| s[i]=='{'|| s[i]=='('){
            st.push(S[i]);

        }
        else if(s[i]==']'){
            if(! st.empty()&& st.top()=='['){
                st.pop();
            }
            else{
                r=false
                break;


            }
        }
        else if(s[i]=='}'){
            if(!st.empty()&& st.top()=='{'){
                st.pop();
            }
            else{
                r=false;
                break;

            }
        }
        else if(s[i]==')'){
            if(!st.empty()&& st.top()=='(')
            {
                st.pop();

            }
            else{
                r=false;
                break;

            }
        }

    }
    if(!st.empty()){
        return
    }
}
