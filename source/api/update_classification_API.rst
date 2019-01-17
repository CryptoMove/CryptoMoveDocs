Update a key’s version classification
======================================

**POST**: /v1/user/key/update_classification

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
		“status”: “error”,
    	“message”: “Failed to update classification.”
	}