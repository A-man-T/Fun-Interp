a = 10

fun x() {
    print(a)
    a = 5
    print(a)
}

fun y(a, x) {
    print(x())
    print(x)
    print(a)
    a = 7
    print(a)
    return a
}

y(6, 10)
a = y(a, a)
print(a)

fun z(b) {
    while(b == 7 || b == 8) {
        if(b != 7) {
            return b
        }
        b = b + 1
    }
    a = 1
}

print(z(7))
print(a)
print(z(9))
print(a)