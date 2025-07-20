class Shop:
    shopping_mall = 'Jamuna'

    def __init__(self, buyer):
        self.buyer = buyer
        self.carts = []
    def add_cart(self, cart):
        self.carts.append(cart)


moon = Shop('mo on')
moon.add_cart('milk')
moon.add_cart('egg')
    
print(moon.carts)
    
   
   



    

