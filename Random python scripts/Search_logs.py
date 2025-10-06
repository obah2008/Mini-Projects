import os

directory = os.getcwd()

filename = input(f"Enter a file name in the {directory} directory: ")

not_found = True
keyword = input("Enter a piece of text to look for: ")
with open(filename, "r") as file:
   for line in file:
       if keyword in line:
           print(line)
           not_found = False

if not_found == True:
    print(f"{keyword} not found in {filename}")
