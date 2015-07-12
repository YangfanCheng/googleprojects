/*This is a number analogy to a famous card trick. Ask the user to enter a three-digit number. Think of the number as ABC (where A, B, C are the three digits of the number). Now, find the remainders of the numbers formed by ABC, BCA, and CAB when divided by 11. We will call these remainders X, Y, Z. Add them up as X+Y, Y+Z, Z+X. If any of the sums are odd, increase or decrease it by 11 (whichever operation results in a positive number less than 20; note if the sum is 9, just report this and stop the process). Finally, divide each of the sums in half. The resulting digits are A, B, C. Write a program that implements this algorithm.*/

//simple implemenation of google developer for c++ project

#include<iostream>


using namespace std;

int main(){
    int n, A,B,C,temp, X,Y,Z, sum[3];
    cout<<"please enter an 3 digit number:\t\n";
    cin>>n;
    while(n<100||n>999){
        printf("please enter a 3 digit number:");
        cin>>n;
    }
    A=n/100;
    B=(n/10)%10;
    C=(n%100)%10;
    //ABC
    X=n%11;
    //BCA
    Y=((B*100)+(C*10)+A)%11;
    //CAB
    Z=((C*100)+(A*10)+B)%11;
    
    sum[0]=X+Y;
    sum[1]=Y+Z;
    sum[2]=X+Z;
    
    for(int i=0;i<3;i++){

        if(sum[i]==9){
            cout<<"sum is 9, end"<<endl;
            exit(1); 
        }
        if(sum[i]%2!=0){
            sum[i]+=11;    
        }

    }
    A=sum[0]/2;
    B=sum[1]/2;
    C=sum[2]/2;
    
    cout<<"your digits are:\n";
    cout<<A<<" "<<B<<" "<<C<<endl;
    
    system("pause");
    return 0;    
}
