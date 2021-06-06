#define BITSPERWORD 32
#define MASK 0x1F
#define SHIFT 5
#define N 10000000

int a[1 + N/BITSPERWORD];

void set(int i) {
    a[i>>SHIFT] |= (1<<(i & MASK));
}

void clr(int i) {
    a[i>>SHIFT] &= ~(1<<(i & MASK));
}

int test(int i) {
    return a[i>>SHIFT] & (1<<(i & MASK));
}

