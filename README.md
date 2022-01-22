# Welcome to repositorium about learning C i C++

### Worth mentioning:
###### GCC Part:
in odrder to work comfy you need to adjust code runner in vscode
here is little script made in power bash of win 10
you need to add this line to executor map of code runner
```"c": "cd $dir && if ('$fileName' -eq 'main.c') {gcc -I$workspaceRoot\\00_my_lib\\ $workspaceRoot\\00_my_lib\\*.c *.c -o $fileNameWithoutExt} else {gcc -I$workspaceRoot\\00_my_lib\\ $workspaceRoot\\00_my_lib\\*.c $fileName -o $fileNameWithoutExt} &&  $dir$fileNameWithoutExt"```

this adds a place for gcc to look for header files
```-I$workspaceRoot\\00_my_lib\\```

this adds all files to compilation (however you could probably, be ok with using *.o files)
this is added to compilation because of practical reasons, so you don't have to think about adding *.o files after making changes in my_lib.c functions
```$workspaceRoot\\00_my_lib\\*.c ```

###### VSCode part:
to have visual studio code working with such a weird path of compilation you need to modify c_cpp_properties.json to have sth like this
without this you will have redline underscored under #include
```
"includePath": [
    "${workspaceFolder}/**",
    "${workspaceFolder}/00_my_lib"
],
```