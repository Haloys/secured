# README for Secured Project

## Introduction

Welcome to the Secured Project, an advanced venture into the realm of hash tables. This project is dedicated to the development of a custom hash function and the creation of a robust hash table for secure data management. It's especially tailored for efficiently handling a large number of entries.

## Features

- **Custom Hash Function**: Implement your own hash function, designed for your specific data requirements.
- **Hash Table Management**: Learn to create, manage, and utilize a hash table for efficient data storage and retrieval.
- **Comprehensive Data Management**: Use functions like `ht_insert`, `ht_search`, `ht_delete`, and `ht_dump` for effective data handling.
- **Efficient Large Data Handling**: Optimized for managing vast volumes of data, ensuring quick and secure data processing.

## Installation and Usage

1. Clone the repository:

```bash
git clone git@github.com:Haloys/secured.git
cd secured
```

2. Compile the project:

```
make
```

3. Create your main program file (e.g., main.c):

```c
#include "secured.h"

int main(void)
{
    // Create a new hash table
    hashtable_t *ht = new_hashtable(hash, 4);

    // Insert data into the hash table
    ht_insert(ht, "UniqueKey1", "Value1");
    ht_insert(ht, "UniqueKey2", "Value2");

    // Search for a specific entry
    printf("Looking for \"%s\": \"%s\"\n", "UniqueKey1", ht_search(ht, NULL));

    // Delete an entry
    ht_delete(ht, "UniqueKey1");

    // Dump the entire hash table to view its contents
    ht_dump(ht);

    // Delete the hash table when done
    delete_hashtable(ht);
    return 0;
}
```

4. Compile your program with the library:

```bash
gcc -o hash main.c -L. -lhashtable
```

5. Run your program:

```bash
./hash
```