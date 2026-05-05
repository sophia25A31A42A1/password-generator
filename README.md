# 🔐 Password Generator (C++)

A simple and efficient command-line password generator written in C++.
It allows users to create random passwords with customizable options like uppercase letters, lowercase letters, numbers, and symbols.

---

## 🚀 Features

* Generate passwords of any length
* Customizable character sets:

  * Uppercase letters (A–Z)
  * Lowercase letters (a–z)
  * Numbers (0–9)
  * Symbols (!@#$%^&*)
* Lightweight and fast
* Beginner-friendly implementation

---

## 🛠️ Tech Stack

* C++
* Standard Libraries:

  * `<iostream>`
  * `<string>`
  * `<cstdlib>`
  * `<ctime>`

---

## ▶️ Getting Started

### 1. Compile

```bash id="v3t7p1"
g++ password.cpp -o password
```

### 2. Run

```bash id="w9c8qs"
./password
```

---

## 📌 Example

```id="j8t2qp"
==== Password Generator ====
Enter password length: 12
Include uppercase letters? (y/n): y
Include lowercase letters? (y/n): y
Include digits? (y/n): y
Include symbols? (y/n): n

Generated Password: Kd9Lm2QaZxP1
```

---

## ⚠️ Disclaimer

This project uses `rand()` for randomization, which is not suitable for generating secure passwords in real-world applications. It is intended for learning purposes only.

---

## 💡 Future Improvements

* Use `<random>` for stronger randomness
* Add input validation
* Build a GUI version
* Export passwords to a file

---

## 📂 Project Structure

```id="k3v6mn"
password-generator-cpp/
│── password.cpp
│── README.md
```

---

## 🙌 Author
HELEN SOPHIA
