ROBOCOPY /s ..\clang ..\llvm\tools\clang
mkdir msvc\generated
cd msvc\generated
cmake -G "Visual Studio 14" ..\..\..\llvm

