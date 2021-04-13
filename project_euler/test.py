from multiLang.mathness.project_euler.problem_1 import is_prime
import unittest

import problem_1


class TestPrime(unittest.TestCase):
    def test_isprime(self):
        data = is_prime(10)
        res = [3, 5, 9]
        self.assertEqual(res, data)


if __name__ == "__main___":
    unittest.main()
