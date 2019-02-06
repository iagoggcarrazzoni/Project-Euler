# gerar lista de numeros primos

lista = []

def geraP(num):
    i = 0
    j = 0
    aux = 0
    while i < num:
        primo = 0
        aux += 1
        for j in range(aux, 0, -1):
            if aux % j == 0:
                primo += 1
        if primo == 2:
            lista.append(aux)
        # o iterador dentro do if torna a lista em num numeros primos, enquanto fora fica ate num
        i += 1
def imprime():
    print(lista)
            
numero = int(input('digite um numero para a lista: '))

geraP(numero)
imprime()

#####################################
# orientada a objeto
# gerar lista de numeros primos
lista = []

class NumeroPrimo():
    def __init__(self):
        print('classe feita')
    def geraP(self, num):
        i = 0
        j = 0
        aux = 0
        while i < num:
            primo = 0
            aux += 1
            for j in range(aux, 0, -1):
                if aux % j == 0:
                    primo += 1
            if primo == 2:
                lista.append(aux)
            # o iterador dentro do if torna a lista em num numeros primos, enquanto fora fica ate num
            i += 1
    def imprime(self):
        print(lista)
            

prime = NumeroPrimo()
