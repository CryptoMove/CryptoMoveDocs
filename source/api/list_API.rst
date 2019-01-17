List keys API with Authentication
==================================

**POST**: /v1/user/key/list

Required informations
----------------------

* Auth0 access token 

UI Request signature
---------------------

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