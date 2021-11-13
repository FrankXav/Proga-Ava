import subprocess as subp

#subp.run(["ls"])


# git checkout "nombre rama" para cambiar de rama 


alternativa = input("Desea subir cambios a git (sgit) o actualizar repositorio(bgit): ")

if (alternativa == "sgit"):

	resp1 =  input("Agrego algun archivo nuevo?: (si o no)  ")

	comentario = input("Comentario del nuevo commit: ")

	nomrama = input("Nombre de la rama actual: ")

	if (resp1 == "si"):
		subp.run(["git", "add", "."])

	subp.run(["git", "commit", f'-am {comentario}'])  #f'commit -am "{comentario}"'

	subp.run(["git",'push','origin',nomrama])

	print("Cambios Actualizados")
else:

	nomrama = "Nombre de la rama con la que desea actualizar: "

	subp.run(["git", "merge", "origin", nomrama])