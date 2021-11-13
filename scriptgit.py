import subprocess as subp

#subp.run(["ls"])

resp1 = "si"#input("Agrego algun archivo nuevo?: (si o no)  ")

comentario = "Agrego script python"#input("Comentario del nuevo commit: ")

nomrama = "frankrama"#input("Nombre de la rama actual: ")

if (resp1 == "si"):
	subp.run(["git", "add", "."])

subp.run(["git", "commit", f'-am {comentario}'])  #f'commit -am "{comentario}"'

subp.run(["git","push",f'origin {nomrama}'])

print("Cambios Actualizados")