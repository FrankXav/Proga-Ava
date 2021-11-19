import os 
contenido = os.listdir('SDL2_image-2.0.5/lib/x64')
print(contenido)

for i in contenido:
	print(f'SDL2_image-2.0.5/lib/x64/{i}', end = " ") 


dll = "si"

'''for i in contenido:
	if dll == "si":
		archivo=i
		tamañonom = len(archivo)
		if archivo[(tamañonom-4):tamañonom] == ".dll":
			print(f'SDL2-2.0.16/lib/x64/{i}', end = " ")'''

