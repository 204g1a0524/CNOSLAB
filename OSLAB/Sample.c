/* Name Of the Candidate: K.Bramha teja
   Roll No: 204G1A0524
   Title of the Experiment: CPU Scheduling Using FCFS Algorithm
   Date of Creation: 30-08-2022
   Date of Execution: 30-08-2022
*/
    #include <stdio.h>  
    void swap(int , int); //prototype of the function   
    int main()  
    {  
        int a = 10;  
        int b = 20;   
        printf("Before swapping the values in main a = %d, b = %d\n",a,b); // printing the value of a and b in main  
        swap(a,b);  
        printf("After swapping values in main a = %d, b = %d\n",a,b); // The value of actual parameters do not change by changing the formal parameters in call by value, a = 10, b = 20  
    }  
    void swap (int a, int b)  
    {  
        int temp;   
        temp = a;  
        a=b;  
        b=temp;  
        printf("After swapping values in function a = %d, b = %d\n",a,b); // Formal parameters, a = 20, b = 10   
    }  
