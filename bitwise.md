# Bitwise Operators in Embedded Systems

In embedded systems, understanding how to manipulate **bits** is crucial. Computers understand only binary (1s and 0s), so as embedded engineers, we must master bit-level manipulation to interact with **registers**, **queues**, **flags**, and other low-level hardware resources.

---

##  Why Bitwise Operators?

Bitwise operators allow us to:
- Check the **status** of individual bits (e.g., register flags)
- **Set**, **clear**, or **toggle** bits
- Optimize memory usage
- Control hardware directly via memory-mapped registers

---

##  Bitwise Operators in C

| Operator | Symbol | Use Case                     |
|----------|--------|------------------------------|
| AND      | `&`    | Check if a bit is set, clear a bit |
| OR       | `\|`   | Set a bit                    |
| XOR      | `^`    | Toggle (invert) a bit         |
| NOT      | `~`    | Invert all bits              |
| Left Shift | `<<` | Shift bits to the left       |
| Right Shift | `>>` | Shift bits to the right     |

---

##  AND (`&`) Operator


The **AND** (`&`) operator returns `1` only if **both bits are 1**; otherwise, it returns `0`.

Usage in embedded system
- checks is the status bit is high or not
- clears the status bit to update the status.
- 
##  AND Operator Truth Table

| A (bit) | B (bit) | A & B |
|---------|---------|--------|
|   0     |   0     |   0    |
|   0     |   1     |   0    |
|   1     |   0     |   0    |
|   1     |   1     |   1    |


Used to **check** or **clear** specific bits.



### Example 1: Check if a Bit is Set

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
```
###  Example 2: clearing a specific bit in a number
```c
#include<stdio.h>

void display(int);

int main(){
        int num,pos;
        printf("enter the number\n");
        scanf("%d",&num);
        printf("enter the position\n");
        scanf("%d",&pos);
        printf("entered number :%d\t",num);
        display(num);
        num=num&~(1<<pos);
        printf("number after clearing the %d bit in %d\t",pos,num);
        display(num);
}

void display(int x){
        for(int i=31;i>=0;i--){
                if(x&(1<<i))
                        printf("1");
                else
                        printf("0");
                if(i%8==0)
                        printf(" ");
        }
        printf("\n");
}
```
##  OR (`|`) Operator

##  OR Operator Truth Table

The **OR** (`|`) operator returns `1` if **at least one bit is 1**; otherwise, it returns `0`.

| A (bit) | B (bit) | A \| B |
|---------|---------|--------|
|   0     |   0     |   0    |
|   0     |   1     |   1    |
|   1     |   0     |   1    |
|   1     |   1     |   1    |

usage  in embedded system
- update the status bit to high (1) after the modification.

### program to clear specific bit in a number

```c

#include<stdio.h>

void display(int x);

int main(){
        int num,pos;
        printf("enter the number\n");
        scanf("%d",&num);
        printf("enter the position\n");
        scanf("%d",&pos);
        printf("entered number :%d\t",num);
        display(num);
        num=num|(1<<pos);
        printf("number after setting %d pos bit is %d\n",pos,num);
        display(num);
}

void display(int num){
        for(int i=31;i>=0;i--){
                if(num&(1<<i))
                        printf("1");
                else
                        printf("0");
                if(i%8==0)
                        printf(" ");
        }
        printf("\n");
}
```
###  Bit Fields in C - Key Points

1. **Definition**:  
   Bit fields allow struct members to be allocated with a specific number of bits, enabling memory-efficient representation of data with limited range.

2. **Usage**:  
   Declared inside a `struct` using the syntax:  
   `unsigned int flag : 1;`  
   This allocates only 1 bit for the `flag` variable.

3. **Use Cases**:  
   - Hardware register mapping  
   - Flags/status registers  
   - Memory-constrained applications (e.g., embedded systems)


### program to understand bit filed usage

```c

#include<stdio.h>

struct field{
        unsigned int x : 2;
        unsigned int y : 3;
        unsigned int z : 4;
}s1;

int main()
{
        struct field s1;
        printf("%d is the size of stucure \n",sizeof(s1));
        s1.x=1;
        s1.y=5;
}
```
