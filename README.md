# Gragle: A Custom Web Browser for Windows 🔥

**Gragle** is a lightweight web browser built from scratch for the Windows operating system. This project is developed using **Visual Studio Code (VS Code)** and leverages modern, high-performance libraries for networking, security, and graphics rendering.

---

## 🛠️ Tech Stack & Dependencies

The project is built using the following core technologies:
* **libcurl (v8.22.0):** Handles all networking, HTTP requests, and data transfers.
* **OpenSSL (v3.4.16):** Provides robust security layers and SSL/TLS encryption.
* **SDL3:** Used for window management, input handling, and modern hardware-accelerated graphics rendering (Note: This project explicitly uses **SDL3**, not the older SDL2).

---

## ⚙️ Compilation & Build Toolchain

This project is tailored specifically for the GCC toolchain on Windows:
* **Compiler:** **MinGW (GCC)** is used exclusively to compile the source code.
* **Note:** This project is optimized for MinGW. Compiling with `clang++` is explicitly not supported or preferred for this setup.

---

## 📂 Project Structure

Below is the directory layout of the Gragle browser project:

```text
D:\browser\
├── include/
│   ├── BrowserApp.hpp
│   ├── HtmlParser.hpp
│   └── LayoutEngine.hpp
└── src/
    ├── main.cpp
    ├── BrowserApp.cpp
    ├── HtmlParser.cpp
    └── LayoutEngine.cpp
```

* **`include/`**: Contains all header files (`.hpp`) defining the structures and classes for the browser modules.
* **`src/`**: Contains the main entry point (`main.cpp`) and the core source code implementation files (`.cpp`).
