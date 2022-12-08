#include <cctype>
//The following character functions return true or false
isalpha(datatype)
isalpha; //if argument is a letter of the alphabet
isalnum; //if the argument is a letter of the alphabet or a digit
isdigit; //if argument is a digit 0 - 9
islower; //if argument is lowercase
isupper; //if argument is uppercase
isprint; //if argument is printable character (including a space)
ispunct; //if argument is printable character other than digit, letter, or space
isspace; //if argument is a whitespace(" ", "\v", "\n", "\t")

//Character case conversion
toupper; //returns the uppercase equivalent of argument
tolower; //returns the lowercase equivalent of argument

//C-Strings
#include <cstring>
strlen; //gets length of char array up to null terminator
len=strlen(name);
strcat; //appends one string to another
strcat(string1, string2);
strcpy; //copy one string to another
strcpy(string1, string2);
//strcat and strcpy can potentially overwrite bounds of an array and make it possible to write unsafe code. An alternative would be to use the following
strncat; //similar to strcat, but passes a third argument for maximum number of characters to append to the first. Ex.
strncpy(string1, string2, 5);
strncpy; //similar to strcpy, except passing a third arument for the maximum number of characters to copy to the first string. Ex.
strncpy(string1, string2, 5;)
strstr; //Searches for a string inside of a string
cout << strstr(string1, string2);
strcmp; //compares two strings
if(!strcmp(string1, string2))

//C-string Numeric conversion functions
#include <cstdlib>
atoi; //accepts a c string as argument. Converts the c string to integer
int num = atoi("4569");
atol; //accepts c string as argument. Converts the c sctring to long integer
long lnum = atol("500000");
atof; //accepts c string as argument. Convers the c string to a double
double fnum= atof ("3.14159");
stoi; //accepts string and converts to int
stol; //accepts string and converts to long
stoul; //accepts string and converts to unsigned long
stoull; //accepts string and converts to long long
stof; //accepts string and converts to float
stod; //accepts string and converts to double
stold; //accepts string and converts to long double

//to_string function converts value to string
#include <string>
to_string(int value)(long value)(long long value)(unsigned value)(unsigned long value)(unsigned long long value)(float value)(double value)(long double value);


//String object definitions
string address; //defines empy string object named address
string name("William Smith"); // defines string object named name, initialized to "William Smith"
string person1(person2); //defines string object named person1, which is a copy of person2. person2 may be either a string object or character array
string str(str2, 5); //defines a string object named str1, which is intialized to the first five characters in the character array str2
string lineFull('z', 10); //defines a string object named lineFull initialized with 10 'z' characters
string firstName(fullName, 0, 7); //defines a string object named firstName, initialized with a substring of the string fullName. The substring is seven characters long, beginning at position 0

//string class operators
>> //Extracts chracters from a stream and inserts them into a string. Characters are copied until a whitespace or the end of the string is encountered
<< //inserts the string into a stream
= //assigns the string on the right the string object on the left
+= //appends a copy of the string that is on the right the the string object on the left
+ //returns a string that is the concatenation of the two string operations
[]; //Implements array-subscript notation, as in name[x]. A reference to the character in the x position is returned

//Relational operators. Each of the relational operatores is implemented:
< > <= >= == ! = !=

//String class member functions. All used as 'myString.function();'
myString.length(); //returns number of characters in the string
.append(n, 'z') //appends n copies of 'z' to myString
.append(str) //appends str to mystring. str can be a string object or character array
.append(str, n) //the first n chracters of the char array str are appended to mystring
.append(str, x, n) //n number of chracters from str, starting at postiion x, are appended to mystring. If mystring is too small, the function will copy as many characters as possible
.assign(n, 'z') //assigns n copies of 'z' to mystring
.assign(str) //assigns str to mystring.
.assign(str, n) //the first n characters of the char array str are assigned to mystring
.assign(str, x, n) //n number of characters from str, starting at position x, are assigned to mystring. if my string is too small, the function will copy as many characters as possible
.at(x) //returns the character as position x in the string
.back() //returns the last character in the string
.begin() //returns iterator pointing to the first character in the string
.c_str() //converts the contents of mystring to a C string and returns a position to the C string
.capacity() //returns the size of the storage allocated for this string
.clear() //clears the string by deleting all the characters store in it
.compare(str) //performs a comparison like the strcmp
.compare(x, n, str) //compares mystring and str, starting at position x
.copy(str, x, n) //copies the character array str to mystring, beginning at position x, for n characters
.empty() //returns true if mystring is empty
.end() //returns an iterator pointing to the last character of the string
.erase(x, n) //erases n chracters from mystring, beginning at x
.find(str, x) //returns the first position at or beyond position x where the string str is found in mystring
.find('z', x) //returns the first positiont at or beyond position x where 'z' is found in mystring. If not found, the function returns STRING::npos
.front() //returns the first character of the string
.insert(x, n, 'z') //inserts 'z' n times into mystring at position x
.insert(x, str) //inserts a copy of str into mystring, beginning at position x
.length() //returns length of string
.replace(x, n, str) //replaces the n characters in mystring beginning at position x with the characters in string object str
.resize(n, 'z') //changes the size of the allocation in mystring to n
.size() //returns the length of the string in mystring
.substr(x, n) //returns a copy of a substring. N characters long and begins at position x of mystring
.swap(str) //swaps the contents of mystring with str