#include <iostream>
using namespace std;


/* An enumeration is a user - defined data type that consists of integram constants.To definean enumeration, the keyword enum is used.
example: enum season { spring, summer, autumn, winter };
The name of the enum is season
Spring, summer, autumn, and winter are the values of type season

When you create an enum typ, only the blueprint for the variable is created,
example:
enum boolean { false, true }
*inside function*
enum boolean check

Here, a variable check of type enum is created.

Here is anthother way to declare the same check variable using different syntax
enum boolean
{
	false, true
} check;

*/

enum week { Sunday, Monday, Tuesday, Wednesday, Thursday, Friday, Saturday };

enum seasons { spring = 34, summer = 4, autumn = 9, winter=32 };

enum suit {
	club = 0,
	diamonds = 10,
	hearts = 20,
	spades = 3
} card;


int main() {

	// ex 1. enumeration type
	week today;
	today = Wednesday;
	cout << "Day " << today + 1 << endl;

	// ex 2. changing default value of enums
	seasons s;
	s = summer;
	cout << "Summer = " << s << endl;

	card = club;
	cout << "Size of enum variable " << sizeof(card) << " bytes" << endl;



	return 0;
}