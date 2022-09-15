Param(
   [string]$FileName = "problem.cpp"
)

Add-Content -path "E:\Coding_projects\c++\CSES Problem Set\$FileName.cpp" -Value (Get-Content "E:\Coding_projects\c++\CSES Problem Set\template.cpp")

echo "Created new problem!"