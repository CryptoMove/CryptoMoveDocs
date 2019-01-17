Update a key’s version description with authentication
=======================================================

**POST**: /v1/user/secret/update_description

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
    	"key_name":"kai_wang2",
    	"description":"I just want to try",
    	"key_version": 5
	}

Successful Response Signature
-------------------------------

::

	{
		"description": "aldsfjladskjfldaksjflkda",
    	"key_name": "kai_wang2",
    	"status": "success"
	}

Error Response return
----------------------

::

	{
		"status": "error",
    	"message": "Failed to update the description."
	}