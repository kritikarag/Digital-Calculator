#include<iostream>
#include<cstdio>
#include<iomanip>
#include<math.h>
#include<algorithm>
#include<string>
#include<bits/stdc++.h>

using namespace std;
#define CAL "\nEnter the calculator operation you want to do: "

void addition();
void subtraction();
void multiplication();
void division();
int remainder();
void modulus();
void power();
int  factorial();
int  logarithm();
int  roots();
int  squareroot();
void calculation_operation();
void fibonacci();
void palindrome();
void strong();
void armstrong();
void prime();
void trigo();
void expo();
void ExpressionConversion();
void infixcon();
void prefixcon();
void postfixcon();
void infixtopostfix();
void infixtoprefix();
void prefixtoinfix();
void prefixtopostfix();
void postfixtoinfix();
void postfixtoprefix();
void expevaluation();
void infixeval();
void prefixeval();
void postfixeval();
void NumConversion();
void bintoDecimal();
void dectoBinary();
void dectoOctal();
void octtoDecimal();
void hextoDecimal();
void dectoHexal();

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

            case 'w': ExpressionConversion();
                    break;

            case 'v': expevaluation();
                    break;

            case 'b': NumConversion();
                     break;				           
							               
            case 'q': exit(0);
                    break;

            case 'l': logarithm();
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
cout<<"17. Press 'l' for Logarithm"<<endl;
cout<<"18. Press 'w' for Expression Conversion"<<endl;
cout<<"19. Press 'v' for Expression Evaluation"<<endl;
cout<<"20. Press 'b' for Number Conversion"<<endl;
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

void decToBinary()
{ 
    cout<<"Enter the number:"<<endl;
    int num;
    cin>>num;
    int N=num;
    int B_Number = 0;
    int cnt = 0;
    while (N != 0) {
        int rem = N % 2;
        int c = pow(10, cnt);
        B_Number += rem * c;
        N /= 2; 
        cnt++;
    } 
    cout<<"Binary Representatation of "<<num<<" is : "<<B_Number<<endl;
}

void bintoDecimal(){
    cout<<"Enter the Binary Number: "<<endl;

    int num;
    cin>>num;
    int dec_value = 0; 
    int base = 1;
 
    int temp = num;
    while (temp) {
        int last_digit = temp % 10;
        temp = temp / 10;
 
        dec_value += last_digit * base;
 
        base = base * 2;
    }
 
    cout<<"Decimal Representation of "<<num<<" is :"<< dec_value<<endl;
}

void dectoOctal(){
    cout<<"Enter Decimal Number:"<<endl;
    int deciNum;
    cin>>deciNum;
    int octalNum = 0, countval = 1;
    int dNo = deciNum;
 
    while (deciNum != 0) { 
        int remainder = deciNum % 8; 
        octalNum += remainder * countval; 
        countval = countval * 10;
        deciNum /= 8;
    }
    cout <<"Octal Representation of "<<dNo<<" is: "<< octalNum << endl;
}

void octtoDecimal(){
    cout<<"Enter Octal Number:"<<endl;
    int num;
    cin>>num; 
    int dec_value = 0;
  
    int base = 1;
 
    int temp = num;
    while (temp) {
  
        int last_digit = temp % 10;
        temp = temp / 10;
  
        dec_value += last_digit * base;
 
        base = base * 8;
    }
 
    cout<<"Decimal Representation of "<<num<<" is: "<< dec_value<<endl;
}

void dectoHexal(){
    cout<<"Enter Decimal Number: "<<endl;
    int n;
    cin>>n;
    int num = n;

    char hexaDeciNum[100];
  
    int i = 0;
    while (n != 0) {
        int temp = 0; 
        temp = n % 16; 
        if (temp < 10) {
            hexaDeciNum[i] = temp + 48;
            i++;
        }
        else {
            hexaDeciNum[i] = temp + 55;
            i++;
        }
 
        n = n / 16;
    }
 
    cout<<"Hexadecimal Representation of "<<num<<" is: ";
    for (int j = i - 1; j >= 0; j--)
        cout << hexaDeciNum[j];
}

