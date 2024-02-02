#include <iostream>
using namespace std; 

#define MAX_SIZE 100
class stack {
    int* arr; 
    int top;

    public: 
    stack(){
        arr=new int[MAX_SIZE];
        top=-1; 
    } 

    void push(int x){
        if(top==MAX_SIZE-1){
            cout<<"array is full : "<<endl; 
            return; 
        }
        top++; 
        arr[top] = x; 
    }
};

int main(){

    stack obj; 
    
    // while(1) {
    //     int choice; 
    //     printf("enter your choice !/n");
    //     scanf("%d", &choice); 
    //     switch (choice)
    //     {
    //     case 1:
    //         /* code */
    //         break;
        
    //     default:
    //         break;
    //     }

    // } 
    return 0; 
}