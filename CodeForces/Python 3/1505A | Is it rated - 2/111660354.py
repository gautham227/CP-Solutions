try:
    while True:
        i=str(input())
        if i=="Is it rated?":
            print("NO")
        else:
            break
except EOFError:
    pass