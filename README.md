# 🛠️ C++ Multi-Tool CLI Utility

A modular, high-performance command-line utility application built in modern C++. This project was developed to transition from basic syntax to professional software engineering standards, focusing on clean architecture, modular header structures, and robust algorithmic logic.

---

## 🚀 Features & Modules

* ⚖️ **BMI Calculator**: Computes Body Mass Index using precise double-precision height and weight inputs.
* 🔍 **Prime Number Checker**: Optimized primality testing using square-root limit boundary logic to avoid unnecessary iterations.
* 📊 **Statistical Calculator**: Calculates **Mean**, **Median**, and **Mode** over dynamic data sets with automated sorting algorithms.
* 🔐 **Text Encryptor / Decryptor**: A custom character-transformation cipher for basic string encryption and decryption.
* 🖥️ **Interactive CLI Menu**: Persistent user navigation loop featuring structured control flow and state management.

---

## 📁 Project Architecture

The application is structured modularly, separating core mathematical and algorithmic utility logic into dedicated header files:

```text
├── main.cpp                 # Entry point, interactive menu loop, and user stream handling
├── bmi_utils.hpp            # BMI calculation formula logic
├── prime_checker_utils.hpp  # Algorithmic primality testing
├── statistical_calc_utils.hpp# Data analysis algorithms (mean, median, mode)
└── encrypt_decrypt_utils.hpp# Text cipher and decryption logic
