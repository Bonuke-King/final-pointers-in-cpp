//&food outputs the memory address of food
//pointer is a variable that stores the memory address as its value
#include <iostream>
#include <string.h>
using namespace std;
int main ()
{
    string food = "Pizza" ; //a food variable of type string
    string *ptr = &food; // a pointer variable with the name ptr, that stores the addree of food

// Output the value of food (pizza)
cout << food << endl;
//output the memory address of food (hexadecimal)
cout << &food << endl;

//outpput the memory addeass of food with the pointer (hexadecimal)
cout << ptr << endl;
cout << * ptr<< endl;

//C++ dereference
//get memory address and value
/*in the example from the precious page , we used the pointer variable to get the memory
address of a variable (used together with the & reference operaator )
However you can also use the pointer to get the value of the variable by using the * opetator (the dereference operator)*/

string Currencys = "kenyashilling";//variable declaration
string* ptrc = &Currencys;//pointer declaration
//reference: output the memory address of food with the pointer (hexadecimal)
cout << ptrc<< endl;

//dereference: Output the value of food with the pointer (pizza)
cout << *ptrc << endl;


//NB the *sign 
// -when used in declaration (string* ptr), it creates a  pointer variable.
// -when not used in declaration it act as a dereference operator

//C++ modify pointers
//you can also change the pointer value. but note that tis will also change the value of the original variable
string phones ="huawei";
string* poitr= &phones;

//Output the value of phones (huawei)
cout << phones<< endl;

//Output the memory address of phones (hexadecimal)
cout << &phones <<endl;

//Access the memory address of phones and output its value (huawei)
cout << *poitr << endl ; 

//Change the value of the pointer

*poitr = "Nokia";
//Output the new value of the phones variable (Nokia)
cout << *poitr << endl;
//Output the new value of the phone variable (Nokia)
cout << phones << endl;



    return 0;
}


























