#  Parcial 1 — Estructuras de Datos

Proyecto académico desarrollado en **lenguaje C** para poner en práctica los conceptos de programación y estructuras de datos mediante módulos relacionados con contenedores y ordenamiento.

##  Descripción del proyecto

Este proyecto corresponde al primer parcial de la asignatura **Estructuras de Datos**. El código se encuentra organizado en diferentes archivos para separar el programa principal, la gestión de contenedores y las operaciones de ordenamiento.

El propósito de esta organización es facilitar la lectura, el mantenimiento y la comprensión del código, aplicando buenas prácticas de programación modular.

##  Tecnologías utilizadas

- **Lenguaje:** C
- **Compilador:** GCC / MinGW
- **Entorno de ejecución:** Windows
- **Control de versiones:** Git
- **Repositorio:** GitHub

##  Estructura del proyecto

```text
Parcial1_EstructurasDatos/
│
├── main.c
├── contenedores.c
├── contenedores.h
├── ordenamiento.c
├── ordenamiento.h
├── evidencias/
├── puerto.exe
└── README.md
```

###  Descripción de los archivos

| Archivo | Descripción |
|---|---|
| `main.c` | Contiene el punto de entrada del programa. |
| `contenedores.c` | Implementa las funciones relacionadas con los contenedores. |
| `contenedores.h` | Declara las funciones y estructuras compartidas del módulo de contenedores. |
| `ordenamiento.c` | Contiene la implementación de las operaciones de ordenamiento. |
| `ordenamiento.h` | Declara las funciones correspondientes al módulo de ordenamiento. |
| `evidencias/` | Carpeta destinada a las evidencias del desarrollo y ejecución. |
| `puerto.exe` | Ejecutable compilado para Windows. |

##  Requisitos

Para compilar y ejecutar el proyecto desde el código fuente necesitas:

- Un computador con Windows o un entorno compatible.
- Un compilador de C, como GCC.
- Una terminal de comandos, como PowerShell o CMD.

##  Cómo ejecutar el proyecto

### 1. Clonar el repositorio

```bash
git clone https://github.com/AnaRios24/Parcial1_EstructurasDatos.git
```

### 2. Entrar a la carpeta

```bash
cd Parcial1_EstructurasDatos
```

### 3. Compilar el código fuente

Si tienes GCC instalado, ejecuta:

```bash
gcc main.c contenedores.c ordenamiento.c -o puerto.exe
```

### 4. Ejecutar el programa

En PowerShell:

```powershell
.\puerto.exe
```

También puedes ejecutar el archivo `puerto.exe` directamente en Windows si es compatible con tu sistema.

##  Conceptos trabajados

El proyecto está organizado alrededor de los siguientes temas:

- Programación modular en C.
- Organización del código mediante archivos `.c` y `.h`.
- Separación entre declaraciones e implementaciones.
- Gestión de contenedores.
- Operaciones de ordenamiento.
- Compilación y ejecución de programas en C.
- Uso de Git y GitHub para el control de versiones.

##  Evidencias

Las evidencias del proyecto se encuentran organizadas en la carpeta `evidencias/`.

Estas pueden utilizarse para documentar la ejecución del programa y mostrar los resultados obtenidos durante las pruebas.

##  Contexto académico

**Asignatura:** Estructuras de Datos  
**Actividad:** Parcial 1  
**Tipo de proyecto:** Aplicación de consola desarrollada en C.

##  Autoría

Proyecto académico publicado en GitHub para organizar y documentar el desarrollo del parcial.

---

*Desarrollado como ejercicio práctico de programación y estructuras de datos.*