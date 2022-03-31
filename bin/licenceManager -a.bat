@echo off
mode con:cols=100 lines=20
:boucle

path C:\Users\probo\Desktop\c_utilities_tools\licence_manager_src\bin\minGW\bin


echo .-.    _                                 .-..-.            
echo : :   :_;                                : `' :                                     
echo : :   .-. .--.  .--. ,-.,-. .--.  .--.   : .. : .--.  ,-.,-. .--.   .--.  .--. .--. 
echo : :__ : :'  ..'' '_.': ,. :'  ..'' '_.'  : :; :' .; ; : ,. :' .; ; ' .; :' '_.': ..'
echo :___.':_;`.__.'`.__.':_;:_;`.__.'`.__.'  :_;:_;`.__,_;:_;:_;`.__,_;`._. ;`.__.':_;  
echo                                                                     .-. :           
echo                                                                     `._.'           by. Bilaal#7175
echo:
echo:

cd "C:\Users\probo\Desktop\c_utilities_tools\licence_manager_src"
gcc *.c -o licenceManage

if not exist licenceManage color 4
if exist licenceManage color a
licenceManage a

pause >nul
del licenceManage
cls

goto boucle