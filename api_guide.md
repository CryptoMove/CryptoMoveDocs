# Here is the structure of the User Guide
* Overview
* Getting Started
  * Authentication
  * User Accounts
* Secrets: Basic Lifecycle
  * Creating a Secret
  * Exposing a Secret
  * Changing a Secret
  * Deleting a Secret
* Working with Secrets
  * Sharing Secrets
  * Updating Secrets
  * Listing Secrets

# Overview (new page)
CryptoMove Tholos is a key vault and secrets management solution that protects API keys and other app secrets with decentralization and a moving target defense. No longer do you need to embed secrets in your code, with all the maintenance headaches that comes with it. Neither are you stuck emailing secrets to your fellow developers, exposing secrets in plain text. With Tholos, you can store and maintain your secrets through an intuitive set of REST APIs or user interface, whichever fits your development style. 

With Tholos, not only do you have the benefits of a secrets management system to manage your application's keys, but they are protected with the ultra-secure moving target defense. This patented security strategy sets Tholos apart from other secrets management solutions. Once stored, secrets remain safe as Tholos continuously and dynamically shifts its defensive infrastructure such as networks, data, or the application layer. You can entrust your most valuable crown jewels to the Tholos key vault.

If you are using REST APIs to store and work with your secrets in Tholos, you are ready to [get started](https://docs.cryptomove.com/docs/getting-started). If you prefer, you can use the [user interface](https://app.cryptomove.com) to work with the key vault.

# Getting Started (new page)
As you work with the Tholos APIs, you'll want to use the base URL: `http://api.cryptomove.com/v1`. 

The generated code samples in the [API Reference Guide](https://docs.cryptomove.com/reference) use the base URL `http://cryptomove-api.getsandbox.com`, which allows you to test the API calls without affecting the Tholos database. If you are copying and pasting the generated code into your application code, be sure to change the base URL.


## Authentication
Most API calls to Tholos require an access token that is included in the header of the API request. Obtaining the initial access token is a one-time activity that requires a browser. During this process you also get a refresh token that the [refresh_token](https://docs.cryptomove.com/reference#post_user-refresh-token) endpoint uses to acquire a new access token when the old access token expires. Access tokens expire after 24 hours.

To acquire an initial access token and refresh token:
1. Go to https://app.cryptomove.com and create an account. Contact a CryptoMove representative for the beta code that you need when creating your account. 
2. Once logged into the Tholos key vault, select **API Authenticator** in the left-hand navigation bar.
3. Select **Generate**.
4. When the Auth0 Management API app opens, log in with your new CryptoMove credentials.
5. In the API Authenticator, select **Access Token**.
6. Copy the new access token to a secure location. This is the initial access token that you add to the header of your API calls.
7. Select **Refresh Token**.
8. Copy the generated refresh token to a secure location. This is the refresh token that you pass to the refresh_token endpoint to get a new access token.

### Authenticating API requests
To authenticate the Tholos user who is making an API request, you must add an `authorization:{access token}` key-value pair to the header of the request. 

Since access tokens expire every 24 hours, you must use the [refresh_token](https://docs.cryptomove.com/reference#post_user-refresh-token) endpoint whenever you need a new access token for your API requests. 

## User Accounts
You create a new Tholos user when [generating the user's access token and refresh token](https://docs.cryptomove.com/docs/authentication). Once logged in, the user can make API calls without visiting https://app.cryptomove.com again. Users can log out of Tholos using the user interface or by calling the [logout](https://docs.cryptomove.com/reference#post_user-logout) endpoint. 

To change a user's password, use the [resetpassword](https://docs.cryptomove.com/reference#post_user-resetpassword) endpoint.

# Secrets: Basic Lifecycle (new page)
Each secret consists of a key-value pair that gets stored in the Tholos key vault. Once created, the secret is identified in API calls by its key name. As you [change the value](https://docs.cryptomove.com/docs/changing-secrets) of a secret, new versions are created. Each version of a secret has the same key but a different value.

This section covers the basics of managing your secrets in CryptoMove Tholos. It explains how to [create](https://docs.cryptomove.com/docs/creating-secrets), [expose](https://docs.cryptomove.com/docs/exposing-secrets), [change](https://docs.cryptomove.com/docs/changing-secrets), and [delete](https://docs.cryptomove.com/docs/deleting-secrets) secrets. 

## Creating Secrets
Secrets management begins by storing the key-value pair of new secret in Tholos. When creating a new secret, you can provide a classification, description, and expiration date for the secret. Though the Tholos user interface limits the classification to Sensitive, Secret, and Top Secret, you can specify any classification you want when creating a new secret using the API.  

**I want to:**
[Create a secret](https://docs.cryptomove.com/reference#post_user-secret-protect)

## Exposing Secrets
The value of a secret is safe in the Tholos key vault until its value is needed by an application. Using the expose endpoints is the only way to gain access to the value of a secret. [Listing secrets](https://docs.cryptomove.com/docs/listing-secrets) provides information about the secret, including its key name, but does not reveal the value of a secret. 

**I want to:**
[Expose a secret](https://docs.cryptomove.com/reference#post_user-secret-expose)
[Expose an older version of a secret](https://docs.cryptomove.com/reference#post_user-secret-version-expose)
[Expose a shared secret](https://docs.cryptomove.com/reference#post_user-secret-expose-link)
[Expose an older version of a shared secret](https://docs.cryptomove.com/reference#post_user-secret-version-expose-link)

## Changing Secrets
To change the value of an existing secret, simply call the [protect](https://docs.cryptomove.com/reference#post_user-secret-protect) endpoint again, passing the name of the secret's key along with the new value. A new version of the secret is created. A user who was granted write permissions to the secret through [sharing](https://docs.cryptomove.com/docs/sharing-secrets) can change the value, but must use the [protect_link](https://docs.cryptomove.com/reference#post_user-secret-protect) endpoint instead of the protect endpoint.

You can also update the description, classification, and expiration date of a secret without updating its value. For details, see [Updating Secrets](https://docs.cryptomove.com/docs/updating-secrets).

**I want to:**
[Update the value of a secret](https://docs.cryptomove.com/reference#post_user-secret-protect)
[Update the value of a shared secret](https://docs.cryptomove.com/reference#post_user-secret-protect-link)

## Deleting Secrets
When the life of a secret has come to an end, it can be removed from the Tholos key vault. Only the user who created a secret can delete it. This user has the choice of deleting all versions of a secret or only a specific version of the secret. 
**I want to:**
[Delete all versions of a secret](https://docs.cryptomove.com/reference#post_user-secret-delete)
[Delete a specific version of a secret](https://docs.cryptomove.com/reference#post_user-secret-version-delete)

# Working with Secrets (new page)
If you are looking for the basics of secret management such as creating and exposing secrets, see [Secrets: Basic Lifecycle](https://docs.cryptomove.com/docs/secrets-basic-lifecycle).

This section describes [sharing](https://docs.cryptomove.com/docs/sharing-secrets), [updating](https://docs.cryptomove.com/docs/updating-secrets), and [listing information](https://docs.cryptomove.com/docs/listing-secrets) about secrets.

## Sharing Secrets
Securely sharing secrets with other Tholos users is a powerful feature of secrets management. No longer do you need to email secrets in plain text. When a secret is shared with a user, Tholos generates a special key name known as a link. Users with shared access to a secret must pass this linked key name to special endpoints designed for updating, exposing, and listing shared secrets. These endpoints end with \_link. For example, to expose a shared secret, the user with read access must use the expose_link endpoint.

To see a list of the secrets that have been shared with a user and find the linked key name, look at the link object in the response to the list_no_dup endpoint. 

Only the user who created the secret can share it with other users. Users who gain write access to the secret can update its value, while a user who has read access can expose its value. Granting a user write access does not give them permission to delete the secret.  

**I want to:**
[Share a secret](https://docs.cryptomove.com/reference#post_user-secret-share)
[Unshare a secret](https://docs.cryptomove.com/reference#post_user-secret-unshare)

## Updating Secrets

In addition to [updating the value](https://docs.cryptomove.com/docs/changing-secrets) of a secret, you can update the description, classification, and expiration date of a secret. Updating the classification applies to all versions of a secret, while updating the description and expirations date is limited to a specific version of a secret. 

**I want to:**
[Update the value of a secret](https://docs.cryptomove.com/reference#post_user-secret-protect)
[Update the value of a shared secret](https://docs.cryptomove.com/reference#post_user-secret-protect-link)
[Update the description of a secret](https://docs.cryptomove.com/reference#post_user-secret-update-description)
[Update the classification of a secret](https://docs.cryptomove.com/reference#post_user-secret-update-classification)
[Update the expiration date of a secret](https://docs.cryptomove.com/reference#post_user-secret-update-expiration)

## Listing Secrets
The list endpoints provide details about the secret such as the key name, classification, and expiration date. Listing information about secrets does not expose the values of the secrets; only the [expose](https://docs.cryptomove.com/docs/exposing-secrets) endpoints reveal the value of a secret. 

**I want to:**
[List a user's secrets and shared secrets](https://docs.cryptomove.com/reference#post_user-secret-list-no-dup)
[List all versions of a secret](https://docs.cryptomove.com/reference#post_user-secret-version-list)
[List all versions of a shared secret](https://docs.cryptomove.com/reference#post_user-secret-version-list-for-link)

