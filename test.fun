fun Comment(This, testcase, tests, recursion, along, with, variableScoping, and, naming, functions, and2, variables, the, same, thing) {}

fun recur2() {
    recur2 = recur
    while(recur2) {
      print(recur2)
      recur2 = recur2-1
    }
}

fun recur(recur) {
    if(recur == 8) {
      return recur
    }
    
    if(recur%2) {
      print(recur)
      recur(recur-1)
    }
    else {
      recur2()
      recur(recur-1)
   }
}

recur = 50
recur = recur(recur)
print(recur)