#include<iostream>
#include<cstdio>
#include<iomanip>
#include<math.h>
#include<algorithm>
#include<string.h>

using namespace std;
#define CAL "\nEnter the calculator operation you want to do: "

int main(){
    int x=1;
    char operation;
    calculation_operation();
    while(x){
        cout<<"\n";
        cout<<CAL;
        cin>>operation;

        switch(operation){
            case '+':addition();
                       break;

            case '-':subtraction();
                       break;
            
            case '*':multiplication();
                       break;
            
            case '/':division();
                       break;
            
            case '?':remainder();
                       break;
            
            case '^': power();
                       break;
            
            case '!': factorial();
                       break;
            
            case 'x': roots();
                       break;
            
            case 'r': squareroot();
                       break;

            case 'f': fibonacci();
                       break;
            case 'p': palindrome();
                    break;
            case 't': strong();
                    break;
            case 'a': armstrong();
                    break;
                    
            case 'z': prime();
                    break; 
			
			case 'o': trigo();
			        break;
					
			case 'e': expo();
			        break;				           
							               
            case 'q': exit(0);
                      break;
                
            case 'c': system("cls");
                      calculation_operation();
                      break;
 
            default : system("cls");
            cout<<"You have Entered unavailable option. Please enter from the option below...."<<endl;
            calculation_operation();
        }
    }
}

void calculation_operation(){
cout<<"Welcome to the calculator"<<endl;
cout<<"Press 'q' to quit"<<endl;
cout<<"Press 'h' to show the below options"<<endl;
cout<<"Press 'c' to clear the screen and display the available option"<<endl;
cout<<"1. Press '+' for Addition"<<endl;
cout<<"2. Press '-' for Subtraction"<<endl;
cout<<"3. Press '*' for Multiplication"<<endl;
cout<<"4. Press '/' for Divison"<<endl;
cout<<"5. Press '?' for Modulus"<<endl;
cout<<"6. Press '^' for Power"<<endl;
cout<<"7. Press '!' for Factorial"<<endl;
cout<<"8. Press 'x' for Roots"<<endl;
cout<<"9. Press 'r' for Square-Roots"<<endl;
cout<<"10. Press 'f' for Fibonacci"<<endl;
cout<<"11. Press 'p' for Palindrome number"<<endl;
cout<<"12. Press 't' for Strong verification"<<endl;
cout<<"13. Press 'a' for Armstrong number"<<endl;
cout<<"14. Press 'z' for Armstrong verification"<<endl;
cout<<"15. Press 'o' for Trignometric function"<<endl;
cout<<"16. Press 'e' for Exponential"<<endl;
cout<<"17. Press 'L' for Logarithm"<<endl;
}

void addition(){
    int n,k, count=1,total=0;
    cout<<"Enter the number of elements you want to add: ";
    cin>>n;
    while(count<=n){
        cout<<"Enter Element "<<count<<": ";
        cin>>k;
        total+=k;
        count++;
    }
    cout<<"Sum of total elements = "<<total<<endl;
}

void subtraction(){
    int a,b,c=0;
    cout<<"Enter 2 numbers: "<<endl;
    cin>>a,b;
    c=a-b;
    cout<<a<<"-"<<b<<"="<<c<<endl;
}

void multiplication(){
    int n,product=1,k=1,x;
    cout<<"Enter the number of elements you want to multiply: "<<endl;
    cin>>n;
    cout<<"Enter "<<n<<"numbers one by one: "<<endl;
    while(k<=n){
        cin>>x;
        product*=x;
        k++;
    }
    cout<<"Product of given "<<n<<" numbers are= "<<product<<endl;
}

void division(){
    int a,b;
    double d;
    cout<<"Enters 2 numbers: "<<endl;
    cin>>a>>b;
    d=(double)a/b;
    cout<<"Division of entered numbers = "<<d<<endl;
}

int remainder(){
    int a,b,mod;
    cout<<"Enter 2 numbers: "<<endl;
    cin>>a>>b;
    mod=a%b;
    cout<<"Modulus of entered numbers = "<<mod<<endl;
    return 0;
}

void power(){
    double x,y,power;
    cout<<"Enter the base number and power number respectively: "<<endl;
    cin>>x>>y;
    power=pow(x,y);
    cout<<x<<" to the power "<<y<<" is = "<<power<<endl;
}

int factorial(){
    int n,fact=1;
    cout<<"Enter a number to find factorial: "<<endl;
    cin>>n;
    if(n<0){
        cout<<"Factorial can't be found for a negative value.\nPlease enter a positive integer...."<<endl;
        return 1;
    }
    for(int i=1;i<=n;i++){
     fact*=i;   
    }
    cout<<"Factorial of "<<n<<" is = "<<fact;
    return 0;
}

int logarithm(){
    int i;
    float n,result;
    cout<<"Enter the base (2 or 10) of the log: "<<endl;
    cin>>i;
    cout<<"Enter the number to calculate it's log with base "<<i<<endl;
    cin>>n;
    if(i==2)
    result=log2(n);
    else
    result=log10(n);
    cout<<fixed<<"Common log of "<<setprecision(2)<<n<<"= "<<result;
    return 0;
}

