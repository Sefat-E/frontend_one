class Bus :
    def __init__(self, number, route, total_seats):
        self.number = number
        self.route = route
        self.total_seats = int(total_seats)
        self.booked_seats = 0

    def available_seats(self):
        return self.total_seats - self.booked_seats
    
    def book_seats(self):
        if self.available_seats ()> 0 :
            self.booked_seats += 1
            print(f"Seat booked")
        else:
            print("No seats available")
################################################################

class Passenger :
    def __init__(self, passenger_name,passenger_phone,bus_number):
        self.passenger_name = passenger_name
        self.passenger_phone = passenger_phone
        self.bus_number = bus_number
        
##############################################################

# Bus1 = Bus("123", "Route Khulna to Dhaka", 50, 0)

# Passenger1 = Passenger("John Doe", "4567890", Bus1)

class BusSystem:
    buses_list = []   
    passengers_list = []
    def book_ticket(self, bus_number, passenger_name, passenger_phone):
        for  bus in BusSystem.buses_list:
            if bus.number == bus_number:
                # bus.book_seats()
                if bus.book_seats() == True:
                  passenger = Passenger(passenger_name, passenger_phone,bus_number)
                  BusSystem.passengers_list.append(passenger)
                  print("Ticket booked successfully.")
                else:
                  print("No seats available for this bus.")
                  return
    def view_buses(self):
        
        for bus in self.buses_list:
         print(f"Bus Number: {bus.number}, Route: {bus.route}, Total Seats: {bus.total_seats}, Available Seats: {bus.available_seats()}")
        
###################################################################################
class Admin:
    def __init__(self):
        self.username = "admin"
        self.password = "1234"
        self.admin_login = False

    def login(self):
        User = input("Enter username: ")
        Pass = input("Enter password: ")
        if User == self.username  and Pass == self.password :
            self.admin_login = True
            print("Admin login successful.")
        else:
            print("Invalid login.")
    def add_bus(self, number,route,total_seats):
        if self.admin_login:
            buses = Bus(number, route, total_seats)
            BusSystem.buses_list.append(buses)
        else:
            print("Need admin login")
############################################################################    
   

system = BusSystem()
admin = Admin()

    


while True:
    print("Select an option:\n"
          "1. Admin Login\n"
          "2. Book Ticket\n"
          "3. View Buses\n"
          "4. Exit")
    option = input("Enter your option: ")
    if option == "1":
        admin.login()
        if admin.admin_login:
            print("Select an option:\n"
          "1. Add Bus\n"
          "2. View Buses\n"
          "3. Logout")
            admin_option = input("Enter your option: ")
            if admin_option == "1":
                number = input("Enter bus number: ")
                route = input("Enter bus route: ")
                total_seats = int(input("Enter total seats: "))
                admin.add_bus(number,route,total_seats)
                print("Bus added successfully.")
            elif admin_option == "2":
                admin.view_buses()
            elif admin_option == "3":
                admin.admin_login = False
                print("Logged out successfully.")
    elif option == "2":
        print("Ticket prices are 500 BDT.")

        bus_number = input("If you want to book ticket enter bus number: (or type 'exit' to quit) ")
        if bus_number.lower() == 'exit':
            break
        passenger_name = input("Enter passenger name: ")
        passenger_phone = input("Enter passenger phone: ")
        system.book_ticket(bus_number, passenger_name, passenger_phone)
        print("Ticket booked successfully.")
    elif option == "3":
        
        system.view_buses()
    elif option == "4":
        print("Exit")
        break
    else:
         print("Invalid option. Please try again.")   
            

            
                




    
            
        
        
        



    


