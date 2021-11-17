# Deux pages à développé :
	-Lors d'une commande
		Ajout d'une page avec l'équipe qui gère les commandes afin de permettre le choix de l'utilisateur
		de choisir le livreur de son choix en fonction du pays de livraison, afficher les délais de 
		livraison.
	
	-Interface d'administration
		Liste des transporteurs disponibles, et ajout possible
		Voir les status d'envoi / d'exports et pouvoir annuler les expéditions


# Condition requise pour l'envoi d'une commande :
Article(s) commandé(s) doivent être en stock
Compte utilisateur
	(
	Pays d'expedition
	Adresse
	Nom Prenom
	)


Interface :
	A voir avec le design choisi par l'équipe qui gère les commandes, mais dans l'idée, une liste avec tous les
	transporteurs dispo, une parti d'infos en fonction du transporteur sélectionné, et un bouton de validation.

	Dans l'inferface d'administration,
	Une sorte de tableau avec les colonnes :
		-N° de commande
		-Poids du colis
		-Transporteur choisi
		-Adresse de destination
		-Date de livraison estimé
		-Bouton pour la suppresion d'expédition

Stockage :
	Base de donnée


# Fichier d'entrée
A voir avec les gestionnaires des commandes

# Fichier de sortie
|  order_nb   |  transporter_id  |  schedule_time  |  address  |  client_id  |
| :---------: | :--------------: |  :-----------:  |  :-----:  |  :-------:  |
|   Content   |      Content     |     Content     |  Content  |   Content   |