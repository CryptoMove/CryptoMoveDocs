Update key metadata
====================

**POST**: /v1/user/key/update_key_metadata

UI Request signature
----------------------

::

	{
		"email": "kai02@cryptomove.com",
    	"key_name":"kai_wang2",
        "key_version": 5,
        "metadata":{ 
    	   "expiration_time": 12,
    	   "description": "A customer secret",
    		"classification": "top",
            "m1":"value1",
            "m2":"value2",
            "m3":"value3",
            .
            .
            "mn":"valuen"
        }
	}

Successful Response Signature
-------------------------------

::

	{
		"metadata":{ 
    		"expiration_time": 12,
    		"description": "A customer secret",
    		"classification": "top",
        	"m1":"value1",
       		"m2":"value2",
        	"m3":"value3",
        	.
        	.
        	"mn":"valuen"
        },
        key_name": "kai_wang2",
    	"status": "success"

	}

Error Response return
----------------------

::

	{
		“status”: “error”,
    	“message”: “Failed to update the description.”
	}