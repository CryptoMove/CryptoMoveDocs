List specific key’s all versions with authentication
=====================================================

**POST**: /v1/user/secret/version_list

Required informations
----------------------

* Auth0 access token
* Key name

UI Request signature
----------------------

::

	{
		"email" : "adsfasdf@gmail.com",
		"Key_name": "kai_wang1"
	}

Successful Response Signature
-------------------------------

Request header: 
Authorization: id_token from Auth0

::

	{
		"keys": [
        	{
            	"classification": "top",
            	"description": "A default secret",
           		"expiration_time": "Sun, 21-Oct-2018 15:01:10 GMT",
           		"last_saved_time": "Oct 11 15:01:11 2018",
            	"version": "1"
        	}
    	],
    	"status": "success"
	}

Error Response return
-----------------------

::

	{
		"status": "error",
		"message": "Failed to get the key list."
	}