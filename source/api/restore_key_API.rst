Restore key API
=================

**POST**: /v1/user/key/expose

Required informations (To be finalized)
-----------------------------------------

* The tokenId of auth0 user
* Key name
* Key value

UI Request signature
---------------------

::

	{
		“email” : “adsfasdf@gmail.com”,
		“key_name” : “test name”,
	}

Successful Response Signature
------------------------------

::

	{
		“status”: “success”,
		“key-name”: “test name”,
		“key_value”: “key value”
	}

Error Response return
-----------------------

::

	{
		“status”: “error”,
		“message”: “Failed to restore the key.”
	}