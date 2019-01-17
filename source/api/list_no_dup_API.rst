Versioning Rest API List with Authentication
==============================================

List all the keys with total version:

**POST**: /v1/user/key/list_no_dup

Required informations 
----------------------

* The tokenId of auth0 user

UI Request signature
----------------------

::

	{
		“email” : “adsfasdf@gmail.com”,
	}

Successful Response Signature
------------------------------

::

	{
		"keys": {
        	"kai_wang2": {
            	"last_saved_time": "Sep 10 07:55:21 2018",
            	"total_versions": 3
        	}
    	},
    	"status": "success"
	}

Error Response return
----------------------

::

	{
		“status”: “error”,
		“message”: “Failed to get the key list.”
	}