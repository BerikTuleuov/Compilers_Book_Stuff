@echo off
set "PerlDir=Programs\Strawberry-Perl-5.32.1.1"

; set PATH=%~dp0perl\site\bin;%~dp0perl\bin;%~dp0c\bin;%PATH%
set PATH=%~d0\%PerlDir%\perl\site\bin;%~d0\%PerlDir%\perl\bin;%~d0\%PerlDir%\c\bin;%PATH%