int roots(){
   int a,b,c,d;
   float i,r1,r2;
   cout<<"Enter the co-efficients a,b & c of the quadratic equation (a(x^2)+b(x)+c=0):"<<endl;
   cin>>a>>b>>c;
   d=(b*b)-(4*a*c);
   i=sqrt(d);
   if(i>0){
       r1=((-b)+i)/(2*a);
       r2=((-b)+i)/(2*a);
       cout<<"The equation has real and unique roots: "<<r1<<" & "<<r2<<endl;
   } 
   else if(i=0){
       r1=r1=((-b)+i)/(2*a);
       cout<<"The equation has real and equal roots: "<<r1<<endl;
   }
   else{
       r1=((-b)+i)/(2*a);
       r2=((-b)+i)/(2*a);
       cout<<"The equation has imaginary roots"<<endl;
   }
   return 0;
}

int squareroot(){
    float a,b;
    cout<<"Enter the number: "<<endl;
    cin>>a;
    b=sqrt(a);
    cout<<fixed<<"Square root of "<<a<<"is = "<<setprecision(2)<<b;
    return 0;
}

void fibonacci(){
    int n,a=0,b=1,c;
    cout<<"Enter no. of terms of Fibonacci series: ";
    cin>>n;
    for(int i=1;i<=n;i++){
        cout<<a;
        c=a+b;
        a=b;
        b=c;
    }
}

void palindrome(){
    int n,r,temp,sum=0;
    cout<<"Enter a number to check whether it is Palindrome or not: ";
    cin>>n;
    temp=n;
    while(n>0){
        r=n%10;
        sum=sum*10+r;
        n/=10;
    }
    if(sum=temp)
    cout<<"The given number is Palindrome"<<endl;
    else
    cout<<"The given number is not Palindrome"<<endl;
}

void strong(){
    int sum=0,n,r,fact,temp;
    cout<<"Enter a number to check whether it is Strong number or not: ";
    cin>>n;
    temp=n;
    while(n>0){
        r=n%10;
        fact=1;
        for(int i=r;i>=1;i--){
            fact*=i;
        }
        sum=sum+fact;
        n/=10;
    }
    if(temp==sum)
    cout<<"The given number is a strong number"<<endl;
    else
    cout<<"The given number is not a strong number"<<endl;
}

void armstrong(){
    int n,r,cube,sum=0,temp;
    cout<<"Enter a number to check whether it is Armstrong number or not: ";
    cin>>n;
    temp=n;
    while(n>0){
        r=n%10;
        cube=r*r*r;
        sum+=cube;
        n/=10;
    }
    if(sum==temp)
    cout<<"The given number is an armstrong number"<<endl;
    else
    cout<<"The given number is not a armstrong number"<<endl;
}

void prime(){
    int n,count=0;
    cout<<"Enter a number to check whether it is Prime number or not: ";
    cin>>n;
    for(int i=1;i<=n;i++){
        if(n%i==0)
        count++;
    }
    if(count==2)
    cout<<"The given number is a prime number"<<endl;
    else
    cout<<"The given number is not a prime number"<<endl;
}

void trigo(){
    int p;
    float z,d;
   cout<<"1 - sine function\n2 - co-sine function\n3 - tangent function\n4 - co-secant function\n5 - secant function\n6 - co-tangent function\n"; 
   cout<<"Enter the TRIGONOMERTIC Function you want to execute: ";
   cin>>p;
   cout<<"Enter the angle in degrees: "<<endl;
   cin>>z;
   d=(float)(3.1415926*z)/180;

   switch(p){
       case 1: {
           float sin_value;
           sin_value=sin(d);
           cout<<fixed<<"The value of sin("<<d<<") is: "<<sin_value<<endl;
           break;
       }
       case 2: {
           float cos_value;
           cos_value=cos(d);
           cout<<fixed<<"The value of cos("<<d<<") is: "<<cos_value<<endl;
           break;
       }
       case 3: {
           float tan_value;
           tan_value=cos(d);
           cout<<fixed<<"The value of tan("<<d<<") is: "<<tan_value<<endl;
           break;
       }
       case 4: {
           float  cosec_value;
            cosec_value=cos(d);
           cout<<fixed<<"The value of cosec("<<d<<") is: "<< cosec_value<<endl;
           break;
       }
       case 5: {
           float sec_value;
        sec_value=cos(d);
           cout<<fixed<<"The value of sec("<<d<<") is: "<<sec_value<<endl;
           break;
       }
       case 6: {
           float cot_value;
           cot_value=cos(d);
           cout<<fixed<<"The value of cot("<<d<<") is: "<< cot_value<<endl;
           break;
       }
       default: cout<<"Invalid Option"<<endl;
   }
}

void expo(){
    double x, result;
    cout<<"Enter the power of exponential: ";
    cin>>x;
    result=exp(x);
    cout<<fixed<<"Exponential of "<<setprecision(2)<<x<<" is: "<<setprecision(2)<<result<<endl;
}