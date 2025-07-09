# Bitwise Operators in Embedded Systems

In embedded systems, understanding how to manipulate **bits** is crucial. Computers understand only binary (1s and 0s), so as embedded engineers, we must master bit-level manipulation to interact with **registers**, **queues**, **flags**, and other low-level hardware resources.

---

## 🧠 Why Bitwise Operators?

Bitwise operators allow us to:
- Check the **status** of individual bits (e.g., register flags)
- **Set**, **clear**, or **toggle** bits
- Optimize memory usage
- Control hardware directly via memory-mapped registers

---

## 🔧 Bitwise Operators in C

| Operator | Symbol | Use Case                     |
|----------|--------|------------------------------|
| AND      | `&`    | Check if a bit is set, clear a bit |
| OR       | `\|`   | Set a bit                    |
| XOR      | `^`    | Toggle (invert) a bit         |
| NOT      | `~`    | Invert all bits              |
| Left Shift | `<<` | Shift bits to the left       |
| Right Shift | `>>` | Shift bits to the right     |

---

## ✅ AND (`&`) Operator

Used to **check** or **clear** specific bits.



### ✅ Example 1: Check if a Bit is Set

```c
#include<stdio.h>

void display(int);

int main(){
    int num, pos;
    printf("Enter the number:\n");
    scanf("%d", &num);
    printf("Entered number: %d\t", num);
    display(num);

    printf("Enter the position:\n");
    scanf("%d", &pos);

    if ((num & (1 << pos)))
        printf("%d bit in %d is set\n", pos, num);
    else
        printf("%d bit in %d is not set\n", pos, num);

    return 0;
}

void display(int num){
    for (int i = 31; i >= 0; i--){
        if (num & (1 << i))
            printf("1");
        else
            printf("0");
        if (i % 8 == 0)
            printf(" ");
    }
    printf("\n");
}

