# The comparison between with and without constexpr

- Compare with and without constexpr
- The maximum number of fibonacci is 34

## Source code

### With

```cpp
constexpr uint64_t fibonacci(int n)
{
        return (n <= 1) ? n : fibonacci(n-1) + fibonacci(n-2);
}

int main ()
{
        // value of res is computed at compile time.
        constexpr uint64_t res = fibonacci(34);
        std::cout << res;
        return 0;
}

```

## Without
```cpp
uint64_t fibonacci(int n)
{
        return (n <= 1) ? n : fibonacci(n-1) + fibonacci(n-2);
}

int main ()
{
        // value of res is computed at compile time.
        uint64_t res = fibonacci(34);
        std::cout << res;
        return 0;
}

```

## Compilation

- The build and run command: g++ -g3 -O3 -fno-inline ./constexpr_compare_01.cpp && time for i in {1..10}; do ./a.out; done

## Compare disassembly

### Without constexpr

```asm
_GLOBAL__sub_I__Z9fibonaccii():
/home/jl/Emsber_git/Basic_Cpp_language/constexpr_compare/constexpr_compare_01.cpp
:14
 8b4:   f9400bf3        ldr     x19, [sp, #16]
__static_initialization_and_destruction_0():
/usr/include/c++/11/iostream:74
 8b8:   d0000082        adrp    x2, 12000 <__data_start>
_GLOBAL__sub_I__Z9fibonaccii():
/home/jl/Emsber_git/Basic_Cpp_language/constexpr_compare/constexpr_compare_01.cpp
:14
 8bc:   a8c27bfd        ldp     x29, x30, [sp], #32
__static_initialization_and_destruction_0():
/usr/include/c++/11/iostream:74
 8c0:   91002042        add     x2, x2, #0x8
 8c4:   f947fc00        ldr     x0, [x0, #4088]
 8c8:   17ffffbe        b       7c0 <__cxa_atexit@plt>
_GLOBAL__sub_I__Z9fibonaccii():
 8cc:   d503201f        nop
 8d0:   d503201f        nop
 8d4:   d503201f        nop
 8d8:   d503201f        nop
 8dc:   d503201f        nop
 8e0:   d503201f        nop
 8e4:   d503201f        nop
 8e8:   d503201f        nop
 8ec:   d503201f        nop
 8f0:   d503201f        nop
 8f4:   d503201f        nop
 8f8:   d503201f        nop
 8fc:   d503201f        nop
```

### With constexpr

- The compiler computes the result value
  - (0x57 << 16) + 1255 = 5702887
  ```asm
  808:   d2809ce1        mov     x1, #0x4e7                      // #1255
  814:   f2a00ae1        movk    x1, #0x57, lsl #16
  ```
  - 

```asm
 804:   90000080        adrp    x0, 10000 <__FRAME_END__+0xf544>
 808:   d2809ce1        mov     x1, #0x4e7                      // #1255
main():

:9
 80c:   910003fd        mov     x29, sp
_ZNSolsEm():
/usr/include/c++/11/ostream:171
 810:   f947ec00        ldr     x0, [x0, #4056]
 814:   f2a00ae1        movk    x1, #0x57, lsl #16
 818:   97ffffe2        bl      7a0 <_ZNSo9_M_insertImEERSoT_@plt>
main():

:14
        // value of res is computed at compile time.
        constexpr uint64_t res = fibonacci(34);
        std::cout << res;
        return 0;
}
 81c:   52800000        mov     w0, #0x0                        // #0
 820:   a8c17bfd        ldp     x29, x30, [sp], #16
 824:   d65f03c0        ret
 828:   d503201f        nop
 82c:   d503201f        nop
```

## Compare execution result

- Without constexpr
```
real    0m0.135s
user    0m0.111s
sys     0m0.017s
```

- With constexpr
```
real    0m0.017s
user    0m0.011s
sys     0m0.005s
```

## Reference
https://www.geeksforgeeks.org/understanding-constexper-specifier-in-cpp/
https://stackoverflow.com/questions/4748083/when-should-you-use-constexpr-capability-in-c11
https://stackoverflow.com/questions/53268118/whats-the-difference-between-mov-movz-movn-and-movk-in-armv8-assembly
