import requests

class City:

    def __init__(self, name, lat, lon, units="metric"):
        self.name = name
        self.lat = lat
        self.lon = lon
        self.units = units
        self.get_data()

    def get_data(self):
        try:
            response = requests.get(f"https://api.openweathermap.org/data/2.5/weather?units={self.units}&lat={self.lat}&lon={self.lon}&appid=f1be7934fc5de46d9f8ede5643f7e7e1")
        except:
            print("There is NO Internet Connection")
        self.response_json = response.json()

        self.temp = self.response_json["main"]["temp"]
        self.temp_max = self.response_json["main"]["temp_max"]
        self.temp_min = self.response_json["main"]["temp_min"]
        self.weather_des = self.response_json["weather"][0]["description"]
    
    def temp_print(self):
        self.unit_symbol = "C"
        if self.units == "imperial":
            self.unit_symbol = "F"
        print(f"In {self.name} the temperature is {self.temp}°.")
        print(f"Today's High is: {self.temp_max}°{self.unit_symbol}.")
        print(f"Today's Low is: {self.temp_min}°{self.unit_symbol}.")
        print(f'Expect to be/have {self.weather_des} outside!')
        

name = input("Enter a city: ")
lat = input("Enter the Global Latitude: ")
lon = input("Enter the Global Longtitude: ")
units = input("Would you like the temperature in C° or F°? ")

if units == "F":
    units = "imperial"

my_city = City(name, lat, lon, units)
my_city.temp_print()

check1 = input("Would like to confirm the correct information? ")
if check1 == "yes":
    print(my_city.response_json)
else:
    print("OK, have a great day!")
