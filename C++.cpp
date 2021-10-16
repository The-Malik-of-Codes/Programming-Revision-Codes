#include <iostream>
#include <string>
#include <vector>

using namespace std;

//                              The declarations starts from here.
// function declarations

int addNumbers(int numb1, int numb2){
    return numb1 * numb2;
}

// Exception Catching declarations
double division(int a, int b) {
    if(b == 0){
        throw "Division by zero error";
    }
    return (a / b);
}

// Object orientation/function declaration
class Books{
    public:
        string title;
        string author;
        double pages;
        int referencesNo;
        void readBook(){
            cout << "Reading " + this->title + "by " + this->author << endl;
        }
};

// Constructors declarations
class Book
{
public:
    string title;
    string author;
    double pages;
    int referencesNo;
    Book(string aTitle, string aAuthor, double aPages, int aReferencesNo)
    {
        title = aTitle;
        author = aAuthor;
        pages = aPages;
        referencesNo = aReferencesNo;
    }
};

// Getter and Setter declarations
class Movie
{
private:
    string rating;

public:
    string title;
    string director;
    Movie(string aTitle, string aDirector, string aRating)
    {
        title = aTitle;
        director = aDirector;
        setRating(aRating);
    }

    void setRating(string aRating)
    {
        if (aRating == "G" || aRating == "PG" || aRating == "PG-13" || aRating == "R" || aRating == "NR")
        {
            rating = aRating;
        }
        else
        {
            rating = "NR";
        }
    }

    string getRating()
    {
        return rating;
    }

// Inheritance declarations
    class Chef
    {
    public:
        void makeChicken()
        {
            cout << "The chef makes yummy chicken" << endl;
        }
        void makeSalad()
        {
            cout << "The chef makes salad" << endl;
        }
        void makeSpecialDish()
        {
            cout << "The chef makes BBQ ribs" << endl;
        }
    };
    class ItalianChef : public Chef
    {
    public:
        void makePasta()
        {
            cout << "The chef makes pasta" << endl;
        }
        void makeSpecialDish()
        {
            cout << "The chef makes chicken parm" << endl;
        }
    };
};
//                                  The declaration ends here

