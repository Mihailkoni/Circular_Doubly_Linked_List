#include <iostream>
#include "Circular_Doubly_Linked_List.h"
using namespace std;


int main() {
    Circle* head = nullptr;
    Circle* head2 = nullptr;
    Circle* head3 = nullptr;
    Circle* head4 = nullptr;

    //List 1
    add_to_list(head, 1);
    add_to_list(head, 2);
    add_to_list(head, 3);
    add_to_list(head, 4);
    add_to_list(head, 5);
    //List 2
    add_to_list(head2, 3);
    add_to_list(head2, 2);
    add_to_list(head2, 8);




    cout << "RemoveAfter:\n";
    cout << "Original List:\n";
    print_list(head);
    cout << "\n";
    remove_after(head, 3);
    cout << "Output RemoveAfter List:\n";
    print_list(head);
    cout << "\n" << "///////////////////////////////////////\n";
    ///////////////////////////////////////

    cout << "SimmetricDiff:\n";
    cout << "List 1:\n";
    print_list(head);
    cout << "\n";
    cout << "List 2:\n";
    print_list(head2);
    simmetric_Diff(head, head2, head3);
    cout << "\n";
    cout << "Answer:\n";
    print_list(head3);


    cout << "\n" << "///////////////////////////////////////\n";
    add_to_list(head4, 5);
    add_to_list(head4, 5);
    add_to_list(head4, 5);
    add_to_list(head4, 5);
    add_to_list(head4, 5);
    cout << "RemoveAfter:\n";
    remove_after(head4, 5);
    print_list(head4);

    return 0;
}