Upload file API
==================

**POST**: /v1/user/upload

Required informations
----------------------

* The tokenId of auth0 user
* Werkzeug FileStorage object

UI Request signature
-----------------------

::

	FormData(“file”: Werkzeug FileStorage object, “email” : “adsfasdf@gmail.com”)

Successful Response Signature
-------------------------------

::

	{
		“status”: “success”,
		“filename”: “alsdkfj.ext”
	}

Error Response return
-----------------------

::

	{
		“status”: “error”,
		“message”: “Failed to protect file.”
	}