#include <iostream>
using namespace std;

int numLen(int n) {
    int counter = 0;
    while (n) {
        n /= 10;
        counter++;
    }
    return counter;
}
int longestNum(const int arr[], const int n) {
    if (arr == nullptr) {
        return 0;
    }
    int longest = numLen((int)arr[0]);
    for (int i = 1; i < n; i++) {
        const int temp = numLen((int)arr[i]);
        if (temp > longest) {
            longest = temp;
        }
    }
    return longest;
}
size_t strlen(const char arr[]) {
    size_t counter = 0;
    while (arr[counter++]);
    return counter - 1;
}
char otherCase(const char c) {
    if ('a' <= c && c <= 'z') {
        return c - 'a' + 'A';
    }
    if ('A' <= c && c <= 'Z') {
        return c - 'A' + 'a';
    }
    return c;
}
bool equalsIgnoreCase(const char arr[], const char arr1[]) {
    const size_t len1 = strlen(arr), len2 = strlen(arr1);
    if (len1 != len2) {
        return false;
    }
    for (size_t i = 0; i < len1; i++) {
        if (arr[i] != arr1[i] && arr[i] != otherCase(arr1[i])) {
            return false;
        }
    }
    return true;
}
const char* monthStr(const int month) {
    if (month == 1) {
        return "January";
    }
    if (month == 2) {
        return "February";
    }
    if (month == 3) {
        return "March";
    }
    if (month == 4) {
        return "April";
    }
    if (month == 5) {
        return "May";
    }
    if (month == 6) {
        return "June";
    }
    if (month == 7) {
        return "July";
    }
    if (month == 8) {
        return "August";
    }
    if (month == 9) {
        return "September";
    }
    if (month == 10) {
        return "October";
    }
    if (month == 11) {
        return "November";
    }
    if (month == 12) {
        return "December";
    }
    return nullptr;
}
const char* monthShortStr(const int month) {
    if (month == 1) {
        return "Jan";
    }
    if (month == 2) {
        return "Feb";
    }
    if (month == 3) {
        return "Mar";
    }
    if (month == 4) {
        return "Apr";
    }
    if (month == 5) {
        return "May";
    }
    if (month == 6) {
        return "Jun";
    }
    if (month == 7) {
        return "Jul";
    }
    if (month == 8) {
        return "Aug";
    }
    if (month == 9) {
        return "Sep";
    }
    if (month == 10) {
        return "Oct";
    }
    if (month == 11) {
        return "Nov";
    }
    if (month == 12) {
        return "Dec";
    }
    return nullptr;
}
int monthNumber(const char arr[]) {
    if (equalsIgnoreCase(arr, "January")) {
        return 1;
    }
    if (equalsIgnoreCase(arr, "February")) {
        return 2;
    }
    if (equalsIgnoreCase(arr, "March")) {
        return 3;
    }
    if (equalsIgnoreCase(arr, "April")) {
        return 4;
    }
    if (equalsIgnoreCase(arr, "May")) {
        return 5;
    }
    if (equalsIgnoreCase(arr, "June")) {
        return 6;
    }
    if (equalsIgnoreCase(arr, "July")) {
        return 7;
    }
    if (equalsIgnoreCase(arr, "August")) {
        return 8;
    }
    if (equalsIgnoreCase(arr, "September")) {
        return 9;
    }
    if (equalsIgnoreCase(arr, "October")) {
        return 10;
    }
    if (equalsIgnoreCase(arr, "November")) {
        return 11;
    }
    if (equalsIgnoreCase(arr, "December")) {
        return 12;
    }
    return 0;
}
int search(const int* monthArray, const int n, const int month) {
    for (int i = 0; i < n; i++) {
        if (monthArray[i] == month) {
            return i;
        }
    }
    return -1;
}
void swap(int& a, int& b) {
    const int temp = a;
    a = b;
    b = temp;
}
void swap(double& a, double& b) {
    const double temp = a;
    a = b;
    b = temp;
}
void selectionSortDesc(double* first, double* second, double* third, int* last, const int size) {
    if (first == nullptr || second == nullptr || third == nullptr || last == nullptr) {
        return;
    }
    for (int i = 0; i < size; i++) {
        int minIndex = i;
        for (int j = i + 1; j < size; j++) {
            if (first[j] > first[minIndex]) {
                minIndex = j;
            }
        }
        if (i != minIndex) {
            swap(first[i], first[minIndex]);
            swap(second[i], second[minIndex]);
            swap(third[i], third[minIndex]);
            swap(last[i], last[minIndex]);
        }
    }
}
void selectionSort(int* first, double* second, double* third, double* last, const int size) {
    if (first == nullptr || second == nullptr || third == nullptr || last == nullptr) {
        return;
    }
    for (int i = 0; i < size; i++) {
        int minIndex = i;
        for (int j = i + 1; j < size; j++) {
            if (first[j] < first[minIndex]) {
                minIndex = j;
            }
        }
        if (i != minIndex) {
            swap(first[i], first[minIndex]);
            swap(second[i], second[minIndex]);
            swap(third[i], third[minIndex]);
            swap(last[i], last[minIndex]);
        }
    }
}
double min(const double* arr, const int n) {
    if (arr == nullptr) {
        return 0;
    }
    double min = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] < min) {
            min = arr[i];
        }
    }
    return min;
}
double max(const double* arr, const int n) {
    if (arr == nullptr) {
        return 0;
    }
    double max = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}
