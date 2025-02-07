# **Group Class Implementation**
This project implements a **C++ group algebra system** that supports:
- **Direct sum (`+` operator)** for group combination.
- **Isomorphism checking (`==` operator)** to determine if two groups are structurally equivalent.
- **Basic group operations** (identity, inverses, element operations).

This project uses **CMake** to manage builds and generate cross-platform Makefiles.

---

## **📌 Getting Started**
### **🔹 Prerequisites**
Ensure you have the following installed:
- **CMake** (version 3.31 or higher)
- **GNU Make** (or an equivalent build system)
- **A C++ compiler (GCC, Clang, or MSVC)**

### **🔹 Clone the Repository**
```sh
git clone https://github.com/your-username/group-class-implementation.git
cd group-class-implementation
```

---

## **Build and Run the Project**
### **Step 1: Create a Build Directory**
CMake recommends **out-of-source builds**. This keeps your source files clean.
```sh
mkdir build
cd build
```

### Step 2: Generate Build Files with CMake**
Run CMake inside the `build/` directory:
```sh
cmake ..
```
This will generate the necessary **Makefiles**.

### **Step 3: Compile the Code**
Now, compile the project using `make`:
```sh
make
```
After compilation, the executable `GroupDriver` will be created inside the `build/` directory.

### **Step 4: Run the Program**
Execute the compiled binary:
```sh
./bin/GroupDriver
```


### **Clean and Rebuild**
If you need to **rebuild the project from scratch**, run:
```sh
rm -rf build/
mkdir build && cd build
cmake ..
make
```

## **📌 Contact**
For any questions or suggestions, feel free to reach out!
