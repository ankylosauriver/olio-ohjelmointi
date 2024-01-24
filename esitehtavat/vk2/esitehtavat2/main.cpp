#include <iostream>
#include "myclass.h"

#include <iostream>


using namespace std;

int main()
{
    myClass object;
    string text = object.publicTextToPrint;
    cout<<"After initialization public string = "<< text <<endl;
    text = "THIS";
    object.publicFunction(text);
    cout<<"And now after using publicFunction text is = "<< object.publicTextToPrint<<endl;

}
