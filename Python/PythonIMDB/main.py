# https://www.youtube.com/watch?v=vzOdCPV7zvs
import imdb 

moviesDB = imdb.IMDb()

# help
# print(dir(moviesDB))

# 1) search for a title
# movies = moviesDB.search_movie('jawan')

# print("searching for 'jawan'")

# # print(movies[0].keys())
# for movie in movies:
#     for key in movie.keys():
#         print(f"{key} = {movie[key]}")
#     print()

# =======================================
# 2) movie info
name = input("enter a movie name = ")
movies = moviesDB.search_movie(name)
id = movies[0].getID()
movie = moviesDB.get_movie(id)

# data = ", ".join(map(str,movie['cast']))
# print(data)



file = open(f"{name}.txt","w")
for key in movie.keys():

    print(f"{key} = {movie[key]}",file=file)
    print(file=file)

# ===========================================
