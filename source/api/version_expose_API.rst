Get a key’s specific version secret
====================================

**POST**: /v1/user/key/version_expose

Required informations
----------------------

* The tokenId of auth0 user
* Key name
* Key version

UI Request signature
----------------------

::

	{
		“email” : “adsfasdf@gmail.com”,
		“key_name”: “kai_wang1”,
		“key_version”: “1”
	}

Successful Response Signature
------------------------------

::

	{
		"key_name": "kai_wang1",
		"key_value": "kai01adsfadsf",
		"key_version": "1",
		"status": "success"
	}

Error Response return
----------------------

::

	{
		“status”: “error”,
		“message”: “Failed to get the key version.”
	}