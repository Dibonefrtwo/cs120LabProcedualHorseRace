# cs120LabProcedualHorseRace
BSU CS 121 course: lab 3

# Algorithm 
include libraries needed. 

declare functions

main function. 
 create horse position array. 
 define keepGoing as true 
 while keepGoing
  for horse in horse position array
   Advance function (horse number int, horse position from array.)
   print lane function (horse number int, horse position from array.) 
   results = iswinner function(horse number int, horse position from array.) 
   if results = true 
    keepGoing is set to false 
   print( press enter for another turn)

  
 
end function

advance function (horse number int, horse position from array) 
 create int named coin 
 random function that returns either 1 or 0 and assigns it to coin
 get value at horse position array(indexed by horse number) and add coin 

end function. 


print lane function (horse number int, horse position from array.)
 define keepGoing as true 
 define trackSize as an int that gets the value of 15
 while keepgoing
  for i in tracksize, 
   if i == horse position 
    print "horse number"
  else
   print ". "
print new line 
return

end function 

iswinner function(horse number int, horse position from array) 
 results is set to false 
 define tracksize as 15 
 if horse position is greater than tracksize 
  print "HORSE " horse number "IS A WINNER!"
  results is set to true
 else 
  return results



 
