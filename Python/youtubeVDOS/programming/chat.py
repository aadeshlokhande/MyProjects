from transformers import pipeline, set_seed

generator = pipeline(, model='gpt2')
set_seed(42)

prompt = "are you ok"
output = generator(prompt, max_length=100)

print(output[0]['generated_text'])
