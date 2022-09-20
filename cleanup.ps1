#This script removes all testing txt files.

Param(
    [array]$fTBD = @("diff", "output", "input", "test_input", "test_output")
)

try{
    Foreach ($fileName in $fTBD){
        if(Test-Path -Path $PSScriptRoot\$filename.txt){
            del $PSScriptRoot\$filename.txt
        } else {
            echo "$filename.txt does not exist."
        }
            
    }

}catch{
    $error
    $error.clear()
    "
    ERROR!
    
    Correct Usage => .\cleanup.ps1 (TO delete default files)
                     .\cleanup.ps1 <filename> to delete any txt file
    "
}