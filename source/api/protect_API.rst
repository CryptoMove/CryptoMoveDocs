Upload key API with Authentication:
====================================

**POST**: /v1/user/key/protect

Required informations:
-----------------------

* Auth0 access token
* Key name
* Key value

UI Request signature
---------------------

::

	{
    	"email" : "adsfasdf@gmail.com", 
		"key_name" : "test name",
		"key_value": "key value",
		"without_list": 1 (Optional, if it is not set, the API will defaultly return key list)  
	}

Successful Response Signature 200
-----------------------------------

::

	{
		"key_name": "kai_wang3",
    	"list_no_dup": {
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
-----------------------

{
    "status": "error",
    "message": "Failed to saving the key."
}