int main()
{                                     
//                                        MAIN CODES STARTS

// How to print a fuction in C++
    cout << "Hello" <<endl;
    cout << "World" << endl;
    cout << "!" << endl;
    cout << endl;


// Variable declarations in C++
    string name = "Imran";
    char testGrade = 'A';
    short age0 = 20;
    int age1 = 30;
    long age2 = 40;
    long long age3 = 60;
    float gpa0 = 1.9f;
    double gpa1 = 3.5;
    long double gpa2 = 4.98;
    bool isTall;
    isTall = true;
    name = "Khalid Imran";
    cout << "Your name is " << name << endl;
    cout << endl;


// Constants in C++
    int const BIRTH_YEAR = 1998;
    cout << BIRTH_YEAR;
    cout << endl;


// Casting in C++ i.e changing one data type to another.
    cout << (int)5.85 << endl;
    cout << (double)7/3 << endl;
    cout << endl;


// pointers in C++
    int num = 25;
    cout << &num << endl; // "&" sign shows where a data is stored on the computer.
    int *pNum = &num; // pNum stores the variable location.
    cout << pNum << endl; // we are printing the stored function.
    cout << *pNum << endl; // The "*" sign dereferences the pointer.
    cout << endl;


// Strings in C++
    string greeting = "Hello Tobi";
    cout << greeting.length() << endl;
    cout << greeting[2] << endl;
    cout << greeting[3] << endl;
    cout << greeting.find("obi") << endl;
    cout << greeting.substr(2) << endl;
    cout << greeting.substr(3, 8) << endl;
    cout << endl;


// Numbers in C++
    cout << 2 * 5 << endl;
    cout << 10 % 6 << endl; // Modulus operation
    cout << 10 + 8 * 9 << endl; // ordeer of operation
    cout << 20 / 3.5 << endl;
    int numb = 15;
    numb += 200;
    cout << numb << endl;
    numb++;
    cout << numb << endl;
    cout << endl;


// Getting input from Users in C++
    string name1;
    cout << "Enter your name: " << endl;
    cin >> name1;
    cout << "Assalamualaikum, ya " + name1 + ". Kaifa aluk" << endl;
    int num1, num2;
    cout << "Enter the first number: " << endl;
    cin >> num1;
    cout << "Enter the second number: " << endl;
    cin >> num2;
    cout << "The Answer = " << num1 * num2 << endl;
    cout << endl;


// Arrays in c++
    int luckyNumbers[] = {4, 5, 9, 2, 4, 7, 8, 6, 15};
    luckyNumbers[0] = 60;
    cout << luckyNumbers[0] << endl;
    cout << luckyNumbers[4] << endl;
    cout << luckyNumbers[9] << endl;
    int numberGrid[4][3] = { {0, 1, 6}, {1, 2, 7}, {2, 3, 8}, {9, 5, 24}};
    numberGrid[0][1] = 95;
    cout << numberGrid[0][0] << endl;
    cout << numberGrid[1][1] << endl;
    cout << numberGrid[2][1] << endl;
    cout << endl;


// Vectors in C++
    vector <string> friends;
    friends.push_back("bob");
    friends.push_back("John");
    friends.push_back("Kelvin");
    friends.insert(friends.begin() + 1, "Mike");
    friends.erase(friends.begin() + 1); // it remove index no 1 i.e "Mike"
    cout << friends.at(0) << endl;
    cout << friends.at(1) << endl;
    cout << friends.at(2) << endl;
    cout << friends.size() << endl;
    cout << endl;


// Funtions in C++
    int multiply = addNumbers(5, 30);
    cout << multiply << endl;
    cout << endl;


// If statement in C++
    bool isStudent = false;
    bool isSmart = false;
    if(isStudent && isSmart){
        cout << "You are a student." << endl;
    } else if(isStudent && !isSmart){
        cout << "You are not a smart student." << endl;
    } else {
        cout << "You are not a student and you are not smart." << endl;
    }
    if(2 < 5){
        cout << "Number comparison was true." << endl;
    }
    if('a' < 'b'){
        cout << "Character comparison was true." << endl;
    }
    string myString = "cat";
    if(myString.compare("cat") == 0){
        cout << "String comparison was true." << endl;
    }
    cout << endl;


// Switch statement in C++
    char myGrade = 'A';
    switch(myGrade){
        case 'A':
            cout << "You pass." << endl;
            break;
        case 'F':
            cout << "You fail." << endl;
            break;
        default:
            cout << "Invalid grade" << endl;
    } cout << endl;


// Looping in C++ ---- While loops
    int index = 1;
    while (index<= 5){
        cout << index << endl;
        index ++; // without this line the code will loop forever
    } cout << endl;


    // Looping in C++ ---- For loops
    for(int i = 0; i < 5; i++){
        cout << i << endl;
    }cout << endl;


// Exception Catching in C++
    try {
        division(10, 0);
    } catch (const char* msg){
        cerr << msg << endl;
    }cout << endl;


// Object Orientation in C++
    Books AhmadBook;
    AhmadBook.title = "The biography of All the Nabi(a.s.)";
    AhmadBook.author = "Zafaran Adeniyi";
    AhmadBook.pages = 2035;
    AhmadBook.referencesNo = 86354684;
    Books AsmaauBook;
    AsmaauBook.title = "The Atom";
    AsmaauBook.author = "Ababio";
    AsmaauBook.pages = 1230;
    cout << AhmadBook.title << endl;
    cout << AsmaauBook.title << endl;
    cout << AhmadBook.pages << endl;
    cout << AsmaauBook.author << endl;
    cout << endl;


// Constructors in C++
    Book AhmadBooks("The biography of All the Nabi(a.s.)", "Zafaran Adeniyi", 2035, 455368545);
    Book AsmaauBooks("The Atom", "Ababio", 1230, 646354541);
    cout << AhmadBooks.author << endl;
    cout << AsmaauBooks.title << endl;
    cout << AsmaauBooks.pages << endl;
    cout << AsmaauBooks.referencesNo << endl;
    cout << AhmadBooks.referencesNo << endl;
    cout << endl;


// Getter and Setter in C++
    Movie avengers("The Avengers", "Joss Whedon", "PG-13");
    avengers.setRating("Dog");
    cout << avengers.getRating();
    cout << endl;
    return 0;
}