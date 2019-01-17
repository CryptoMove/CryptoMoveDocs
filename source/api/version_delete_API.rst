Delete a key’s specific version
================================

**POST**: /v1/user/key/version_delete

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
-------------------------------

::

	{
		"key_name": "kai wang2",
		"key_status": "deleted",
		"key_version": "1",
		"status": "success"
	}

Error Response return
----------------------

::

	{
		“status”: “error”,
		“message”: “Failed to delete the key.”
	}