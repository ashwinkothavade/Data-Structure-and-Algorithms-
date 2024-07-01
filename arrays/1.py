import requests
import random
import time

# ThingSpeak API endpoint
url = 'https://api.thingspeak.com/update'

# Your ThingSpeak API Write Key
api_key = 'AEFCN9KQDLDVCI15'

def send_data_to_thingspeak(data):
    payload = {'api_key': api_key, 'field1': data}
    try:
        response = requests.post(url, params=payload)
        if response.status_code == 200:
            print("Data sent successfully to ThingSpeak")
        else:
            print("Failed to send data to ThingSpeak")
    except Exception as e:
        print("Exception occurred:", e)

def main():
    while True:
        # Generate a random number
        random_number = random.randint(0, 100)
        print("Generated Random Number:", random_number)
        
        # Send the random number to ThingSpeak
        send_data_to_thingspeak(random_number)
        
        # Wait for 15 seconds before sending the next data
        time.sleep(15)

if __name__ == "__main__":
    main()
