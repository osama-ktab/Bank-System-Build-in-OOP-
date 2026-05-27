# Bank-System-Build-in-OOP-

# Bank System (OOP)

A comprehensive, console-based **Bank Management System** built using **C++** and strict **Object-Oriented Programming (OOP)** principles. This project showcases advanced architectural design, decoupling of logic, and clean code practices through user management, client banking operations, and a built-in currency exchange system.

## 🚀 Features

### 👥 Client & User Management
* **Secure Login System:** Supports multiple user roles with full permission management (Permissions Matrix) and tracks login history (`clsLoginRegisterScreen`).
* **Full CRUD Operations:** Add, update, delete, and find clients (`clsBankClient`) and system users (`clsUser`).
* **Person/User Inheritance:** Demonstrates standard OOP inheritance (`clsPerson` ➡️ `clsUser` / `clsClient`).

### 💰 Transactions & Core Banking
* **Deposits & Withdrawals:** Quick, validated financial operations with real-time balance updates.
* **Total Balances:** Instantly calculate and view total assets held in the bank.
* **Internal Transfers:** Securely transfer funds between accounts with complete transaction logging (`clsTransferLogScreen`).

### 💱 Currency Exchange System
* **Live Exchange Menu:** A dedicated subsystem to manage currency conversions (`clsCurrencyExchangeMainScreen`).
* **Currency Database:** Fetch, list, and update international currency rates (`clsCurrency`).
* **Currency Calculator:** Seamlessly calculate exchange rates between different global currencies.

### 🛠️ Technical Highlights (OOP & Architecture)
* **Encapsulation & Abstraction:** Deep separation of concerns using highly cohesive classes.
* **Input Validation:** Centralized robust validation utility class (`clsInputValidate`) to handle secure terminal inputs and eliminate crashes.
* **UI Layering:** Modular screen architecture where each functionality maps to a specific screen class (e.g., `clsMainScreen`, `clsTransactionsScreen`), maintaining clean console rendering.

---

## 💻 Tech Stack
* **Language:** C++
* **Paradigm:** Object-Oriented Programming (OOP)
* **IDE:** Visual Studio
