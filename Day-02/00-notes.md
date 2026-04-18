# OOP

## 🧠 Basic OOP Concepts

* **Class** → Blueprint of an object
* **Object** → Instance of a class
* **Instantiation** → Creating an object

### 🔑 Members

* **Data Members** → Variables inside class
* **Member Functions** → Functions inside class

---

## 🏛️ OOP Pillars

* **Encapsulation** → Hide data using `private`, expose via `public` methods
* **Inheritance** → Acquire properties from base class
* **Polymorphism** → Same interface, different behavior

---

## 🔐 Access Specifiers

* **private** → Accessible only inside class
* **protected** → Accessible in derived class
* **public** → Accessible everywhere

---

## ⚙️ Constructors

### ✅ Definition

* Special function called automatically when object is created
* Same name as class

---

### 🧩 Types

#### 1. Default Constructor

```cpp
Person() { }
```

#### 2. Parameterized Constructor

```cpp
Person(string name) { }
```

---

### ⚠️ Important Rules

* If you define **any constructor**, C++ **won’t create default automatically**
* To restore default:

```cpp
Person() = default;
```

---

## 🧬 Inheritance

```cpp
class Employee : public Person
```

* Employee = **Derived class**
* Person = **Base class**

---

## 🔥 Constructor Execution Order

> ✅ **Base class constructor runs first**

```cpp
Employee e("Sai","Prasad");
```

Execution:

1. `Person(...)`
2. `Employee(...)`

---

## 🚨 Common Problem

```cpp
class Person {
public:
    Person(string name) { }
};

class Employee : public Person {
public:
    Employee() { }
};
```

❌ Error because:

* `Person()` (default) does NOT exist
* Only `Person(string)` exists

---

## ✅ Fix

```cpp
Employee() : Person("Sai") { }
```

✔ Explicitly calling base constructor

---

## 🔄 When It Works Automatically

```cpp
Person() { }
```

Then:

```cpp
Employee() { }
```

✔ C++ calls `Person()` automatically

---

## 💡 Key Insight

> **Derived class does NOT skip base constructor — it chooses WHICH one to call**

---

## 🧠 Special Case

```cpp
Person(string name = "Sai");
```

✔ Acts like default constructor

```cpp
Person(); // becomes Person("Sai")
```

---

## 🔁 Polymorphism (Runtime)

### ✅ Virtual Function

```cpp
class Person {
public:
    virtual void printName() {
        cout << "Hello";
    }
};
```

### ✅ Override

```cpp
class Employee : public Person {
public:
    void printName() override {
        cout << "Hello world";
    }
};
```

### ✅ Runtime Behavior

```cpp
Person* p = new Employee();
p->printName();  // Calls Employee version
```

---

## 🎯 Final Takeaways

* ✅ Base constructor always executes first
* ❗ No default constructor → must call explicitly
* ✅ `virtual` → enables runtime polymorphism
* ✅ `override` → ensures correct overriding

---

## 🧾 One-Line Summary

> **“Base class is always constructed first; derived class decides how.”**
