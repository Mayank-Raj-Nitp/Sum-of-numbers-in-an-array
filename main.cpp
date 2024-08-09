
#include <iostream>
using namespace std;

void sum_function(int size,int numbers[]){
    int sum = 0;
    
    for(int i=0; i<size; i++){
        sum+= numbers[i];
    }
    cout<<"The sum of given numbers is "<<sum;
}
    

int main() {

    int size;
    cout<<"What is the size of array? :";
    cin>>size;
    
    int numbers[size];
    cout<<"Enter the numbers: ";
    
    for(int i=0; i<size;i++){
        cin>>numbers[i];
    }

    sum_function(size,numbers);
    return 0;
}
