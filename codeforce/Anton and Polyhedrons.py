n = int(input())
t = 0
for i in range(n):
     s = input()
     if s == "Tetrahedron":
          t = t+4
     if s == "Cube":
          t = t+6
     if s == "Octahedron":
          t = t+8
     if s == "Dodecahedron" :
          t = t+12
     if s == "Icosahedron" :
          t = t+20
print(t)
