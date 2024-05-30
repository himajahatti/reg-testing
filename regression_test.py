import subprocess


subprocess.run(["gcc","-o","my_function.exe","my_function.c"])
test_cases=[
    {"input":(2,3),"expected_output":5},
    {"input":(10,-5),"expected_output":5},
    {"input":(0,0),"expected_output":0},
]
for test_case in test_cases:
    input_data = test_case["input"]
    expected_output=test_case["expected_output"]

    result = subprocess.run(["./my_function",str(input_data[0]),str(input_data[1])],capture_output = True,text=True)
    if int(result.stdout) == expected_output:
        print(f"Test case passed: input={input_data}, expected_output={expected_output}")
    else:
        print(f"Test case failed: input={input_data}, expected_output={expected_output}, actual_output={result.stdout}")