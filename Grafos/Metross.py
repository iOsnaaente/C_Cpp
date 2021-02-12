# -*- coding: utf-8 -*-

def Nomes(File):
    File.seek(0)
    for i in File.readlines():
        nomes = i.split(",")
        break
    return nomes[1:]


def Matr(File):
    File.seek(0)
    Matriz = []
    Norma = True
    for i in File.readlines():
        aux = i.split(",")
        if Norma is not True:
            Matriz.append(aux[1:])
        Norma = False
    return Matriz

def imdex(Nome, lista):
    return lista.index(Nome)

def Dist(Origem, Destino, File):
    nomes = Nomes(File)
    matriz = Matr(File)
    Origem = nomes.index(Origem)
    Destino = nomes.index(Destino)
    return matriz[Origem][Destino]

def Grafo(Partida, File, Visitados=[]):

    Est = Nomes(File)
    Dis = Matr(File)
    Aux = 0
    Distancias = []

    for i in range(len(Dis)):
        if Dis[Est.index(Partida)][i] >= 0 and Est[i] not in Visitados:
            Visitados.append(Est[i])
            Aux = Aux + Grafo(Est[i], File, Visitados) + 1
            Distancias.append([Aux, Visitados])

    return Distancias






