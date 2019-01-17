Update user metadata
====================

**POST**: /v1/user/key/update_user_metadata

UI Request signature
----------------------

::

	{
		"email": "kai02@cryptomove.com",
        "metadata":{ 
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
            "m1":"value1",
            "m2":"value2",
            "m3":"value3",
            .
            .
            "mn":"valuen"
        },
        "status": "success"

	}

Error Response return
----------------------

::

	{
		"status": "error",
    	"message": <error message>
	}