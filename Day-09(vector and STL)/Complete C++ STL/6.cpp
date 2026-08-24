
/*
#include<iostream>
#include<queue>

using namespace std;

int main(){
   queue<int>q;

   q.push(10);
   q.push(20);
   q.push(30);

  while(!q.empty()){
    cout << q.front() << " ";
    q.pop();
  }
  cout << endl;

   return 0;
}
*/

//priority queue 

/* 
#include<iostream>
#include<queue>
using namespace std;

int main(){
   
    priority_queue<int>pq;

    pq.push(1);
    pq.push(12);
    pq.push(13);
    pq.push(4);
    pq.push(19);
    pq.push(18);

    while(!pq.empty()){
        cout << pq.top() << " ";
        pq.pop();
    }
    cout << endl;
   return 0;
}
*/

// reverse order priority queue : 

#include<iostream>
#include<queue>
using namespace std;

int main(){
   
    priority_queue<int, vector<int>, greater<int>> pq; // using functor

    pq.push(1);
    pq.push(12);
    pq.push(13);
    pq.push(4);
    pq.push(19);
    pq.push(18);

    while(!pq.empty()){
        cout << pq.top() << " ";
        pq.pop();
    }
    cout << endl;
   return 0;
}