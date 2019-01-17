User reset password to production database:
============================================

**POST**: /v1/user/resetpassword-dev

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
		"We've just sent you an email to reset your password."
	}