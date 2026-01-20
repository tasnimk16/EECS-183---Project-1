/**
 * focaccia.cpp
 *
 * <Tasnimk>
 *
 * EECS 183: Project 1
 * Fall 2024
 * 
 * <Create a focaccia bread shopping list for a desired amount of people.>
 *
 */
#include <iostream>
#include <cmath>
#include <string>
using namespace std;
/**
 * Returns the singular or plural form of a word, based on number
 *
 * Requires: singular is the singular form of the word.
 *           plural is the plural form of the word.
 *           number determines how many things there are; must be >= 0.
 * Modifies: Nothing.
 * Effects:  Returns return the singular form of the word if number == 1.
 *           Otherwise, returns the plural form.
 * Examples:
 *           // prints "bag"
 *           cout << pluralize("bag", "bags", 1);
 *
 *           // prints "pounds"
 *           string temp = pluralize("pound", "pounds", 3);
 *           cout << temp;
 */
string pluralize(string singular, string plural, int number);
int main() {
    int people;
    cout << "How many people do you need to serve? ";
    cin >> people;
    cout << endl << endl;
// Define the constants
const int PEOPLE_PER_LOAF = 4;
const double FLOUR_CUPS_PER_BAG = 20;
const double FLOUR_CUPS_PER_LOAF = 5;
const double YEAST_TSP_PER_PACKAGE = 2.25;
const double YEAST_TSP_PER_LOAF = 1.75;
const double SALT_GRAMS_PER_TSP = 5;
const double SALT_GRAMS_PER_CNSTR = 30;
const double SALT_TSP_PER_LOAF = 1.875;
const double OLIVEOIL_ML_PER_TBSP = 14.8;
const double OLIVEOIL_ML_PER_BTL = 500;
const double OLIVEOIL_TBSP_PER_LOAF = 2;
// Generate the number of loaves is needed for the desired amount of people.
int loaves = people / PEOPLE_PER_LOAF;
if (people % PEOPLE_PER_LOAF != 0) {
   loaves++;
}
// Generate how many bags of flour is needed.
double totalCupsFlour = loaves * FLOUR_CUPS_PER_LOAF;
int bagOfFlour = ceil (totalCupsFlour / FLOUR_CUPS_PER_BAG);
// Generate how many packs of yeast is needed.
double totalTspYeast = loaves * YEAST_TSP_PER_LOAF;
int packageOfYeast = ceil (totalTspYeast / YEAST_TSP_PER_PACKAGE);
// Generate how many canisters of salt is needed.
double totalGramsSalt = loaves * SALT_TSP_PER_LOAF * SALT_GRAMS_PER_TSP;
int canisterOfSalt = ceil (totalGramsSalt / SALT_GRAMS_PER_CNSTR);
// Generate how many bottles of olive oil are needed.
double totalOilMl = loaves * OLIVEOIL_TBSP_PER_LOAF * OLIVEOIL_ML_PER_TBSP;
int bottlesOfOliveOil = ceil (totalOilMl / OLIVEOIL_ML_PER_BTL);
// Generate the total cost of the ingredients based on how much is needed.
const double COST_FLOUR = 2.69;
const double COST_YEAST = 0.40;
const double COST_SALT = 0.49;
const double COST_OLIVE_OIL = 6.39;
double ingredientsCostTotal = (bagOfFlour * COST_FLOUR) +
(packageOfYeast * COST_YEAST) + (canisterOfSalt * COST_SALT) +
(bottlesOfOliveOil * COST_OLIVE_OIL);
/* Create a receipt that displays the amount of loaves, ingredients,
and total cost */
cout << "You need to make: " << loaves << " " << pluralize("loaf", "loaves",
    loaves) << " of focaccia" << endl << endl;
cout << "Shopping List for focaccia Bread" <<
endl << "--------------------------------" << endl;
cout << bagOfFlour << " " << pluralize("bag", "bags",
    bagOfFlour) << " of flour" << endl;
cout << packageOfYeast << " " << pluralize("package", "packages",
    packageOfYeast) << " of yeast" << endl;
cout << canisterOfSalt << " " << pluralize("canister", "canisters",
    canisterOfSalt) << " of salt" << endl;
cout << bottlesOfOliveOil << " " << pluralize("bottle", "bottles", 
    bottlesOfOliveOil)
    << " of olive oil" << endl
    << endl << endl;
cout << "Total expected cost of ingredients: $"
    << ingredientsCostTotal << endl
    << endl << endl;
cout << "Have a great party!" << endl;
    return 0;
}
// ----------------------------------------------
// *** DO NOT CHANGE ANYTHING BELOW THIS LINE ***
string pluralize(string singular, string plural, int number) {
    if (number == 1) {
        return singular;
    }
    return plural;
}
