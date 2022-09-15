Param(
   [string]$ProgramName = "problem.cpp"
)

Add-Content -path "E:\Coding_projects\c++\CSES Problem Set\solutions\$ProgramName.cpp" -Value (Get-Content "E:\Coding_projects\c++\CSES Problem Set\template.cpp")

echo "Created new problem!"