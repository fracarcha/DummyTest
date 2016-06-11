// El siguiente bloque ifdef muestra la forma estándar de crear macros que facilitan 
// la exportación de archivos DLL. Todos los archivos de este archivo DLL se compilan con el símbolo DUMMYTEST_EXPORTS
// definido en la línea de comandos. Este símbolo no debe definirse en ningún proyecto
// que use este archivo DLL. De este modo, otros proyectos cuyos archivos de código fuente incluyan el archivo 
// interpretan que las funciones DUMMYTEST_API se importan de un archivo DLL, mientras que este archivo DLL interpreta los símbolos
// definidos en esta macro como si fueran exportados.
#ifdef DUMMYTEST_EXPORTS
#define DUMMYTEST_API __declspec(dllexport)
#else
#define DUMMYTEST_API __declspec(dllimport)
#endif

// Clase exportada de DummyTest.dll
class DUMMYTEST_API DummyTest_class {
public:
	DummyTest_class(void);
	void DummyTest_imprime_desde_clase(void);
};

//exportar función solitaria
DUMMYTEST_API void DummyTest_imprime(void);
