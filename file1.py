class Dog:
    # This is a constructor for the class. It is called whenever a Dog object is created.
    # The reference called 'self' is created by Python, and is made to point to the space already created by the object. 
    # Python does it automatically but we have to declare 'self' as the first parameter to the __init__ method.
    def __init__(self, name, month, day, year, speakText):
        self.name = name
        self.month = month
        self.day = day
        self.year = year
        self.speakText = speakText

    #  This is an accessor method that returns the speakText stored in the object. 
    #  Notice that "self" is a parameter. Every method has "self" as it's first parameter 
    #  The "self" parameter is a reference to the current object. 
    #  The current object appears on the left hand side of the dot (i.e. the .)
    #  when the method is called.
    def speak(self):
        return self.speakText
    
    #  Here is an accessor method to get the name 
    def getName(self):
        return self.name
    
    #  This is another accessor method that uses the birthday information to return a string representing the date.
    def birthDate(self):
        return str(self.month) + " / " + str(self.day) + " / " + str(self.year)

    #  This is a mutator method that changes the speakText of the Dog object
    def changeBark(self, bark):
        self.speakText = bark

    def __add__(self, otherDog):
        return Dog("Puppy of " + self.name + " and " + otherDog.name, 0, 0, 0, self.speakText + " " + otherDog.speakText)