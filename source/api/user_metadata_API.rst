Get user metadata
====================

**POST**: /v1/user/key/user_metadata

UI Request signature
----------------------

::

	{
		"email": "adsfasdf@gmail.com",
	}

Successful Response Signature
-------------------------------

::

	{
		"metadata":{ 
             "m1":"value1",
             "m2":"value2",
             "m3":"value3",
             .
             .
            "mn":"valuen"
        },
        "last_saved_time": "Oct 11 15:01:11 2018"
        "status": "success"
	}

Error Response return
----------------------

::

	{
		"status": "error",
    	"message": "Failed to get metadata"
	}