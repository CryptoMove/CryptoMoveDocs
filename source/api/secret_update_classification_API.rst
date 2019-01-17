Update a key’s version classification with authenticaion
==========================================================

**POST**: /v1/user/secret/update_classification

Required informations
----------------------

* Auth0 access token
* Key name
* Key version

UI Request signature
----------------------

Request header: 
Authorization: id_token from Auth0

::

	{
		"email": "kai02@cryptomove.com",
    	"key_name":"kai_wang3",
    	"Classification":"sec"
	}

Successful Response Signature
-------------------------------

::

	{
		"description": "sec",
    	"key_name": "kai_wang3",
    	"status": "success"
	}

Error Response return
----------------------

::

	{
		"status": "error",
    	"message": "Failed to update classification."
	}