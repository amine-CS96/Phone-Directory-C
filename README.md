
# Phone Directory — Console-Based Contact Management System in C

This C program is a command-line application that manages a phone directory. It allows users to add, search, modify, display, and delete contacts stored dynamically. The contacts are managed using a dynamic array or linked list, practicing dynamic memory allocation and modular programming with separate source and header files.

---

## Features

* Initialize an empty phone directory with a fixed maximum size (100 entries).
* Add a new contact with a name and a phone number (stored as an array of digits).
* Search for a contact by phone number and display the associated name.
* Display the total number of contacts stored.
* Count occurrences of a phone number in the directory.
* Remove duplicates of a phone number (single or all duplicates).
* Modular code design with separate compilation (`.c` and `.h` files).
* Interactive menu-driven console interface.

---

## Project Structure

```
Phone-Directory-C/
├── include/
│   └── phone_directory.h          # Header file with type definitions and function prototypes
├── src/
│   ├── main.c                     # Main program with interactive menu and user interaction
│   └── phone_directory.c          # Implementation of phone directory functions
└── README.md                      # This documentation file

```

---

## How to Compile

To compile the project, use the following gcc command from the root folder:

```bash
gcc main.c phone_directory.c -o phone_directory
```

---

## How to Run

After compiling, run the executable:

```bash
./phone_directory
```

You will see a menu with options like:

1. Add a new contact
2. Show number of contacts
3. Search for a contact by phone number
4. Count occurrences of a phone number
5. Remove first occurrence of a phone number
6. Remove second occurrence of a phone number
7. Remove all duplicates of a phone number
8. Display all contacts
9. Quit

Follow on-screen instructions to use the program.


## Data Structures

```c
typedef struct {
    char nom[50];
    char numero[20];
} Personne;

typedef struct Node {
    Personne contact;
    struct Node *next;
} Node;
```

---

## Example Contact Display

```
Contact 1:
 Name  : John Doe
 Number: +212 600 123 456
--------------------------
Contact 2:
 Name  : Alice Smith
 Number: +1 555 987 654
--------------------------
```

---

## Highlights & Learning Outcomes

* Use of dynamic memory allocation to manage contacts.
* Implementation of linked lists or dynamic arrays.
* Modular design separating interface and logic.
* File handling for persistent storage.
* Menu-driven user interface for ease of use.
* Basic string operations and data validation.

---

## Limitations & Future Improvements

* Add input validation (e.g., phone number format).
* Implement case-insensitive search.
* Support for multiple phone numbers per contact.
* Add sorting and filtering options.
* Develop a GUI or web-based interface.
* Encrypt saved contact data for privacy.

---

## License

This project is licensed under the MIT License — you are free to use, copy, modify, merge, publish, and distribute the software, provided that the original author is credited and the license notice is included in all copies or substantial portions of the software.

See the [LICENSE](LICENSE) file for full details.


---
