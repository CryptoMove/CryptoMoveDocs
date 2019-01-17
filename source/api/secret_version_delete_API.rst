Delete a key’s specific version with authentication
====================================================

**POST**: /v1/user/secret/version_delete

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
		"email" : "adsfasdf@gmail.com",
		"key_name": "kai_wang1",
		"key_version": "1"
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