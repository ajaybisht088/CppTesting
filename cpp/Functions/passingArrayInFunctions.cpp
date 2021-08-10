// #include <iostream>
// #include <string>
// using namespace std;
// void abc(int []);
// void abc(int locArr[], size_t size){
//     for(int i = 0; i<size; i++)
//         cout<<locArr[i]<<endl;
// }
// int main() {
//     int arr[] {10, 20, 30, 40, 50, 60};
//     int size = sizeof(arr)/sizeof(int);
//     cout<<"Size of array = "<<size<<endl;
//     abc(arr, size);
// 	return 0;
// }

#include <iostream>
#include <string>
#include <typeinfo>
using namespace std;
void print_guest_list(const string[], size_t);
void clear_guest_list(string[], size_t);
int main() {
    string guest_list[] {"Larry", "Moe", "Curly"};
    size_t guest_list_size {3};
    print_guest_list(guest_list, guest_list_size);
    clear_guest_list(guest_list, guest_list_size);
    print_guest_list(guest_list, guest_list_size);
    return 0;
}
void print_guest_list(const string guest_list[], size_t value) {
    for (int i = 0; i<value; i++){
        cout<<guest_list[i]<<endl;
    }
}
void clear_guest_list(string guest_list[], size_t value) {
    for (int i = 0; i<value; i++){
        guest_list[i] = " ";
    }
}