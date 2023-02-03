print(!0)
print(!!0)
print(1==1)
print(1==2)
print(1<2)
print(2<1)
print(1>2)
print(2>1)
print(1<=1)
print(1<=2)
print(2<=1)
print(1>=1)
print(1>=2)
print(2>=1)
print(1!=1)
print(1!=2)
fun testWhileLoop(y){
    while(y<10){
        print(y)
        y = y + 1
    }
}
testWhileLoop(5)
x = 12739172839
print(x)
fun testScopingAndRecursion(x){
    if(x<10){
        return 1
    }
    print(x)
    return testScopingAndRecursion(x-1)
}
print(testScopingAndRecursion(15))
print(x)