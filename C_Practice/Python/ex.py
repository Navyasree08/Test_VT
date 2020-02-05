

# This program shows various identities 
str1 = "geek"
print(id(str1)) 
  
str2 = "geek"
print(id(str2)) 
  
# This will return True 
print(id(str1) == id(str2)) 
  
# Use in Lists 
list1 = ["aakash", "priya", "aakash"] 
print(id(list1[0])) 
print(id(list1[1])) 
print(id(list1[2])) 
  
# This returns false 
print(id(list1[0])==id(list1[2])) 

