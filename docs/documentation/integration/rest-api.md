# REST API

The Slideshow REST API allows you to control and monitor selected functions of the app remotely over your local network. It is served from the same address and port as the web interface, making it easy to integrate Slideshow into your existing systems, scripts, or automation workflows.

Typical use cases include:

- Integrating Slideshow with external management dashboards
- Remote monitoring and content control
- Automating configuration or playlist updates
- Embedding device status information in third-party tools

This REST API is stable, and there won’t be any breaking changes without prior notification.

## Security

The REST API is secured with HTTP Basic Authentication. Use the same credentials as for logging into the web interface.

Each request must include an `Authorization` header in this format:
```
Authorization: Basic <credentials>
```
where `<credentials>` is your `username:password` encoded in Base64.

## OpenAPI definition

Below you can explore the OpenAPI specification of Slideshow’s public REST API, including endpoint descriptions and example requests.

[Open in new window](openapi/index.html){:target="_blank"}

Please note that the direct API calls from the interface above to your own Slideshow instance may not work due to browser CORS security restrictions. You can test API requests also using a dedicated REST client such as Postman, curl, or your automation framework.

<iframe src="../openapi/index.html" style="width: 100%; height:1000px;border:1px solid grey"></iframe>
