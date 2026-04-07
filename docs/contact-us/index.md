---
icon: material/email
hide:
  - navigation
  - toc
---

# Contact us

<div class="grid cards" markdown>

- :fontawesome-solid-envelope: __Email:__<br>General inquiries: [info@slideshow.digital](mailto:info@slideshow.digital)<br>Technical support: [support@slideshow.digital](mailto:support@slideshow.digital)
- :fontawesome-solid-map: __Address:__<br>SlideShow / New Rent s.r.o.<br>Belanikova 6, Bratislava, Slovakia
</div>

Missing a feature? Interested in branding? Want to support the development? Let us know and we will get back to you shortly via email!

If you found a bug, you can send us a [bug report](../documentation/troubleshooting.md#bug-report) directly from Slideshow. This is a preferred way, as it attaches logs from the device automatically, which helps us with troubleshooting.

<script src="https://www.google.com/recaptcha/api.js"></script>
<script>
let url = new URL(window.location.href);
if (url.searchParams.get("success") === "true") {
    document.write('<div class="admonition success"> <p class="admonition-title">Message sent</p> <p>Thank you for your message, it has been sent. If you didn’t receive a reply from us within a few days, please also check your spam folder.</p> </div>')
}
</script>
<script>
function onSubmit(token) {
 document.getElementById("contact-form").requestSubmit();
}
</script>

<form id="contact-form" method="post" action="/send-email.php">
    <div>
        <label for="name">Name:</label>
        <input type="text" name="name" id="name" placeholder="Your name" required class="md-input md-input--stretch">
    </div>
    <div>
        <label for="email">Email address:</label>
        <input type="email" name="email" id="email" placeholder="Your email address" required class="md-input md-input--stretch">
    </div>
    <div>
        <label for="subject">Subject:</label>
        <input type="text" name="subject" id="subject" placeholder="Title of your message" required class="md-input md-input--stretch" minlength="5">
    </div>
    <div>
        <label for="message">Message:</label>
        <textarea placeholder="Your message" name="message" id="message" required  class="md-input md-input--stretch" rows="8" style="height: auto" minlength="10"></textarea>
    </div>
    <button data-action="submit" class="md-button md-button--primary g-recaptcha" data-callback="onSubmit" data-sitekey="6LcJ1dYUAAAAAOUNrTD0AlFVXxKaPbtYGqgb7Eei">Send</button>
</form>

If you didn’t receive a reply from us within a few days, please also check your spam folder.

For new features and found bugs, you can also open an issue on <https://github.com/Slideshow-digital/slideshow-support/issues>, and we will reply there (this will be publicly visible).

