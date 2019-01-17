User sign up to a database as input parameter
=============================================

**POST**: /v1/user/server/signup-dev

Required informations:
-----------------------

* Email
* Password
* Connection
* Beta code

UI Request signature
---------------------

::

	{
		"email": "testing@cryptomove.com",
    	“password”: “111111”,
        “connection”: “cm-test”,
        "beta_code": "Pl6cwCjJ"
	}

Successful Response Signature 200
-----------------------------------

::

	{
		"status": "success"
	}

Error Response
--------------------------

* Error code and error message from Auth0