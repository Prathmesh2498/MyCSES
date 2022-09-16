Param(
      [string]$pn = "new_problem"
)


try {
   Add-Content -path "E:\Coding_projects\c++\CSES Problem Set\solutions\$pn.cpp" -Value (Get-Content "E:\Coding_projects\c++\CSES Problem Set\template.cpp")

   echo "Created new problem!"
} catch {
   $error

   "
   ERROR! Did you pass the fine name correctly?

   Correct Usage => .\makeProb.ps1 -pn <file_name> (without extension .cpp!)

   " 
}