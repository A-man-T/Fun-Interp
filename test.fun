
fun test(local, variables, should, be, scoped, correctly) {
    return 0
}

fun main() {
    return test(1, 1, 1, 1, 1, 1) == 1
}

rc = main()
print(rc)

