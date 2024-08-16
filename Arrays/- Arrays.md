## Arrays

```c++
// Creates an array of 100 integers stored on the stack
int arr[100];

// Creates an array of 100 Car objects stored on the stack
Car cars[100];
```

## Dynamic Arrays

```c++
// Creates an array of 100 integers stored on the heap
int* arr = new int[100];

// Delete heap memory arr
delete []arr;


// Creates an array of 100 Car objects stored on the heap
Car* cars = new Car[100];

// Delete heap memory arr2
delete []cars;
```