void hextoDecimal(){

    cout<<"Enter Hexa Decimal Value: "<<endl;
    string hexal;
    cin>>hexal;
    string hexVal = hexal;
    int len = hexVal.size();
  
    int base = 1;
 
    int dec_val = 0;
  
    for (int i = len - 1; i >= 0; i--) {
         
        if (hexVal[i] >= '0' && hexVal[i] <= '9') {
            dec_val += (int(hexVal[i]) - 48) * base;
  
            base = base * 16;
        } 

        else if (hexVal[i] >= 'A' && hexVal[i] <= 'F') {
            dec_val += (int(hexVal[i]) - 55) * base;
  
            base = base * 16;
        }
    }
    cout<<"Decimal representation of "<<hexal<<" is: "<<dec_val<<endl;;
}

void NumConversion(){
    cout<<"Choose the type of conversion you want to do:\n1. Decimal to Binary\n2. Binary to Decimal\n3. Decimal to Octal\n4. Octal to Decimal"<<endl;
    int num;
    cin>>num;
    switch(num){
        case 1: decToBinary();
        break;
        case 2: bintoDecimal();
        break;
        case 3: dectoOctal();
        break;
        case 4: octtoDecimal();
        break;
        case 5: dectoHexal();
        break;
        case 6: hextoDecimal();
        break;
    }
}

bool isopr(char x)
{
    switch (x) {
    case '+':
    case '-':
    case '/':
    case '*':
    case '^':
        return true;
    }
    return false;
}

int getPriority(char C)
{
    if (C == '-' || C == '+')
        return 1;
    else if (C == '*' || C == '/')
        return 2;
    else if (C == '^')
        return 3;
    return 0;
}

void ExpressionConversion(){
    string exp;
        cout<<"Choose the type of Expression:\n1.Infix\n2.Prefix\n3.Postfix"<<endl;
        int a;
        cin>>a;
        switch(a){
            case 1: infixcon();
            break;
            case 2: prefixcon();
            break;
            case 3: postfixcon();
            break;
            default: cout<<"Please choose a valid option"<<endl;
            ExpressionConversion();
        }
    
}

void infixcon(){
    cout<<"Please Enter the type of Conversion:\n1.Prefix\n2.Postfix"<<endl;
    int b;
    cin>>b;
    switch(b){
        case 1: infixtoprefix();
                break;
        case 2: infixtopostfix();
                break;
        default : cout<<"Please Enter a Valid Option"<<endl;
        infixcon();
    }
}

void infixtoprefix(){
    cout<<"Enter Infix Expression"<<endl;
    string infix;
    getline(cin>>ws,infix);
    stack<char> opr;
    stack<string> operand;
    int size = infix.size();
    for(int i=0;i<size;i++){
        if(infix[i]=='('){
            opr.push(infix[i]);
        }
        else if(infix[i]==')'){
            while(!opr.empty() && opr.top()!='('){
                string op1=operand.top();
                operand.pop();
                string op2=operand.top();
                operand.pop();

                char op = opr.top();
                opr.pop();

                string temp= op+op2+op1;
                operand.push(temp);
            }
            opr.pop();
        }
        else if(!isopr(infix[i])){
            operand.push(string(1,infix[i]));
        }

        else{
            while(!opr.empty() && getPriority(infix[i])<= getPriority(opr.top())){
                string op1 = operand.top();
                operand.pop();
                string op2 = operand.top();
                operand.pop();

                char op = opr.top();
                opr.pop();

                string temp = op+op2+op1;
                operand.push(temp);
            }
            opr.push(infix[i]);
        }
    }
   while(!opr.empty()){
        string op1 = operand.top();
        operand.pop();
        string op2 = operand.top();
        operand.pop();

        char op = opr.top();
        opr.pop();

        string temp = op+op2+op1;
        operand.push(temp);
    }
    cout<<"Required Prefix Expression: "<<operand.top()<<endl;
}

