# CET Eligibility Calculator

This is a simple C program that helps students determine their eligibility for various courses after completing their 12th grade based on their CET percentile. The program calculates the approximate rank based on the total number of students and checks eligibility for specific branches within each course.

## Features

- Calculate approximate rank based on CET percentile.
- Determine eligibility for different branches in:
  - Engineering (B.Tech)
  - Bachelor of Science (BSc)
  - Bachelor of Commerce (BCom)
  
## How It Works

1. The user inputs their course selection (1 for Engineering, 2 for BSc, 3 for BCom).
2. The user inputs their CET percentile.
3. The program calculates the approximate rank based on the input percentile.
4. The program checks eligibility for different branches based on the input marks.

## Course Branch Eligibility Criteria

### Engineering (B.Tech)
- **Software Engineering**: Requires at least 96 marks.
- **Mechanical Engineering**: Requires at least 92 marks.
- **Electrical Engineering**: Requires at least 94 marks.

### Bachelor of Science (BSc)
- **BCS**: Requires at least 70 marks.
- **BSc Maths**: Requires at least 65 marks.
- **BSc in Electronics**: Requires at least 60 marks.

### Bachelor of Commerce (BCom)
- **Business Laws**: Requires at least 45 marks.
- **BSc Marketing**: Requires at least 45 marks.
- **BSc in Income Tax**: Requires at least 45 marks.

## Usage

1. Clone this repository.
2. Compile the C code using a C compiler.
3. Run the executable and follow the prompts to input your course and marks.

## Example

Enter the course after 12th (1 for Engineering, 2 for BSc, 3 for BCom): 1 Enter percentile of CET: 95 Your approximate rank based on a CET percentile of 95.00 is: 10000 You can do Engineering Select branch for B.Tech based on marks: Enter 'c' for Software Engineering, 'm' for Mechanical Engineering, 'e' for Electronics Engineering: c Eligible for Software Engineering


## Relevant Links

For more information on CET and the courses offered, visit the official [CetCell website](https://cetcell.mahacet.org).

## Contributing

If you'd like to contribute to this project, feel free to fork the repository and submit a pull request.
