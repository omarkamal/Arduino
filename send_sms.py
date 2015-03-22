from twilio.rest import TwilioRestClient

account_sid = "ACaa4e9d4d4f81abfc262e27f302cc4e69" 
auth_token = "25680918935d341f0cebd32e51884094"
client = TwilioRestClient(account_sid, auth_token)

message = client.messages.create(
		to="+919886750222", 
		from_="+15005550006",
		body="From Workbench Projects, Omar"
)
