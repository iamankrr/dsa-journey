//stack
/*
#include<iostream>
#include<stack>
using namespace std;

int main(){
   stack<int>s;
   
   s.push(1);
   s.push(2);
   s.push(3);
   s.push(4);
   s.push(5);

   while(!s.empty()){
        cout << s.top() << " ";
        s.pop();
   }

   cout << endl;
   cout << s.size() << endl;
   return 0;
}
*/

/**/

//stack with swap

#include<iostream>
#include<stack>

using namespace std;

int main(){
    stack<int>s;

    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);

    stack<int>s2;

    s2.swap(s);
    
    cout << " s size : " << s.size() << endl;
    cout << " s2 size : " << s2.size() << endl;
    
   return 0;
}