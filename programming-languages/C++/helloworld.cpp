#include <iostream> // Include the iostream library for input and output operations

namespace first{
    int a = 10; // Declare an integer variable named a with the value 10 in the first namespace
}
namespace second{
    int a = 20; // Declare an integer variable named a with the value 20 in the second namespace
}

int main(){
    // Printing statements
    std::cout << "I like pizza!" << std::endl;
    std::cout << "It's really good!" << '\n';

    //variables
    int x; //Declaring
    x = 5; //Assigning
    std::cout << "The value of x is: " << x << std::endl;

    //data types
    int age = 25; // Declaring and initializing an integer variable named age with the value 25
    int year = 2024; 
    int days = 365; 
    
    /*int days2 = 7.5; // This line will cause a compilation error because 7.5 is a floating-point number and cannot be assigned to an integer variable*/

    double price = 19.99; // Declaring and initializing a double variable named price with the value 19.99
    double temperature = 36.5;
    double gpa = 3.75; 

    char grade = 'A'; // Declaring and initializing a char variable named grade with the value 'A'
    char initial = 'J'; 
    char symbol = '@';

    /*char letters = 'AB'; // This line will cause a compilation error because 'AB' is a string literal and cannot be assigned to a char variable*/

    bool isRaining = true; // Declaring and initializing a bool variable named isRaining with the value true
    bool isSunny = false; 
    bool isWeekend = true; 

    std::string name = "John"; // Declaring and initializing a string variable named name with the value "John"
    std::string city = "New York";
    std::string country = "USA"; 

    std::cout << "Name: " << name << std::endl; // Output the value of the name variable to the console

    /* const keyword: The const keyword is used to declare a variable as constant, meaning its value cannot be changed after it has been initialized*/
    const double PI = 3.14159; // Declaring a constant variable named PI with the value 3.14159
    double radius = 5.0; 
    double circumference = 2 * PI * radius; 
    std::cout << "The circumference of the circle is: " << circumference << std::endl;

    /* Namespace: 
        A namespace provides a solution for preventing name conflicts in large projects. Each entity (variables, functions...) needs a unique name.
        A namespace allows for identically named entities as long as the namespaces are different.
    */
    int a = 30;
    std::cout << "The value of a in the global namespace is: " << a << std::endl; // Output the value of a in the global namespace
    std::cout << "The value of a in the first namespace is: " << first::a << std::endl; // Output the value of a in the first namespace using the scope
    std::cout << "The value of a in the second namespace is: " << second::a << std::endl; // Output the value of a in the second namespace using the scope
    
    using namespace first; // Using the first namespace to access its members without needing to specify the namespace
    std::cout << "The value of a in the first namespace (using directive) is: " << a << std::endl; // Output the value of a in the first namespace using

    using namespace std; // Using the std namespace to access its members without needing to specify the namespace
    cout << "The value of a in the first namespace (using directive) is: " << a << endl; // Output the value of a in the first namespace using the std namespace

    using std::cout; // Using the cout object from the std namespace to output to the console
    using std::string; // Using the string type from the std namespace to declare string variables

    return 0; // Return 0 to indicate that the program ended successfully
}