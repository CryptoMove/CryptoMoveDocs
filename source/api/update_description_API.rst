Update a key’s version description
====================================

**POST**: /v1/user/key/update_description

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
		“status”: “error”,
    	“message”: “Failed to update the description.”

	}