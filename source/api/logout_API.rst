User logout
=============

**POST**: /v1/user/key/logout

Required informations:
-----------------------

* Email

UI Request signature
---------------------

::

	{
		"email": "testing@cryptomove.com",
	}

Successful Response Signature 200
-----------------------------------

::

	{
		"status": "success"
	}