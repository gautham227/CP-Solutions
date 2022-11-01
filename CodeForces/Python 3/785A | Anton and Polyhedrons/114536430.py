n=int(input())
q=0
for i in range(0,n):
    s=str(input())
    if s=="Tetrahedron":
        q=q+4
    elif s=="Cube":
        q=q+6
    elif s=="Octahedron":
        q=q+8
    elif s=="Dodecahedron":
        q=q+12
    else:
        q=q+20
print(q)