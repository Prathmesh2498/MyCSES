Param(
   [string]$pn,
   [string]$ft="none"
   [string]$df="none"
)

try {

if (Test-Path -Path a.exe){
   del a.exe
}
echo $ft
if($ft -eq "withfile" -and $df -eq "debugfile"){
   echo "Running with file"
   g++ -std=c++11 -Wall $PSScriptRoot\solutions\$pn.cpp -O2 -static -s -lm -DOFILE_TEST -DEBUG_FILE
}
else {
   g++ -std=c++11 -O2 -Wall $PSScriptRoot\solutions\$pn.cpp -o a
}


echo "Compiled Successfully!"

} catch {
   $error
   $error.clear()
   "
   ERROR! Did you pass the fine name correctly?
   
   Correct Usage => .\compile.ps1 -pn <file_name> -ft withfile -df debugfile (without extension .cpp!)

   withfile and debugfile are flags for reading from file and creating a output file and checking against correct output.
   Download correct output before proceeding.
   
   Make sure that the file exists!
   "
}