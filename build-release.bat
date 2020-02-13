set PATH=%PATH%;C:\Program Files (x86)\Microsoft Visual Studio\2019\Professional\MSBuild\Current\Bin\amd64
msbuild.exe -p:Configuration=Debug-Static -p:Platform=x64 %cd%\msvc15\apr.vcxproj
msbuild.exe -p:Configuration=Debug-Static -p:Platform=x64 %cd%\msvc15\xml.vcxproj
msbuild.exe -p:Configuration=Debug-Static -p:Platform=x64 %cd%\msvc15\aprutil.vcxproj
msbuild.exe -p:Configuration=Debug-Static -p:Platform=x64 %cd%\msvc15\log4cxx.vcxproj
msbuild.exe -p:Configuration=Release-Static -p:Platform=x64 %cd%\msvc15\apr.vcxproj
msbuild.exe -p:Configuration=Release-Static -p:Platform=x64 %cd%\msvc15\xml.vcxproj
msbuild.exe -p:Configuration=Release-Static -p:Platform=x64 %cd%\msvc15\aprutil.vcxproj
msbuild.exe -p:Configuration=Release-Static -p:Platform=x64 %cd%\msvc15\log4cxx.vcxproj
rm log4cxx-142-static.zip
7z a -tzip log4cxx-142-static.zip log4cxx-wrap/log4cxx log4cxx-wrap/*.lib log4cxx-wrap/*.md log4cxx-wrap/*.h log4cxx-wrap/*.vcxitems
