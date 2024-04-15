import os
from twilio.rest import Client


# Find your Account SID and Auth Token at twilio.com/console
# and set the environment variables. See http://twil.io/secure
account_sid = os.environ['TWILIO_ACCOUNT_SID']
auth_token = os.environ['TWILIO_AUTH_TOKEN']
client = Client(account_sid, auth_token)
	
call = client.calls.create(
                        twiml='<Response><Say>Your simulation exited!</Say></Response>',
                        to='+447826713931',
                        from_='+441315101942'
                    )

print(call.sid)
