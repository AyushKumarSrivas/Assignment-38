list

1. List functions in C++ STL (Standard Template Library)
2. Assign the elements to the list (different methods) - Example of list::assign() | C++
STL
3. Iterate a list C++ STL
4. Iterate a list in reverse order C++ STL
5. Input and add elements to a list C++ STL
6. Get the first and last element of the list C++ STL
7. Insert the element at beginning and end of the list | C++ STL
8. Remove all occurrences of an element and remove set of some specific from the list
C++ STL
9. Remove all consecutive duplicate elements from the list | C++ STL
10. Merge two lists C++ STL
11. Creating a list by assigning the all elements of another list C++ STL
12. Assign a list with array elements C++ STL
13. Push characters in a list and print them separated by space in C++ STL
14. Access elements of a characters list using const_iterator in C++ STL

Solution:-

1. List Functions in C++ STL
The std::list in C++ STL provides various functions such as:

Modifiers: assign, push_front, push_back, pop_front, pop_back, insert, erase, swap, resize, clear
Operations: remove, remove_if, unique, merge, sort, reverse
Element Access: front, back
Capacity: empty, size, max_size

2. #include <iostream>
#include <list>

int main() {
    std::list<int> lst1;
    std::list<int> lst2;
    std::list<int> lst3;

    // Using assign with a specific value
    lst1.assign(5, 10); // 5 elements with value 10

    // Using assign with a range from another list
    lst2 = {1, 2, 3, 4, 5};
    lst3.assign(lst2.begin(), lst2.end());

    std::cout << "lst1 elements: ";
    for (const auto& elem : lst1) {
        std::cout << elem << " ";
    }
    std::cout << "\nlst3 elements: ";
    for (const auto& elem : lst3) {
        std::cout << elem << " ";
    }
    std::cout << std::endl;

    return 0;
}

3. #include <iostream>
#include <list>

int main() {
    std::list<int> lst = {1, 2, 3, 4, 5};

    std::cout << "List elements: ";
    for (const auto& elem : lst) {
        std::cout << elem << " ";
    }
    std::cout << std::endl;

    return 0;
}

4. #include <iostream>
#include <list>

int main() {
    std::list<int> lst = {1, 2, 3, 4, 5};

    std::cout << "List elements in reverse: ";
    for (auto it = lst.rbegin(); it != lst.rend(); ++it) {
        std::cout << *it << " ";
    }
    std::cout << std::endl;

    return 0;
}

5. #include <iostream>
#include <list>

int main() {
    std::list<int> lst;
    int n, element;

    std::cout << "Enter the number of elements: ";
    std::cin >> n;

    for (int i = 0; i < n; ++i) {
        std::cout << "Enter element " << i + 1 << ": ";
        std::cin >> element;
        lst.push_back(element);
    }

    std::cout << "List elements: ";
    for (const auto& elem : lst) {
        std::cout << elem << " ";
    }
    std::cout << std::endl;

    return 0;
}

6. #include <iostream>
#include <list>

int main() {
    std::list<int> lst = {1, 2, 3, 4, 5};

    std::cout << "First element: " << lst.front() << std::endl;
    std::cout << "Last element: " << lst.back() << std::endl;

    return 0;
}

7. #include <iostream>
#include <list>

int main() {
    std::list<int> lst = {1, 2, 3};

    lst.push_front(0);
    lst.push_back(4);

    std::cout << "List elements after insertion: ";
    for (const auto& elem : lst) {
        std::cout << elem << " ";
    }
    std::cout << std::endl;

    return 0;
}

8. #include <iostream>
#include <list>

int main() {
    std::list<int> lst = {1, 2, 3, 2, 4, 2, 5};

    // Remove all occurrences of 2
    lst.remove(2);

    std::cout << "List elements after removing all 2s: ";
    for (const auto& elem : lst) {
        std::cout << elem << " ";
    }
    std::cout << std::endl;

    // Remove specific elements using remove_if
    lst.remove_if([](int x) { return x % 2 == 0; });

    std::cout << "List elements after removing even numbers: ";
    for (const auto& elem : lst) {
        std::cout << elem << " ";
    }
    std::cout << std::endl;

    return 0;
}

9. #include <iostream>
#include <list>

int main() {
    std::list<int> lst = {1, 2, 2, 3, 4, 4, 5};

    lst.unique();

    std::cout << "List elements after removing consecutive duplicates: ";
    for (const auto& elem : lst) {
        std::cout << elem << " ";
    }
    std::cout << std::endl;

    return 0;
}

10. #include <iostream>
#include <list>

int main() {
    std::list<int> lst1 = {1, 2, 3};
    std::list<int> lst2 = {4, 5, 6};

    lst1.merge(lst2);

    std::cout << "Merged list: ";
    for (const auto& elem : lst1) {
        std::cout << elem << " ";
    }
    std::cout << std::endl;

    return 0;
}

11. #include <iostream>
#include <list>

int main() {
    std::list<int> lst1 = {1, 2, 3, 4, 5};
    std::list<int> lst2(lst1);

    std::cout << "List 2 elements: ";
    for (const auto& elem : lst2) {
        std::cout << elem << " ";
    }
    std::cout << std::endl;

    return 0;
}

12. #include <iostream>
#include <list>

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    std::list<int> lst;

    lst.assign(arr, arr + sizeof(arr) / sizeof(arr[0]));

    std::cout << "List elements from array: ";
    for (const auto& elem : lst) {
        std::cout << elem << " ";
    }
    std::cout << std::endl;

    return 0;
}

13. #include <iostream>
#include <list>

int main() {
    std::list<char> lst;

    lst.push_back('a');
    lst.push_back('b');
    lst.push_back('c');

    std::cout << "Character list elements: ";
    for (const auto& elem : lst) {
        std::cout << elem << " ";
    }
    std::cout << std::endl;

    return 0;
}

14. #include <iostream>
#include <list>

int main() {
    std::list<char> lst = {'a', 'b', 'c'};

    std::cout << "Character list elements: ";
    for (std::list<char>::const_iterator it = lst.cbegin(); it != lst.cend(); ++it) {
        std::cout << *it << " ";
    }
    std::cout << std::endl;

    return 0;
}
