################################################################################################################################################################################

def ordena_altura3(lista):

    for j in range(len(lista), 0, -1):
        for i in range(1,j,1):
            if lista[i-1][1] > lista[i][1]:
                lista[i], lista[i - 1] = lista[i - 1], lista[i]

    return lista

################################################################################################################################################################################

f = open("NOMES.txt", "r")

lista = []
nome,altura = 0,0

for i in f.readlines():
    nome,altura = i.split(",")
    altura = int(altura)
    lista.append([nome, altura])

lista = ordena_altura3(lista)

for i in lista:
    print(i)


##NÃO BASTA ORDENAR, TEM QUE SALVAR
fo = open("NOMES_ordenado.txt", "w")
for i in lista:
    nome = i[0]
    altura = i[1]
    print(nome,',',altura, file=fo)

##NOVO TXT PARA NÃO PERDER O TXT ORIGINAL



