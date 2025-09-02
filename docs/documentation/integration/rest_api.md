# REST API

Some of Slideshow’s functionality can be also controlled over the local network via REST API, which is available on the same address and port as the web interface. It can be used for integrating Slideshow with other services, scripts and automation tools.

Below you can find OpenAPI definition of Slideshow’s public REST API, together with description and examples ([open in new window](https://slideshow.digital/openapi/index.html)). This REST API is stable and there won’t be any breaking changes without prior notification.

## Security

The API is protected by HTTP Basic Authentication. Every call has to have HTTP header `Authorization: Basic <credentials>`, with credentials in form `username:password` encoded in Base64. You can use the same username and password as for the web interface.

## OpenAPI definition

Note that the request from the interface below directly to your Slideshow instance might not work, due to browser’s CORS security policy.

<iframe src="https://slideshow.digital/openapi/index.html" style="width: 100%; height:1000px;border:1px solid grey"></iframe
