List keys API with Authentication
==================================

**POST**: /v1/user/secret/list

Required informations
----------------------------------------

* The access token of auth0 user 
* Email

UI Request signature
---------------------
Request header: 
Authorization: id_token from Auth0

::

	{
		"email" : "adsfasdf@gmail.com",
	}

Successful Response Signature
-------------------------------

::

	{
		"keys": {
        	"kai_wang3": {
            	"classification": "top",
            	"description": "A default secret",
            	"expiration_time": "Sun, 21-Oct-2018 15:01:10 GMT",
            	"last_saved_time": "Oct 11 15:01:11 2018",
            	"total_versions": 1
       		}
    	},
    	"status": "success"
	}

Error Response return
------------------------

::

	{
		"status": "error",
    	"message": “Failed to list keys."
	}