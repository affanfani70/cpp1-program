/*Make your own version of the library function strcmp(s1, s2), which compares two strings and returns –1 if s1 comes first alphabetically, 0 if s1 and s2 are the same, and 1 if s2 comes first alphabetically. Call your function compstr(). It should take two char* strings as arguments, compare them character by character, and return an int. Write a main() program to test the function with different combinations of strings. Use pointer notation throughout.*/

// #include <iostream>
// #include <string>
// using namespace std;
// int str_compare(char *s1, char *s2)
// {
//     int i;
//     for (i = 0;; i++)
//     {
//         if ((s1[i] == '\0') && (s2[i] == '\0'))
//             return 0;
//         if (s1[i] < s2[i])
//             return 1;
//         if (s1[i] > s2[i])
//             return -1;
//     }
//     return 0;
// }
// int main()
// {
//     char str1[100], str2[100];
//     cout << "Input first string: ";
//     cin >> str1;
//     cout << "Input second string: ";
//     cin >> str2;
//     int test = str_compare(str1, str2);
//     if (test == 0)
//         cout << "Strings are same";
//     else if (test == 1)
//         cout << "First string comes first alphabetically";
//     else
//         cout << "Second string comes first alphabetically";
//     return 0;
// }

/*Start with an array of pointers to strings representing the days of the week, as found in
the PTRTOSTR program in this chapter. Provide functions to sort the strings into
alphabetical order, using variations of the bsort() and order() functions from the PTRSORT
program in this chapter. Sort the pointers to the strings, not the actual strings.*/


#include <iostream>
#include <cstring>   
using namespace std;
// Sorts array of C strings of given size into alphabetical order
void sort(char *strings[], int size){
    
    int i,j;
    for ( i = 0; i < size - 1; ++i)
    {
        for ( j = i + 1; j < size; ++j)
        {
            if (strcmp(strings[i], strings[j]) > 0)
            {
                swap(strings[i], strings[j]);
            }
        }
    }
}
// Prints array of C strings
void print_array(char *strings[], int size){
    for (int i = 0; i < size; ++i)
        cout << strings[i] << " " ;
}
int main()
{
    const int Days = 7;
    char *Days_week[Days] = {
        "Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};
    cout << "Original array: " << endl;
    print_array(Days_week, Days);
    cout << "\nSorted array: " << endl;
    sort(Days_week, Days);
    print_array(Days_week, Days);
    return 0;
}


