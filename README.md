# Welcome to repositorium about learning C i C++

### Worth mentioning:
###### GCC Part:
In order to work comfy you need to adjust code runner in vscode. <br />
Here is little script made in power bash of win 10. <br />
Yyou need to add this line to executor map of code runner. <br />
```"c": "cd $dir && if ('$fileName' -eq 'main.c') {gcc -I$workspaceRoot\\00_my_lib\\ $workspaceRoot\\00_my_lib\\*.c *.c -o $fileNameWithoutExt} else {gcc -I$workspaceRoot\\00_my_lib\\ $workspaceRoot\\00_my_lib\\*.c $fileName -o $fileNameWithoutExt} &&  $dir$fileNameWithoutExt"```

This adds a place for gcc to look for header files. <br />
```-I$workspaceRoot\\00_my_lib\\```

This adds all files to compilation (however you could probably, be ok with using *.o files) . <br />
This is added to compilation because of practical reasons, so you don't have to think about adding *.o files after making changes in my_lib.c functions . <br />
```$workspaceRoot\\00_my_lib\\*.c ```

###### VSCode part:
To have visual studio code working with such a weird path of compilation you need to modify c_cpp_properties.json to have sth like this. <br />
Without this you will have redline underscored under #include. <br />
```
"includePath": [
    "${workspaceFolder}/**",
    "${workspaceFolder}/00_my_lib"
],
```