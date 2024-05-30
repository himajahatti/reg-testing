import subprocess
import coverage
def test_binary_search():
    test_cases = [
        {"array": [1, 2, 3, 4, 5, 6, 7, 8, 9, 10], "target": 1, "expected_result": 0},
        {"array": [1, 2, 3, 4, 5, 6, 7, 8, 9, 10], "target": 5, "expected_result": 4},
        {"array": [1, 2, 3, 4, 5, 6, 7, 8, 9, 10], "target": 10, "expected_result": 9},
        {"array": [1, 2, 3, 4, 5, 6, 7, 8, 9, 10], "target": 11, "expected_result": -1}
    ]
    cov = coverage.Coverage()
    cov.start()
    for test_case in test_cases:
        array = test_case["array"]
        target = test_case["target"]
        expected_result = test_case["expected_result"]

        # Compile the C code
        subprocess.run(["gcc", "-fprofile-arcs", "-ftest-coverage", "-o", "binary_search", "binary_search.c"])

        # Run the compiled binary file with arguments
        result = subprocess.run(["./binary_search"] + [str(element) for element in array] +
                                [str(0), str(len(array) - 1), str(target)],
                                capture_output=True, text=True)

        # Capture the output and compare with expected result
        output = result.stdout.strip()
        assert int(output) == expected_result, f"Expected {expected_result}, but got {output}"

        # Print the test result
        print(f"Target: {target}, Expected: {expected_result}, Result: {output}")
    cov.stop()
    cov.save()
    print("All test cases passed!")
    cov.report()
test_binary_search()
subprocess.run(["gcov", "binary_search.c"])