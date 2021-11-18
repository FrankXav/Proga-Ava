import os 
contenido = os.listdir('SDL2-2.0.16/lib/x64')
print(contenido)

dll = "si"

for i in contenido:
	if dll == "si":
		archivo=i
		tamañonom = len(archivo)
		if archivo[(tamañonom-4):tamañonom] == ".dll":
			print(f'SDL2-2.0.16/lib/x64/{i}', end = " ")

