#include <iostream>
#define SIZE 200
using namespace std;

typedef struct _some_struct {
    int array_of_200_ints[SIZE];
} my_struct_t;

void print_members_50(my_struct_t &);
void increment_members_by_value(my_struct_t);
void increment_members_by_reference(my_struct_t &);

int main(int argc, char const *argv[])
{
    my_struct_t struct1 = {0};
    my_struct_t& ref_struct1 = struct1;
    cout << "It doesn't matter if I pass reference or original object to such a function(arg&).";
    print_members_50(struct1);
    print_members_50(ref_struct1);
    cout << "Function need to only know that arguments is passed by reference.";

    cout << "Incrementing function by value works on copy!\n";
    cout << "Adding reference to argument fixes all probles.\n";
    cout << "There is no need to change body or passed arguments";
    increment_members_by_value(struct1); // copies struct with array of 200 ints
    increment_members_by_reference(struct1); // uses original struct
    print_members_50(struct1);
    cout << endl;
    return 0;
}
void print_members_50(my_struct_t &ref_in){
    for (int i = 0; i < SIZE; i++) {
        if ( (i % 50) == 0)
            cout << endl;
        cout << ref_in.array_of_200_ints[i];
    }
    cout << endl;
};
void increment_members_by_value(my_struct_t _struct_in){
    for (int i = 0; i < SIZE; i++) {
        _struct_in.array_of_200_ints[i] += 1;
    }

}
void increment_members_by_reference(my_struct_t &_struct_in){
        for (int i = 0; i < SIZE; i++) {
        _struct_in.array_of_200_ints[i] += 1;
    }
}