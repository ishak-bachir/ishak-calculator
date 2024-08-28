 #include <iostream>
int main(){
    double firstNum;
    double secondNum;
    double result;
    char choice;
    std::cout<<"welcome to sah9o9  calculator \n";
    std::cout<<"Enter first number \n";
    std::cin>>firstNum;
    std::cout<<"Enter second number \n";
    std::cin>>secondNum;
    std::cout<<"choice an option \n";
    std::cout<<"1/+ \n";
    std::cout<<"2/- \n";
    std::cout<<"3/* \n";
    std::cout<<"4/÷ \n";
    std::cin>>choice;
    switch(choice){
        case '1':
            result = firstNum + secondNum;
            std::cout<<firstNum<<" + "<<secondNum <<" = "<< result <<std::endl;
         break;
        case '2':
            result = firstNum - secondNum;
            std::cout<<firstNum<<" - "<<secondNum <<" = "<< result <<std::endl;
         break;
        case '3':
            result = firstNum * secondNum;
            std::cout<<firstNum<<" * "<<secondNum <<" = "<< result <<std::endl;
         break;
        case '4':
            result = firstNum / secondNum;
            std::cout<<firstNum<<" ÷ "<<secondNum <<" = "<< result <<std::endl;
         break;
        default:
            std::cout<<"Sorry this isn't a valid choice";
            exit(1);
         break;
    }
    return 0;
}
