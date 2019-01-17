Update a key’s version expiration date
========================================

**POST**: /v1/user/secret/update_expiration

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
    	"Key_version": "2"
    	"expiration_time": 100(days)
	}

Successful Response Signature
-------------------------------

::

	{
		"expiration": "Sun, 09-Dec-2018 17:53:14 GMT",
    	"key_name": "kai_wang2",
    	"status": "success"

	}

Error Response return
----------------------

::

	{
		"status": "error",
    	"message”: "Failed to delete the key."
	}