
import requests

# ThingSpeak API endpoint for reading data
url = 'https://api.thingspeak.com/channels/2494491/feeds.json'

# Your ThingSpeak Channel ID
channel_id = '2494491'

def get_data_from_thingspeak():
    try:
        response = requests.get(url, params={'results': 1})
        if response.status_code == 200:
            data = response.json()
            if 'feeds' in data and len(data['feeds']) > 0:
                latest_entry = data['feeds'][0]
                print("Latest data from ThingSpeak:", latest_entry['field1'])
            else:
                print("No data available in ThingSpeak channel")
        else:
            print("Failed to fetch data from ThingSpeak")
    except Exception as e:
        print("Exception occurred:", e)

def main():
    get_data_from_thingspeak()

if __name__ == "__main__":
    main()
