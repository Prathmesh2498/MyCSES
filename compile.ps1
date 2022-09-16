Param(
   [string]$pn
)

try {

if (Test-Path -Path a.exe){
   del a.exe
}


g++ -std=c++11 -O2 -Wall $PSScriptRoot\solutions\$pn.cpp -o a

echo "Compiled Successfully!"

} catch {
   $error

   "
   ERROR! Did you pass the fine name correctly?
   
   Correct Usage => .\compile.ps1 -pn <file_name> (without extension .cpp!)
   
   Make sure that the file exists!
   "
}