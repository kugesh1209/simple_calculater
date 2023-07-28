#include <iostream>
#include <cmath>
using namespace std;
class cal
{
public:
    int first_number;
    int second_number;
    string symbole;

    void get_first_number()
    {
        cout<<"Enter the First_Number:";
        cin>>first_number;
    }
    void get_second_number()
    {
        cout<<"Enter the Second_Number: ";
        cin>>second_number;
    }
    void get_symbole()
    {
        cout<<"Enter the symbole: ";
        cin>>symbole;
    }


    void process()
    {
        if (symbole=="+")
        {
            int output=first_number +second_number;
            cout<<first_number <<symbole<< second_number<< "=" << output;
        }
        else if (symbole=="-")
        {
            int output=first_number -second_number;
            cout<<first_number << symbole<< second_number <<"="<< output;
        }
        else if (symbole=="/")
        {
            int output1=first_number / second_number;
            int ouput2=first_number % second_number;
            cout<<first_number << symbole << second_number<<'\n';
            cout<<"DIV="<< output1 <<" MOD="<<ouput2;
        }
        else if(symbole=="*")
        {
            int output=first_number *second_number;
            cout<<first_number <<symbole<<second_number<<"="<<output<<endl;
           // cout<<output;
        }
        else if (symbole=="**")
        {
            int output=pow(first_number,second_number);
            cout<<first_number << symbole << second_number<<"="<<output<<'\n';
        }
        else if (symbole=="//")
        {
            int output=sqrt(first_number);
            cout<<output;
        }

    }
};
int main()
{
    cal obj;
    obj.get_first_number();
    obj.get_second_number();
    obj.get_symbole();
    obj.process();
}
