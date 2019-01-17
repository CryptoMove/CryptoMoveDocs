Delete key API with Authentication 
(Delete key will delete all versions)
======================================

**POST**: /v1/user/secret/delete

Required informations
----------------------------------------

* Auth0 access token
* Email
* Key name

UI Request signature
---------------------

::

	Request header: 
	Authorization: id_token from Auth0

	{
   		"email" : "adsfasdf@gmail.com",
		"key_name" : "test name"
	}

Successful Response Signature
-------------------------------

::

	{
		"status": "success",
    	"key_name": "test name",
    	"key_status": "deleted"
	}

Error Response return
------------------------

::

	{
		"status": "error",
		"message": "Failed to restore the key."
	}