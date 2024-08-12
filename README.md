# Rust and C++ DLL Example

This repository demonstrates how to create a DLL using Rust and use it in a C++ application. The example includes steps for building the DLL with Rust and integrating it with a C++ project.

## Creating the DLL with Rust

1. **Create a new Rust library project:**

   ```sh
   cargo new test_dll --lib

2. **Modify Cargo.toml to specify the crate type:**
   ```sh
   [lib]
   name = "my_library"
   crate-type = ["cdylib"]


3. **Build the DLL:**
   ```sh
   cargo build --release

Place the my_library.dll file and the corresponding my_library.lib file (generated during the build) in your C++ project directory or in a location accessible to your project. This will generate a DLL file in target/release/ (e.g., my_library.dll on Windows).

If you are using an IDE like Visual Studio, make sure to define the library in the project properties. Go to Properties -> Linker -> Input, and add my_library.lib to the Additional Dependencies field.

 Now we move to the c++ side import the lib and dll files into the file and build and run main.cpp


   

