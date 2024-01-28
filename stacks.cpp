#include <iostream>
using namespace std; 

#define n 100
class stack {
    int* arr; 
    int top;

    public: 
    stack(){
        arr=new int[n];
        top=-1; 
    } 

    void push(int x){
        if(top==n-1){
            cout<<"array is full : "<<endl; 
            return; 
        }
        top++; 
        arr[top] = x; 
    }
};

int main(){

    stack st; 
    st.push(1); 
    st.push(2); 
    st.push(3); 
    st.push(4); 
    st.push(5); 
    return 0; 
}