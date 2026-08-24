//extersion of digit 

/*
#include<iostream>
using namespace std;

int main(){
   
    int n = 7789;

    while(n > 0){

        int lastdigit = n % 10;
        
        cout << lastdigit << " ";

        n = n / 10; 
    }
    cout << endl;

   return 0;
}
*/

// count the number of digit 

/*
#include<iostream>
using namespace std;

int main(){
   long n = 9608335211;

   int count = 0;

   while(n > 0 ){        
        
        int lastdigit  = n % 10;
        
      count = count + 1;

       n = n / 10;  //time complexity is : O(log10n) because devide by 10 if 2 then T.C is O(log2n) 
    }
    cout << count << endl;
   return 0;
}
*/

// reverse a number

/*
#include<iostream>
using namespace std;

int main(){
   int n = 123;
   int reversenum = 0;
   while(n > 0){

        int lastdigit = n % 10;
        reversenum = (reversenum * 10) + lastdigit;
        
        n = n /10;       
   }
   cout << reversenum << " " << endl;
   
   return 0;
}
*/

// palindrom number 

/*
#include<iostream>
using namespace std;

int main(){
   
    int n = 11;
    int reverse = 0;
    int duplicate = n;   // because n becomes zero in last, so we considered duplicate; 
    
    while(n>0){
        int lastdigit = n % 10;

        n = n /10;

        reverse = (reverse * 10)+ lastdigit;
    }

    bool result (duplicate == reverse);
    
    cout << result;
   return 0;
}
*/

// armstrong number

/*
#include<iostream>
using namespace std;

int main(){
   int n = 371;
   int dup = n;
   int sum = 0;

   while(n>0){
        
        int lastdigit = n % 10;

        sum = sum + (lastdigit * lastdigit * lastdigit);

        n = n /10;
   }

   bool result = (sum == dup);
   cout << result << endl;
   return 0;
}
*/


// print all divisor

/*
#include<iostream>
using namespace std;

int main(){
   int n = 36;

   for(int i = 1 ; i <= n ; i++ ){
        if(n % i == 0){
            cout << i << " ";
        }
   }
   cout << endl;
   return 0;
}
*/

// print all divisior 

/*
#include<iostream>
using namespace std;

void printDivisor(int n){
    
    vector<int>ls;
   // t.c :  O(sqrt(n))
    for(int i = 1; i <= sqrt(n); i++){
        if(n % i == 0){
            ls.push_back(i);
           if((n/i) != i){
                ls.push_back(n/i);
            }
        }
    }
    // O(n log n) : n is the number of factor
    sort(ls.begin(),ls.end());
    for(auto it : ls)
    cout << it << " " ;
    cout << endl;
}
int main(){
   
    int n = 36;

    printDivisor(n);
   return 0;
}
*/

// prime number : a number that has exaclty 2 factors which is 1 and itself.

/*
#include<iostream>
using namespace std;

void printPrime(int n){
    int count = 0;

    for(int i = 1; i*i <= n ; i++){
        
        if(n % i == 0){
            count++;
        }
        if((n / i) != i){
            count++;
        }
    }
    if(count == 2 ){
        cout << "it is a prime number " << endl;
    }else{
        cout << "not a prime number " << endl;
    }
}
int main(){
   
    int n = 12;

    printPrime(n);
   return 0;
}
*/

//Greatest common divisior : GCD

#include<iostream>
using namespace std;

void PrintGCD(int n1,int n2){

    for(int i  = min(n1,n2); i*i >= 1 ; i-- ){
        if(n1 % i == 0 && n2 % i == 0){
            cout << i << endl ;
            break;
        }
    }
}
int main(){
 
    int n1 = 11;
    int n2 = 13;

    PrintGCD(n1,n2);
   return 0;
}