void infixtopostfix(){
    cout<<"Enter Infix Expression:"<<endl;
    string infix;
    getline(cin>>ws,infix);
    stack<char> opr;
    //stack<string> operand;
    string postfix;
    int size = infix.length();
    for(int i=0;i<size;i++){
        if(infix[i]=='('){
            opr.push(infix[i]);
        }
        else if(infix[i]==')'){
            while(!opr.empty() && opr.top()!='('){
                
                postfix+= opr.top();
                opr.pop();
            }
            opr.pop();
        }
        else if(!isopr(infix[i])){
            postfix+=infix[i];
        }

        else{
            while(!opr.empty() && getPriority(infix[i])<=getPriority(opr.top())){
                //if(infix[i]=='^' && opr.top()=='^')break;
                
                    postfix += opr.top();
                    opr.pop();
                
            }
            opr.push(infix[i]);
        }
    }
    while(!opr.empty()){
        postfix+=opr.top();
        opr.pop();
    }
    cout<<"Required Postfix Expression: "<<postfix<<endl;
}

void prefixcon(){
    cout<<"Please Enter the type of Conversion:\n1.Infix\n2.Postfix"<<endl;
    int b;
    cin>>b;
    switch(b){
        case 1: prefixtoinfix();
                break;
        case 2: prefixtopostfix();
                break;
        default : cout<<"Please Enter a Valid Option"<<endl;
        prefixcon();
    }
}
void prefixtoinfix(){
    cout<<"Enter the Prefix Expression: "<<endl;
    string prefix;
    cin>>prefix;
    stack<string>st;
    int size = prefix.size();
    for(int i=size-1;i>=0;i--){
        if(isopr(prefix[i])){
            string op1 =st.top();
            st.pop();
            string op2 =st.top();
            st.pop();

            string temp = "("+op1+prefix[i]+op2+")";
            st.push(temp);
        }
        else {
            st.push(string(1,prefix[i]));
        }
    }
    cout<<"Required Infix Operation is:"<<st.top()<<endl;

}
void prefixtopostfix(){
    cout<<"Enter the Prefix Expression: "<<endl;
    string prefix;
    cin>>prefix;
    stack<string>st;
    int size = prefix.size();
    for(int i=size-1;i>=0;i--){
        if(isopr(prefix[i])){
            string op1 = st.top();
            st.pop();
            string op2 = st.top();
            st.pop();

            string temp = op1+op2+prefix[i];

            st.push(temp);
        }
        else{
            st.push(string(1,prefix[i]));
        }
    }
    cout<<"Required Postfix Expression: "<<st.top()<<endl;
}

void postfixcon(){
    cout<<"Please Enter the type of Conversion:\n1.Prefix\n2.Infix"<<endl;
    int b;
    cin>>b;
    switch(b){
        case 1: postfixtoprefix();
                break;
        case 2: postfixtoinfix();
                break;
        default : cout<<"Please Enter a Valid Option"<<endl;
        infixcon();
    }
}
void postfixtoinfix(){
    cout<<"Enter the Postfix Expression: "<<endl;
    string postfix;
    cin>>postfix;
    stack<string>st;
    int size = postfix.size();

    for(int i=0;i<size;i++){
        if(!isopr(postfix[i])){
            st.push(string(1,postfix[i]));
        }
        else{
            string op1 = st.top();
            st.pop();
            string op2= st.top();
            st.pop();
            st.push("("+op2+postfix[i]+op1+")");
        }
    }
    cout<<"Required Infix Expression: "<<st.top()<<endl;
}
void postfixtoprefix(){
    cout<<"Enter Postfix Expression: "<<endl;
    string postfix;
    cin>>postfix;
    int size=postfix.size();
    stack<string>st;

    for(int i=0;i<size;i++){
        if(!isopr(postfix[i])){
            st.push(string(1,postfix[i]));
        }
        else{
            string op1=st.top();
            st.pop();
            string op2=st.top();
            st.pop();
            
            string temp = postfix[i]+op2+op1;
            st.push(temp);
        }
    }
    string ans ="";
    while(!st.empty()){
        ans+=st.top();
        st.pop();
    }
    cout<<"Required Prefix Expression: "<<ans<<endl;
}

