# Chef and-Stock-Prices

The approach starts by reading the number of test cases T. For each test case, it takes four inputs: the starting price S, the acceptable price range [A, B], and the percentage change C. The new price of the stock is calculated using the formula: newPrice = S + (S * C / 100.0), which accounts for the percentage increase or decrease in the price.

Once the new price is computed, the program checks if it lies within the inclusive range [A, B]. If it does, it means Chef can buy the stock, so it prints YES; otherwise, it prints NO. This logic is applied for each test case in a loop, providing a direct and efficient solution.
