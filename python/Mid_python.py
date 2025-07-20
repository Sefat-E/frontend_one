class StudentDatabase:
    student_list = []
    @classmethod
    def add_student(cls, student):
        cls.student_list.append(student)


class Student:
    def __init__(self, student_id, name, department, is_enrolled):
        self.__student_id = student_id
        self.__name = name
        self.__department = department
        self.__is_enrolled = is_enrolled

    def get_student_id(self):
        return self.__student_id

    def get_name(self):
        return self.__name

    def get_department(self):
        return self.__department

    def get_is_enrolled(self):
        return self.__is_enrolled

   
    def enroll_student(self):
        if self.__is_enrolled:
            print("Student is already enrolled.")
            return False
        else:
            self.__is_enrolled = True
            print(f"{self.__name} has been enrolled.")
            return True
    

    # def enroll_student(self):
    #     if not self.is_enrolled:
    #         self.is_enrolled = True
    #         return True
    #     return False


    # # def __rep__(self):
    # #     if self.is_enrolled:
    # #         status = "Enrolled"
    # #         return Enrolled

    #     else:
    #         return Not Enrolled
    def drop_student(self):
        if not self.__is_enrolled:
            print("Student is not enrolled.")
            return False
        else:
            self.__is_enrolled = False
            print(f"{self.__name} has been dropped.")
            return True

    def view_student_info(self):
    
        if self.__is_enrolled:
           status = "Enrolled"
        else:
           status = "Not Enrolled"
    
    
        print(f"ID: {self.get_student_id()}, Name: {self.get_name()}, Department: {self.get_department()}, Status: {status}")

    
s1 = Student("1", "John", "CSE", True)
s2 = Student("2", "Adam", "EEE", False)
s3 = Student("3", "Elvin", "BBA", True)
StudentDatabase.add_student(s1)
StudentDatabase.add_student(s2)
StudentDatabase.add_student(s3)
while True:
    print("Select an option:\n"
          "1. View Students\n"
          "2. Enroll Student\n"
          "3. Drop Student\n"
          "4. Exit")
    option = input("Enter your option: ")
    if option == "1":
        for student in StudentDatabase.student_list:
            student.view_student_info()
            # print(f"ID: {student.get_student_id}, Name: {student.get_name}, Department: {student.department}, Enrolled: {student.is_enrolled}")
    elif option == "2":
        student_id = input("Enter student ID: ")
        name = input("Enter student name: ")
        department = input("Enter student department: ")
        is_enrolled_input = input("Is the student enrolled? (yes/no): ")
        if is_enrolled_input.lower() == "yes":
            is_enrolled = True
        else : 
            is_enrolled = False
            

        new_student = Student(student_id, name, department, is_enrolled)
        StudentDatabase.add_student(new_student)
        print(f"Student {name} added successfully.")
        
    

    
    elif option == "3":
        student_id = input("Enter student ID to drop: ")

        flag = False

        for student in StudentDatabase.student_list:
            if student.get_student_id() == student_id:
                flag = True
                student.drop_student()
                break
               
                   
        if not flag:
                print("Student not found.")


                
                
    elif option == "4":
        print("Exit")
        break
    else:
         print("Invalid option. Please try again.")   
            