void expevaluation(){
    cout<<"Choose the type of Expression:\n1.Infix\n2.Prefix\n3.Postfix"<<endl;
    int c;
    cin>>c;
    switch(c){
        case 1: infixeval();
        break;
        case 2: prefixeval();
        break;
        case 3: postfixeval();
        break; 
        default: cout<<"Please Enter a Valid Option"<<endl;
        expevaluation();
    }

}
void infixeval(){
    cout<<"Enter Infix Expression:"<<endl;
    string infix;
    getline(cin>>ws,infix);
    stack<int>st;
    stack<char>ops;
    int size = infix.size();
    for(int i=0;i<size;i++){
        if(infix[i]==' ')continue;

        else if(infix[i]=='('){
            ops.push(infix[i]);
        }

        else if(isdigit(infix[i])){
            int val=0;
            while(i<size && isdigit(infix[i])){
                val = (val*10)+(infix[i]-'0');
                i++;
            }
            st.push(val);
            i--;
        }
        else if(infix[i]==')'){
            while(!ops.empty() && ops.top()!='('){
                int val1=st.top();
                st.pop();
                int val2 = st.top();
                st.pop();

                char op = ops.top();
                ops.pop();
                switch(op){
                    case '+': st.push(val2 + val1); 
                    break; 
                    case '-': st.push(val2 - val1); 
                    break; 
                    case '*': st.push(val2 * val1); 
                    break; 
                    case '/': st.push(val2/val1); 
                    break; 
                }
            }
            if(!ops.empty()){
                ops.pop();
            }
        }
        else{
            while(!ops.empty() && getPriority(infix[i])<=getPriority(ops.top())){
                int val1=st.top();
                st.pop();
                int val2 = st.top();
                st.pop();

                char op = ops.top();
                ops.pop();

                switch(op){
                    case '+': st.push(val2 + val1); 
                    break; 
                    case '-': st.push(val2 - val1); 
                    break; 
                    case '*': st.push(val2 * val1); 
                    break; 
                    case '/': st.push(val2/val1); 
                    break; 
                }
            }
            ops.push(infix[i]);
        }
    }
    while(!ops.empty()){
            int val1=st.top();
            st.pop();
            int val2 = st.top();
            st.pop();

            char op = ops.top();
                ops.pop();

            switch(op){
                case '+': st.push(val2 + val1); 
                break; 
                case '-': st.push(val2 - val1); 
                break; 
                case '*': st.push(val2 * val1); 
                break; 
                case '/': st.push(val2/val1); 
                break; 
            }
    }
    cout<<"Infix Evaluation: "<<st.top()<<endl;
}
void prefixeval(){
    cout<<"Enter Prefix Expression:"<<endl;
    string prefix;
    getline(cin>>ws,prefix);
    stack<int>st;
    int size=prefix.size();
    for(int i=size-1;i>=0;i--){
        if(prefix[i]==' ')continue;
        else if(isdigit(prefix[i])){
            int val=0,j=i;
            while(i<size && isdigit(prefix[i])){
                 i--;
            }
            i++;
            for(int k=i;k<=j;k++){
                val=val*10 + (prefix[k]-'0');
            }
            st.push(val);
        }
        else if(isopr(prefix[i])){
           int val1=st.top();
            st.pop();
            int val2 = st.top();
            st.pop();

            switch(prefix[i]){
            case '+': st.push(val2 + val1); 
            break; 
            case '-': st.push(val2 - val1); 
            break; 
            case '*': st.push(val2 * val1); 
            break; 
            case '/': st.push(val2/val1); 
            break; 
            } 
        }
    }
    cout<<"Prefix Evaluation: "<<st.top()<<endl;
}
void postfixeval(){
    cout<<"Enter Postfix Expression:"<<endl;
    string postfix;
    getline(cin>>ws,postfix);
    stack<int>st;
    int size=postfix.length(),i;
    for(i=0;i<size;++i){
        if(postfix[i]==' ')continue;
        else if(isdigit(postfix[i])){
            int val=0;
            while(isdigit(postfix[i])){
                val = val*10 + (postfix[i]-'0');
                i++;
            }
            i--;
            st.push(val);
        }
        else if(isopr(postfix[i])){
            int val1=st.top();
            st.pop();
            int val2 = st.top();
            st.pop();

            switch(postfix[i]){
            case '+': st.push(val2+val1); 
            break; 
            case '-': st.push(val2-val1); 
            break; 
            case '*': st.push(val2*val1); 
            break;
            case '/': st.push(val2/val1); 
            break; 
            } 
        }
    }
    cout<<"Postfix Evaluation: "<<st.top()<<endl;
}