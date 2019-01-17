Update a key’s version expiration date
========================================

**POST**: /v1/user/key/update_expiration

Required informations
----------------------

* The tokenId of auth0 user
* Key name
* Key version

UI Request signature
----------------------

::

	{
		"email": "kai02@cryptomove.com",
    	"key_name":"kai_wang2",
    	“Key_version”: “2”
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
		“status”: “error”,
    	“message”: “Failed to delete the key.”
	}