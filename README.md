# Iniciando con lenguaje C

## Preparar el entorno
* Para trabajar con C, el codigo necesita ser compilado
En mi caso que tengo Windows use --> MinGW - MSYS2
[https://www.mingw-w64.org]
[https://www.msys2.org/]

* Luego hay que configurar las variables de entorno, agregando al path la ruta del bin

* El IDE que utilizo es VS Code
Agrego las extensiones C/C++ y Code Runner

* Tambien se puede hacer por consola mediante comandos
  - Asi para compilar, esto me genera un archivo .exe:
    **gcc introduccion/unPocoMas.c -o introduccion/unPocoMas**

  - Asi para ejecutar el archivo .exe:
    **introduccion/unPocoMas.exe**

  Aclaración: le agrego introduccion antes del nombre de mi archivo porque es ahi donde se creo el mismo, es decir, la ruta donde se encuentra

* Pero para asegurarme que se genere correctamente la compilación, agrego la consola **MSYS2 UCRT64** entre las opciones de VS Code
  - Me dirijo a las siguientes opciones en mi IDE --> File → Preferences → Settings
  - Busco "terminal profiles windows" y abro el archivo .json
  - Busco la anotación "terminal.integrated.profiles.windows" y agrego lo siguiente:
  - "MSYS2 UCRT64": {
      "path": "C:\\msys64\\usr\\bin\\bash.exe",
      "args": ["--login", "-i"],
      "env": {
        "MSYSTEM": "UCRT64",
        "CHERE_INVOKING": "1"
      }
    }