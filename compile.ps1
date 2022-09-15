Param(
   [string]$ProgramName
)


if (Test-Path -Path a.exe){
   del a.exe
}


g++ -std=c++11 -O2 -Wall $ProgramName -o a

echo "Compiled Successfully!"