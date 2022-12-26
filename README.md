# mini-programs
Some practising programms written in CPP...

## Dependencies
- A Cpp capable comiler of your liking, I used GCC.

## Building
**Disclaimer**: Due to me liking performance programms, I compiled the Cpp prgramms in this prject with the `-march=native` compiler parameter by default.
This might cause problems on your PC, especially on pre-Zen3 ones.

Consider recompiling on your own - I garanet it won't take long :)

>Just `cd` into a directory & run the following command:
```bash
g++ -std=c++20 -march=native -O3 -fuse-ld=mold -ggdb -pedantic-errors -Wall -Wextra -Weffc++ -Wsign-conversion -Wshadow -I ./headers main.cpp prime_number_test.cpp -o <prime_number_test>.o
```
