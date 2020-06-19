COINS = (1, 4, 6, 10)


def get_change(m, coin_array):
    # write your code here
    # change_cents = int(m * 100)
    if m == 0:
        return 0
    # for each m value inside get_change recursive calls, best is assigned -1
    best = -1

    for coin in coin_array:
        # The algorithm will only check the coins that are lower than m for each recursive call
        if coin <= m:
            # Firstly, function calls istelf recursively until reaching get_change(0,coin_array), which returns 0 and triggers coin checks and second if clause
            next_try = get_change(m - coin, coin_array)
        if best < 0 or best > next_try + 1:

            best = next_try + 1

    return best


if __name__ == '__main__':
    m = int(input('Enter your money:\n'))
    print('Lowest number of coins for your change: {}'.format(get_change(m, COINS)))
