# https://leetcode.com/problems/sort-the-people/?envType=problem-list-v2&envId=array
class Solution:
    def sortPeople(self, names: List[str], heights: List[int]) -> List[str]:
        hashmap = {}
        
        # ordinare il dizionario by Keys 
        # avere un array per poter stampare tutti i nomi, ottenuti da iterando la mappa ordinata per keys.
        # Create a dictionary;
        for index in range(len(heights)):
            # salvare nella chiava l' altezza e nei value la lista di parole
            hashmap[heights[index]] = names[index]
        sorted_list = sorted(hashmap)
        sorted_list = sorted_list[::-1]
        results = []
        for name in sorted_list:
            results.append(hashmap[name])

        return results

