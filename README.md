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

## **🚀 Build and Run the Project**
### **🔹 Step 1: Create a Build Directory**
CMake recommends **out-of-source builds**. This keeps your source files clean.
```sh
mkdir build
cd build
```

### **🔹 Step 2: Generate Build Files with CMake**
Run CMake inside the `build/` directory:
```sh
cmake ..
```
This will generate the necessary **Makefiles**.

### **🔹 Step 3: Compile the Code**
Now, compile the project using `make`:
```sh
make
```
After compilation, the executable `GroupDriver` will be created inside the `build/` directory.

### **🔹 Step 4: Run the Program**
Execute the compiled binary:
```sh
./GroupDriver
```

---

## **📌 CMake Build Options**
### **🔹 Build in Debug Mode**
For debugging purposes, build the project in `Debug` mode:
```sh
cmake -DCMAKE_BUILD_TYPE=Debug ..
make
```

### **🔹 Clean and Rebuild**
If you need to **rebuild the project from scratch**, run:
```sh
rm -rf build/
mkdir build && cd build
cmake ..
make
```

---

## **📌 Directory Structure**
```
group-class-implementation/
│── build/                   # Compiled binaries and CMake output
│── include/                 # Header files
│   ├── Group/
│   ├── Group.h              # Group class declaration
│── src/                     # Source code
│   ├── Group/
│   ├── Group.cpp            # Group class definition
│   ├── main.cpp             # Main driver file
│── CMakeLists.txt           # CMake configuration
│── README.md                # Project documentation
│── .gitignore               # Git ignore rules
```

---

## **📌 Example Usage**
### **🔹 Sample Code (`main.cpp`)**
```cpp
#include "Group/Group.h"
#include <iostream>

int main() {
    // Example group operations
    int sizeZ2 = 2;
    int** cayleyTableZ2 = new int*[sizeZ2];
    for (int i = 0; i < sizeZ2; ++i) {
        cayleyTableZ2[i] = new int[sizeZ2]{ (i + 0) % 2, (i + 1) % 2 };
    }

    Group Z2(cayleyTableZ2, sizeZ2);
    std::cout << "Identity of Z2: " << Z2.getIdentity() << std::endl;

    // Clean up
    for (int i = 0; i < sizeZ2; ++i) delete[] cayleyTableZ2[i];
    delete[] cayleyTableZ2;

    return 0;
}
```
### **🔹 Expected Output**
```
Identity of Z2: 0
```

---

## **📌 Troubleshooting**
### **🔹 "Undefined symbols" or "Linker errors"**
- Ensure **all required functions are defined** in `Group.cpp`.
- Try **rebuilding** the project:
  ```sh
  rm -rf build/
  mkdir build && cd build
  cmake ..
  make
  ```

### **🔹 CMake not found**
Install CMake:
```sh
sudo apt install cmake    # Ubuntu/Debian
brew install cmake        # macOS
choco install cmake       # Windows
```

---

## **📌 License**
This project is licensed under the **MIT License**.

---

## **📌 Contributing**
1. Fork the repository.
2. Create a new feature branch (`git checkout -b feature-name`).
3. Commit changes (`git commit -m "Added new feature"`).
4. Push the branch (`git push origin feature-name`).
5. Open a Pull Request.

---

## **📌 Contact**
For any questions or suggestions, feel free to reach out!