int main() {
    char command[9];
    int numberOfMonths = 0;
    bool setup = false;
    int* monthsArray = nullptr;
    double* incomeArray = nullptr;
    double* expenseArray = nullptr;
    double* balanceArray = nullptr;
    int counterAddedMonths = 0;
    while (cin >> command) {
        if (equalsIgnoreCase(command, "setup")) {
            if (setup) {
                cout << "Already setup!" << endl;
                continue;
            }
            cout << "Enter number of months: ";
            cin >> numberOfMonths;
            if (numberOfMonths >= 1 && numberOfMonths <= 12) {
                cout << "Profile created successfully." << endl;
                monthsArray = new int[numberOfMonths];
                incomeArray = new double[numberOfMonths];
                expenseArray = new double[numberOfMonths];
                balanceArray = new double[numberOfMonths];
                setup = true;
            }
            else {
                cout << "Invalid entry!" << endl;
                numberOfMonths = 0;
            }
        }
        else if (equalsIgnoreCase(command, "add")) {
            if (monthsArray == nullptr || incomeArray == nullptr || expenseArray == nullptr || balanceArray == nullptr || numberOfMonths == 0) {
                cout << "Not set up!" << endl;
                continue;
            }
            int month = 0;
            double income, expense;
            if (counterAddedMonths == numberOfMonths) {
                cout << "Number of months reached, can't add!" << endl;
                continue;
            }
            cout << "Enter month (1-12): ";
            cin >> month;
            if (month < 1 || month > 12) {
                cout << "Invalid entry!" << endl;
                continue;
            }
            if (search(monthsArray, counterAddedMonths, month) != -1) {
                cout << "Month " << month << " already exists." << endl;
                continue;
            }
            cout << "Enter income: ";
            cin >> income;
            if (income < 0) {
                cout << "Invalid entry! Income can't be negative!" << endl;
                continue;
            }
            cout << "Enter expense: ";
            cin >> expense;
            if (expense < 0) {
                cout << "Invalid entry! Expense can't be negative!" << endl;
                continue;
            }
            monthsArray[counterAddedMonths] = month;
            incomeArray[counterAddedMonths] = income;
            expenseArray[counterAddedMonths] = expense;
            balanceArray[counterAddedMonths] = income - expense;
            cout << "Balance for " << monthStr(monthsArray[counterAddedMonths]) << ": ";
            if (balanceArray[counterAddedMonths] > 0) {
                cout << '+' << balanceArray[counterAddedMonths] << endl;
            }
            else {
                cout << balanceArray[counterAddedMonths] << endl;
            }
            counterAddedMonths++;
        }
        else if (equalsIgnoreCase(command, "report") || equalsIgnoreCase(command, "exit")) {
            if (monthsArray == nullptr || incomeArray == nullptr || expenseArray == nullptr || balanceArray == nullptr) {
                if (equalsIgnoreCase(command, "exit")) {
                    break;
                }
                cout << "Not set up!" << endl;
                continue;
            }
            if (equalsIgnoreCase(command, "exit")) {
                if (counterAddedMonths > 0) {
                    cout << "Final report:" << endl;
                }
                else {
                    cout << "No data to report!" << endl;
                    break;
                }
            }
            if (counterAddedMonths == 0) {
                cout << "No data to report!" << endl;
                continue;
            }
            selectionSort(monthsArray, incomeArray, expenseArray, balanceArray, counterAddedMonths);
            cout << "Month | Income | Expense | Balance" << endl;
            cout << "----------------------------------" << endl;
            for (int i = 0; i < counterAddedMonths; i++) {
                cout << monthShortStr(monthsArray[i]) << "   | " << incomeArray[i] << " | " << expenseArray[i] << " | ";
                if (balanceArray[i] > 0) {
                    cout << '+' << balanceArray[i] << endl;
                }
                else {
                    cout << balanceArray[i] << endl;
                }
            }
            cout << "----------------------------------" << endl;
            double totalIncome = 0, totalExpense = 0, averageBalance = 0;
            for (int i = 0; i < counterAddedMonths; i++) {
                totalIncome += incomeArray[i];
                totalExpense += expenseArray[i];
                averageBalance += balanceArray[i];
            }
            averageBalance /= counterAddedMonths;
            cout << "Total income: " << totalIncome << endl;
            cout << "Total expense: " << totalExpense << endl;
            cout << "Average balance: ";
            if (averageBalance > 0) {
                cout << '+' << averageBalance << endl;
            }
            else {
                cout << averageBalance << endl;
            }
            if (equalsIgnoreCase(command, "exit")) {
                break;
            }
        }
        else if (equalsIgnoreCase(command, "search")) {
            if (monthsArray == nullptr || incomeArray == nullptr || expenseArray == nullptr || balanceArray == nullptr) {
                cout << "Not set up!" << endl;
                continue;
            }
            char monthName[10];
            cin >> monthName;
            const int currentMonth = monthNumber(monthName);
            if (currentMonth == 0) {
                cout << "No such month!" << endl;
                continue;
            }
            const int indexOfMonth = search(monthsArray, counterAddedMonths, currentMonth);
            if (indexOfMonth == -1) {
                cout << "Month not added!" << endl;
                continue;
            }
            cout << "Income: " << incomeArray[indexOfMonth] << endl;
            cout << "Expense: " << expenseArray[indexOfMonth] << endl;
            cout << "Balance: ";
            if (balanceArray[indexOfMonth] > 0) {
                cout << '+' << balanceArray[indexOfMonth] << endl;
            }
            else {
                cout << balanceArray[indexOfMonth] << endl;
            }
            if (incomeArray[indexOfMonth] == 0) {
                cout << "N/A expense ratio (no income)!";
            }
            else {
                const double expenseRatio = 100 * expenseArray[indexOfMonth] / incomeArray[indexOfMonth];
                cout << "Expense ratio: " << expenseRatio << "%" << endl;
            }
        }
        else if (equalsIgnoreCase(command, "sort")) {
            if (monthsArray == nullptr || incomeArray == nullptr || expenseArray == nullptr || balanceArray == nullptr) {
                cout << "Not set up!" << endl;
                continue;
            }
            char type[8];
            cin >> type;
            if (equalsIgnoreCase(type, "income")) {
                selectionSortDesc(incomeArray, expenseArray, balanceArray, monthsArray, counterAddedMonths);
            }
            else if (equalsIgnoreCase(type, "expense")) {
                selectionSortDesc(expenseArray, incomeArray, balanceArray, monthsArray, counterAddedMonths);
            }
            else if (equalsIgnoreCase(type, "balance")) {
                selectionSortDesc(balanceArray, incomeArray, expenseArray, monthsArray, counterAddedMonths);
            }
            else {
                cout << "Invalid entry!" << endl;
                continue;
            }
            cout << "Sorted by monthly " << type << " (descending):" << endl;
            const int n = counterAddedMonths < 3 ? counterAddedMonths : 3;
            for (int i = 0; i < n; i++) {
                cout << i + 1 << ". " << monthShortStr(monthsArray[i]) << ": ";
                if (equalsIgnoreCase(type, "income")) {
                    cout << "+" << incomeArray[i] << endl;
                }
                else if (equalsIgnoreCase(type, "expense")) {
                    cout << "+" << expenseArray[i] << endl;
                }
                else if (equalsIgnoreCase(type, "balance")) {
                    if (balanceArray[i] > 0) {
                        cout << "+" << balanceArray[i] << endl;
                    }
                    else {
                        cout << balanceArray[i] << endl;
                    }
                }
            }
        }
        else if (equalsIgnoreCase(command, "forecast")) {
            if (balanceArray == nullptr) {
                cout << "Not set up!" << endl;
                continue;
            }
            if (counterAddedMonths == 0) {
                cout << "Cannot forecast, no added months!" << endl;
                continue;
            }
            int period = 0;
            cin >> period;
            if (period < 1) {
                cout << "Period must be positive!" << endl;
                continue;
            }
            double savings = 0;
            for (int i = 0; i < counterAddedMonths; i++) {
                savings += balanceArray[i];
            }
            cout << "Current total savings: " << savings << endl;
            const double average_monthly_change = savings / counterAddedMonths;
            const double predictedSavings = savings + average_monthly_change * period;
            cout << "Average monthly change: ";
            if (average_monthly_change > 0) {
                cout << "+" << average_monthly_change << endl;
                cout << "Predicted savings after " << period << " months: " << predictedSavings << endl;
            }
            else {
                cout << average_monthly_change << endl;
                if (predictedSavings < 0) {
                    cout << "Expected to run out of money after ";
                    for (int i = 1; i <= period; i++) {
                        savings += average_monthly_change;
                        if (savings + average_monthly_change < 0) {
                            cout << i << " months";
                            break;
                        }
                    }
                }
                else {
                    cout << "Predicted savings after " << period << " months: " << predictedSavings << endl;
                }
            }
        }
        else if (equalsIgnoreCase(command, "chart")) {
            if (monthsArray == nullptr || incomeArray == nullptr || expenseArray == nullptr || balanceArray == nullptr) {
                cout << "Not set up!" << endl;
                continue;
            }
            if (counterAddedMonths == 0) {
                cout << "Months not added!" << endl;
                continue;
            }
            cout << "=== YEARLY FINANCIAL CHART ===" << endl;
            selectionSort(monthsArray, incomeArray, expenseArray, balanceArray, counterAddedMonths);
            const double low = min(incomeArray, counterAddedMonths) < min(expenseArray, counterAddedMonths) ? min(incomeArray, counterAddedMonths) : min(expenseArray, counterAddedMonths);
            double high = max(incomeArray, counterAddedMonths) < max(expenseArray, counterAddedMonths) ? max(expenseArray, counterAddedMonths) : max(incomeArray, counterAddedMonths);
            const double diff = (high - low) / 4;
            const int incrementCount = 5;
            int increments[incrementCount];
            for (int i = 0; i < incrementCount; i++) {
                increments[i] = (int)high;
                high -= diff;
            }
            const int longestNumber = longestNum(increments, incrementCount);
            for (int i = 0; i < incrementCount; i++) {
                cout << increments[i];
                for (int k = 0; k < longestNumber - numLen(increments[i]); k++) {
                    cout << " ";
                }
                cout << " | ";
                for (int j = 0; j < counterAddedMonths; j++) {
                    if (incomeArray[j] >= increments[i]) {
                        cout << "+ ";
                    }
                    else {
                        cout << "  ";
                    }
                    if (expenseArray[j] >= increments[i]) {
                        cout << "-   ";
                    }
                    else {
                        cout << "    ";
                    }
                }
                cout << endl;
            }
            for (int i = 0; i < longestNumber + 2; i++) {
                cout << " ";
            }
            for (int i = 0; i < counterAddedMonths * 6 - 1; i++) {
                cout << "-";
            }
            cout << endl;
            cout << "       ";
            for (int i = 0; i < counterAddedMonths; i++) {
                cout << monthShortStr(monthsArray[i]) << "   ";
            }
            cout << endl;
            cout << "Legend:" << endl;
            cout << "(+) = Income" << endl;
            cout << "(-) = Expense" << endl;
        }
    }
    //форкаст и чарт
    delete[] monthsArray;
    delete[] incomeArray;
    delete[] expenseArray;
    delete[] balanceArray;
}