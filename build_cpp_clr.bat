rmdir /s /q build_x64
rmdir /s /q build_arm64
rmdir /s /q MyCSharpApp\obj
rmdir /s /q MyCSharpApp\bin_x64
rmdir /s /q MyCSharpApp\bin_arm64

mkdir build_x64
cd build_x64
cmake ..
cmake --build . --config Release

cd ..
mkdir build_arm64
cd build_arm64
cmake .. -A arm64
cmake --build . --config Release

cd ..
cd MyCSharpApp
dotnet build -a x64 -o bin_x64\Release\net8.0 -c Release
echo D | xcopy bin_x64\Release\net8.0 ..\build_x64\pkg_csharp /s /e /h

rmdir /s /q obj
rmdir /s /q bin_x64

dotnet build -a arm64 -o bin_arm64\Release\net8.0 -c Release
echo D | xcopy bin_arm64\Release\net8.0 ..\build_arm64\pkg_csharp /s /e /h
rmdir /s /q obj
rmdir /s /q bin_arm64

cd ..
