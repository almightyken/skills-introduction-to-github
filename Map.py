class Student:
    def __init__(self, name, score):
        self.name = name
        self.score = score

students = [Student("Joe", 0.46), Student("Amy", 0.72), Student("Mark", 0.88), Student("Zach", 0.75), Student("Jane", 0.84), Student("Sarah", 0.63)]

student_results = []
for student in students:
    student_results.append(f"{student.name} passed.") if student.score >= 0.70 else student_results.append(f"{student.name} failed.")
    
map_results1 = list(map(lambda student: student.name, students))

map_results2 = list(map(lambda student: f"{student.name} passed." if student.score >= 0.70 else f"{student.name} failed.", students))

print(map_results1)

print(map_results2)

numbers = [1,2,3,4,5]

number_map = list(map(lambda number: number * 2, numbers))

print(number_map)