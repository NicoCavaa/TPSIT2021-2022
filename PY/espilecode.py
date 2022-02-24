import PilaCoda as pc

coda = pc.Coda()
coda1 = pc.Coda()
pila = pc.Pila()
cnt = 0

while True:
    elemento = input("Inserisci elemento: ")
    cnt = cnt+1
    coda.enqueue(elemento)

    if input("vuoi continuare?[s/n]: ") == "n":
        break

coda.print()

for x in range(cnt):
    pila.push(coda.dequeue())

    
for k in range(cnt):
    coda1.enqueue(pila.pop())

coda1.print()

    