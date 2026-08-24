// recursion 
// print n to 1 
/*
#include<iostream>
using namespace std;

void printNum(int n){
    if(n == 1){
        cout << "1 \n";
        return;
    }
    cout << n << " ";
    printNum(n-1);
}
int main(){
   printNum(100);
   return 0;
}
*/

//print name n times using recursion
/*
#include<iostream>
using namespace std;

void printName(int i , int n){
    if(i > n ){
        return;
    }
    cout << "Aman" << " ";
    printName(i+1,n);
}
int main(){
   
    printName(1,4);
   return 0;
}
*/

//print linearly 1 to n
/*
#include<iostream>
using namespace std;

void printN(int m,int n){
    if(m > n){
        return;
    }
    cout << m << " ";
    printN(m+1,n);
}
int main(){
   
    printN(1,20);
   return 0;
}
*/

// 2nd methods
/*
#include <iostream>
using namespace std;

    void printNumbers(int n) {
        if (n == 0){
            return;
        }
        printNumbers(n - 1);
    cout << n << " ";
};

int main() {

    printNumbers(7);

    return 0;
}
*/

// print n to 1;
/*
#include<iostream>
using namespace std;

void printNum(int n){
    if(n == 0){
        return;
    }
    cout << n << " ";
    printNum(n-1);
}
int main(){
   printNum(12);
   return 0;
}
*/

// Sum of First N Numbers
/*
#include<iostream>
using namespace std;

void printSum(int i , int sum){
    if(i < 1){

        cout << sum << endl;
        return;
    }
    
    printSum(i-1,sum+i);
}
int main(){
   
    printSum(3,0);

   return 0;
}
*/

// 2nd method : Sum of first N 

/*
#include<iostream>
using namespace std;

int sumofN(int n){
    if(n == 0){
        return 0;
    }

    return n+ sumofN(n-1);

}
int main(){
   
    cout << sumofN(4) << endl;
   return 0;
}
*/

// factorial of N

/*
#include<iostream>
using namespace std;

int factofN(int n){
    if(n == 1 ){
        return 1;
    }
    return n * factofN(n-1);
}
int main(){
   int n = 4;
   cout << factofN(n);
   return 0;
}
*/


// reverse an array

/*
#include<iostream>
#include<algorithm>

using namespace std;

void reverseArray(int arr[], int n) {
    int start = 0, end = n-1;

    while (start < end) {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
}

int main() {

    int n;
    cin >> n;
    int arr[n]; 

    // input array elements
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    reverseArray(arr,n);

    return 0;
}
*/

//check if a string is palindrome or not
/*
#include<iostream>
#include<algorithm>

using namespace std;

bool checkPalindrome(int i , string &s){
    if(i >= s.size()/2){
        return true;
    }
    if(s[i] != s[s.size()-i-1]){
        return false;
    }
    return checkPalindrome(i+1,s);
}
int main(){
   
    string s =  "rotator";
    
    cout << checkPalindrome(0,s);
   return 0;
}
*/

//2nd method

// check palindrome or not
/*
#include<iostream>
using namespace std;

bool isPalindrome(string s){
    int start = 0, end = s.size()- 1;
    while(start <= end){
        if(s[start] != s[end]){
            return false;
        }
        start++;
        end--;
    }
    return true;
}
int main(){
   string s;
   
   cin >> s;
   if(isPalindrome(s)){
        cout << "string is Palindrome \n";
    }else{
        cout << "string is not Palindrome \n";
    }
   return 0;
}
*/

//fibonacci series | Multiple Recursion Calls

#include<iostream>
using namespace std;

int fibonacci(int n){
    if(n <= 1 ){
        return n;
    }
    int last = fibonacci(n - 1);
    int second_last = fibonacci(n-2);

    return last + second_last;
}
int main(){
   
    cout << fibonacci(4) << endl;
   return 0;
}