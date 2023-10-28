#include <iostream>

using namespace std;

int main() {
    cout << "Welcome to the Calorie Calculator\n\n";

    // get number of servings from the user
    double servings;
    cout << "Enter servings per food item: ";
    cin >> servings;

    double calories;
    cout << "Enter calories per serving: ";
    cin >> calories;

    double total_calories = servings * calories;

    cout << "Total Calories: " << total_calories << endl;
    return 0;


}