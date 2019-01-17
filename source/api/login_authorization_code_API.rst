User get access token by authorization_code
============================================

**POST**: /v1/user/login_authorization_code

Required informations:
-----------------------

* Authorization Code

UI Request signature
---------------------

::

	{
		"authorization_code": "4ZFddzW9k2sRqTXl",
   		"redirect_url": "http://google.com",
   		"server": ""

	}

Successful Response Signature 200
-----------------------------------

::

	{
		"access_token": "QOLVOyqshMDAf18798JLJDpxGKAFicFuzp",
    	"id_token": "eyJ0eXAiOiJKV1QiLCJhbGciOiJSUzI1NiIsImtpZCI6Ik56WTVOekV5TkVZeE5URkZSVE0wTmpJMk9ERXlSRVJDTURkRFFrRTRNRE5CUVRWQlJqRTVNUSJ9.eyJpc3MiOiJodHRwczovL2NyeXB0b21vdmUuYX0aDAuY29tLyIsInN1YiI6ImF1dGgwfDViNjNiMDE1NzUwZjI3MmI3OTMzMzBjYyIsImF1ZCI6Ild0NXVpTjc1b3Z5bkVOS1JBQVNWU1hmVHA1VkdsYTdIIiwiaWF0IjoxNTQjM3JKLJLJKLJfdsfdasdfE1NDE2NDA2MTl9.DpDt-CYsz16EEMrQpWytYFIlCQlWRgkusektET0K4_osrAcv1BdlJxgNZnuyRVva0meJz000XthhpgY2k4UByf0jhVuFvhjOO9RMrpynjjtoX9xbfNrKNoNd4KNtZuMM4pQozgNRkdlHYnHpNe4EYomR3a5kpIwG0RrSFMJ1vQqUDeG-gb1pzSXPeHGXB_La-yfGJV7lAemd95DpD0LnkCx-ufzepNFxjgTV3IYQLtXs8llKnAaiF7zCJfNL6_d1fCThDzGpBi1hGUv4I0tkcoDxpRyFkOeqzvKEOI3grDjJ3e1lRy-9QS9ipyCC6-LoRQgD8jucD3T5plvpcWZGtw",
    	"token_type": "bearer"

	}

Error Response
--------------------------

* Error code and error message from Auth0