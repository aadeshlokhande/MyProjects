import google_bard

# Replace "YOUR_API_KEY" with the actual API Key obtained earlier
API_KEY = "AIzaSyBPxrrLWJkZsKsnrTatxGZz7BEOhaQosyU"

# def main():
# 	query = "What is the meaning of life?"
# 	response = google_bard.generate_text(query, api_key=API_KEY)
# 	print("Google Bard Response (Using google_bard Module):")
# 	print(response)

# if __name__ == "__main__":
# 	main()

# pip install bard_api

from bard_api import retriever

# Input query to retrieve information on
input_query = 'What is the capital of France?'

# Retrieve information on the input query with Bard-API
result = retriever.retrieve(input_query)

# Print the result
print(result)
