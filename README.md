# Multiplication-Table
## Using loops and iomanip library, create a multiplication table with user input.

-

```
cout << setw(3) << " ";
    for (firstRow = 1; firstRow <= c; firstRow++) {
        cout << setw(3) << firstRow;
    }
    cout << endl;
    // Table
    for (firstRow = 1; firstRow <= r; firstRow++) {
        cout << setw(3) << firstRow;
        for (firstCol = 1; firstCol <= c; firstCol++) {
                cout << setw(3) << firstRow * firstCol;
        }
        cout << endl;
    }
```


![alt text](image.jpg)
