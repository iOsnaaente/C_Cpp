import requests
class BuscaUniverdidades:

    def __init__(self, Univ ):
        self.Univ = Univ

    url = "https://api.tomtom.com/search/2/search/%s.json?countrySet=BR&idxSet=POI&key=oHKgeY1zn67af789y0KWfrA1z5hjhSrf" % self.Univ
    data = requests.get(url).json()

    def getAllInfo(self):
        return data

    def getLongitude(self):
        return data["results"][0]["position"]['lon']

    def getLatitude(self):
        return data["results"][0]["position"]["lat"]

    def getNome(self):
        return data['results'][3]['poi']['name']

    def getCidade(self):
        return data['results'][0]["address"]["municipality"]

    def infos(self):
        retur

    def testSearch(self):
        try:
            aux = locLatiLongUniv(self.Univ)
            print("Universidade %s Localizada" %self.Univ)
        except:
            print("Universidade %s não encontrada" %self.Univ)


if __name__ == "__main__":

    ufsm = BuscaUniverdidades("UFSM")

    print(ufsm.getNameCityUniv())
