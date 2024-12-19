#include <iostream>
#include <list>
#include <iterator> // for std::advance

void printList(const std::list<int>& lst) {
    for (int val : lst) {
        std::cout << val << " ";
    }
    std::cout << std::endl;
}

int main() {
    // Creating a doubly linked list
    std::list<int> myList;

    // Inserting elements
    myList.push_back(10);  // Insert at the end
    myList.push_back(20);
    myList.push_front(5);  // Insert at the beginning

    std::cout << "Initial List: ";
    printList(myList);

    // Inserting an element in the middle
    auto it = myList.begin();
    std::advance(it, 1); // Move iterator to the second position
    myList.insert(it, 15);
    std::cout << "After Inserting 15: ";
    printList(myList);

    // Removing an element
    it = myList.begin();
    std::advance(it, 2); // Move iterator to the third position
    myList.erase(it);
    std::cout << "After Removing Third Element: ";
    printList(myList);

    // Sorting the list
    myList.push_back(2);
    myList.push_back(50);
    myList.sort();
    std::cout << "After Sorting: ";
    printList(myList);

    // Reversing the list
    myList.reverse();
    std::cout << "After Reversing: ";
    printList(myList);

    // Size of the list
    std::cout << "Size of the List: " << myList.size() << std::endl;

    return 0;
}
