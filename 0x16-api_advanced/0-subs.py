#!/usr/bin/python3
"""
Function to make an API call
"""

import requests


def number_of_subscribers(subreddit):
    """
    Function to make an API call that returns total number of subscribers
    for a given subreddit

    Args:
        subreddit: name of subreddit
    """
    URL = "https://www.reddit.com/r/{}/about.json".format(subreddit)
    data = requests.get(URL, headers={'User-agent': 'my-bot'})

    if data.status_code == 200:
        return data.json().get('data').get('subscribers')
    else:
        return 0
