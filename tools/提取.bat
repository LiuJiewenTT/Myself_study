
for /d %%i in (*) do (
   @echo %%i
   cd %%i
   copy balloons\balloons.cpp balloons.cpp
   copy permutation\permutation.cpp permutation.cpp
   copy step\step.cpp step.cpp
   cd..
   pause	
)
pause